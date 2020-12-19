/*****************************************************************************
 * Copyright (c) 2014-2018 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#include "TestData.h"

#include <gtest/gtest.h>
#include <openrct2/Context.h>
#include <openrct2/Game.h>
#include <openrct2/OpenRCT2.h>
#include <openrct2/audio/AudioContext.h>
#include <openrct2/core/File.h>
#include <openrct2/core/Path.hpp>
#include <openrct2/core/String.hpp>
#include <openrct2/platform/platform.h>
#include <openrct2/ride/Ride.h>
#include <openrct2/ride/RideData.h>
#include <string>

using namespace OpenRCT2;

class RideRatings : public testing::Test
{
protected:
    void CalculateRatingsForAllRides()
    {
        for (const auto& ride : GetRideManager())
        {
            ride_ratings_update_ride(ride);
        }
    }

    void DumpRatings()
    {
        for (const auto& ride : GetRideManager())
        {
            std::string line = FormatRatings(ride);
            printf("%s\n", line.c_str());
        }
    }

    std::string FormatRatings(const Ride& ride)
    {
        RatingTuple ratings = ride.ratings;
        std::string line = String::StdFormat(
            "%s: (%d, %d, %d)", RideTypeDescriptors[ride.type].EnumName, static_cast<int>(ratings.Excitement),
            static_cast<int>(ratings.Intensity), static_cast<int>(ratings.Nausea));
        return line;
    }
};

TEST_F(RideRatings, all)
{
    std::string path = TestData::GetParkPath("bpb.sv6");

    gOpenRCT2Headless = true;
    gOpenRCT2NoGraphics = true;

    core_init();
    auto context = CreateContext();
    bool initialised = context->Initialise();
    ASSERT_TRUE(initialised);

    load_from_sv6(path.c_str());

    // Check ride count to check load was successful
    ASSERT_EQ(ride_get_count(), 134);

    CalculateRatingsForAllRides();

    // Load expected ratings
    auto expectedDataPath = Path::Combine(TestData::GetBasePath(), "ratings", "bpb.sv6.txt");
    auto expectedRatings = File::ReadAllLines(expectedDataPath);

    // Check ride ratings
    int expI = 0;
    for (const auto& ride : GetRideManager())
    {
        auto actual = FormatRatings(ride);
        auto expected = expectedRatings[expI];
        ASSERT_STREQ(actual.c_str(), expected.c_str());

        expI++;
    }
}
