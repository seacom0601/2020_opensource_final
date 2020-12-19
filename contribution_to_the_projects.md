# Introduction

This page is a step-by-step explanation on how to contribute to the OpenRCT2 project, whether you're just getting started with programming or if you're already seasoned and just want to understand some details.

## Table of Contents

1. [Introduction](https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute#introduction)
   1. [Get Original Game](https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute#get-original-game)
   2. [Make GitHub Account](https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute#github-account)
   3. [Fork & Clone Project](https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute#fork--clone-project)
   4. [Building/Installation](https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute#building--installing)
2. [Contributing](https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute#contributing)
   1. [Finding something to work on](https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute#finding-something-to-work-on)
   2. [Developing](https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute#developing)
   3. [Testing](https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute#testing)
   4. [Submitting / Updating contribution](https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute#submitting-or-updating-contribution)

## Get Original Game

OpenRCT2 requires original files of RollerCoaster Tycoon 2 to play. It can be bought at either [Steam][rct2-steam] or [GOG.com][rct2-gog]. If you have the original RollerCoaster Tycoon and its expansion packs, you can [point OpenRCT2 to these][rct1-local] in order to play the original scenarios.

## GitHub Account

If you ever need to report a bug, request a feature or you just want to contribute to the project, you will need a GitHub account. Luckily, you're already at it, so just head [here and create yours][github-signup].

## Fork & Clone Project

OpenRCT2 sort of uses the [gitflow workflow][gitflow-atlassian]. If you are new to git and collaborative coding it's a recommended read to get a grasp of some concepts and terminology.

### Forking OpenRCT2

Because only team members can make changes to the main OpenRCT2 repository, you will need to create a fork, which is a copy of it to call your own and modify it as you wish.
- To fork, follow [this GitHub tutorial][github-fork-example], but use [OpenRCT2][openrct2-repo] instead of the `octocat/Spoon-Knife` repository mentioned there.
- Want to know more about *forking*? [Wikipedia's got you covered][wikipedia-fork]!

### Cloning OpenRCT2

Now you need to clone, which is essentially downloading the repository to your computer. You can do that in two ways:
- [Using GitHub Desktop][github-cloning-gh-desktop]
- After you have [set-up the git command line][github-git-setup], running `git clone https://github.com/OpenRCT2/OpenRCT2.git`

## Building / Installing

OpenRCT2 supports different platforms and the instructions will vary depending on what you have and want to use. Pick the appropriate tutorial from the list below and have fun:

* [Building OpenRCT2 on Linux](https://github.com/OpenRCT2/OpenRCT2/wiki/Building-OpenRCT2-on-Linux)
* [Building OpenRCT2 on macOS using CMake](https://github.com/OpenRCT2/OpenRCT2/wiki/Building-OpenRCT2-on-macOS-using-CMake)
* [Building OpenRCT2 on macOS using Xcode (recommended)](https://github.com/OpenRCT2/OpenRCT2/wiki/Building-OpenRCT2-on-macOS-using-Xcode)
* [Building OpenRCT2 on Windows](https://github.com/OpenRCT2/OpenRCT2/wiki/Building-OpenRCT2-on-Windows)
* [Building OpenRCT2 on Windows Subsystem for Linux](https://github.com/OpenRCT2/OpenRCT2/wiki/Building-OpenRCT2-on-Windows-Subsystem-for-Linux)

# Contributing

If you've completed all the steps above successfully, you're now ready to start contributing with the project, so let's explain how it works.

## Finding something to work on

There are multiple things to helps us with, but for a newcomer, you might not know where to start. This tutorial assumes you want to contribute to the main game.

We use [OpenRCT2's issue tracker][openrct2-issues] to list all of the tasks that need to be done, They will vary wildly in scope, some of them will be to fix a bug, others to implement a feature or refactor a code for improved legibility. 

To make sure the goal of each task is clear we use `labels`, you can [browse ours][openrct2-labels] to read about what each of them mean. If you're a newcomer look for the [open issues][openrct2-good-first-issues] with the `good first issue` label (or [`hacktoberfest`][openrct2-hacktoberfest] if it's october), this means that the task was well defined and considered simple enough to be picked up by someone that never contributed to our code base.

Found one? Good! Now please:
- Do read the issue page to make sure no one is working on it. You can see that if someone has commented or if there are links there referencing someone else's commit. *Note*: in some cases those references or comment might be very old and the task might be up for grabs again.
- Comment that you're taking that task!

If you're unsure whether someone else is working on it, or if you want to do something that is not tracked, ask us [on discord][openrct2-discord] first! This makes sure you don't waste precious time doing something that is already being done or that was ruled out.

### Other contributions

The OpenRCT2 has plenty of other repositories. If you want to contribute with something else, go to each of them and check out. Here is a list with some of them and a brief explanation of what they entail:

- [OpenRCT2/Localisation][openrct2-localisation]: To translate the game into other languages.
- [OpenRCT2/OpenGraphics][openrct2-opengraphics]: Create new graphics for the game to use.
- [OpenRCT2/OpenMusic][openrct2-openmusic]: Create new music for the game to use.

## Developing

Now that you've already built the game and picked up the task, it is time to start developing!

### Create a branch

The first thing you'll want to do is to create a branch and leave the `develop` one clean. A branch contains a series of correlated commits and will be used to track your changes, you can have as many branches as you want and you should have different branches for different tasks.

To create a branch you can either:
- [Use GitHub Desktop][github-branch-gh-desktop]
- `git checkout -b name_of_your_branch` which will create and go to the branch.

Now you're ready to start changing the code!

### Coding Guidelines

When changing the code, make sure you follow our [coding style and guidelines][openrct2-coding-style]. If you follow the chances of your code being reviewed and merged by us faster increases considerably, as we won't have to spend time pointing out improvements.

### Commit Messages and guidelines

When you're ready to commit your first changes, make sure you follow our [commit messages guideline][openrct2-commit-messages]. Note that using the [keywords][github-linking-keywords] `Fix`, `Close`, `Part of` followed by the issue number `#XXXXX` are specially important to link back to the task you picked up and make sure others see that there's work ongoing there, along with helping us maintain the project :)

## Testing

There are plenty of ways to test your changes, the most common one is actually running the game and seeing that nothing broke. **Please make sure to test** things before submitting it for review, so you can catch silly errors. Running the game is covered on the [Building/Installing][openrct2-building-installing] section above.

## Submitting or updating contribution

So it works, yay! Now you have to [create a Pull Request][github-create-pull-request] (also known as PR) to let us review and at some point incorporate our changes to the code base. You can create it as a draft pull request if you don't feel like it is ready yet, but you want some input from the team members.

There are some things that you need to understand when making a PR:
- What is CI and what does it do?
- Sync and rebase branch
- Contributors file

### What is CI and what does it do?

CI stands for continuous integration and basically is a bunch of scripts and jobs that we run to make sure that the new changes being introduced are not breaking the game in anyway. If any of these checks fail, you know there is potentially something wrong with your changes, so **do click on details** for that check and investigate. Some of the jobs we run are:
- **Linter for the commit messages**: Makes sure they follow our guidelines
- **Clang Format**: A tool that ensures that we have a consistent formatting on our code base
- **Builds on multiple operational systems**: To ensure it continues to work on all of our supported platforms.

### Sync and rebase branch

When you forked the repository, you created a copy of your own and it is now a snapshot of the past. There will be times you want to make sure it is up-to-date with the original one, be it:
- To have the latest changes 
- Because your PR now has "merge conflicts". This means that `git` doesn't know how to integrate your changes and someone else's and you have to solve it yourself. OpenRCT2 will kindly ask you to "please rebase" your PR.

[This guide][openrct2-rebase-and-sync] has got you covered for both of these operations.

### Contributors file

If it's the first time you're contributing with the project, make sure to update the `contributors.md` file by appending your name at the end of the respective list.

# Contributing to OpenRCT2
Any contribution to OpenRCT2 is welcome and valued. Contributions can be in the form of bug reports, translation or code
additions / changes. Please read this document to learn how to contribute as effectively as possible. If you have any
questions or concerns, please ask in the [Discord chat](https://discordapp.com/invite/fsEwSWs).

# Reporting bugs
To report a bug, ensure you have a GitHub account. Search the issues page to see if the bug has already been reported.
If not, create a new issue and write the steps to reproduce. Upload a saved game if possible as this is very helpful
for users to replicate the bug. Please state which architecture and version of the game you are running, e.g.
```
OpenRCT2, v0.0.6-develop build 84ddd12 provided by AppVeyor
Windows (x86-64)
```

This can be found either at the bottom left of the title screen or
by running:
```
openrct2 --version
```

For Windows builds, OpenRCT2 will generate a memory dump and saved game when the game crashes unexpectedly. The game
will open explorer to these files automatically for you. They are placed inside your configured user directory which
by default is `%HOMEPATH%\Documents\OpenRCT2`.

# Translation
Translation is managed in a separate repository, [OpenRCT2/Localisation](https://github.com/OpenRCT2/Localisation).
You will find more information there.

# Contributing code
Please read [How To Contribute](https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute)

## Code hints
### Adding new strings
If you need to add a new localisable string to OpenRCT2, please add your new string entry to ```./data/language/en-GB.txt```.
It is important that you only edit en-GB in the OpenRCT2 repository as this is the base language that is used for
translation to other languages. A separate repository OpenRCT2/Localisation is used for translation pull requests, and changes
to that repository are merged with the OpenRCT2 main repository every night. When your pull request is merged, it is helpful
to create a new issue in the OpenRCT2/Localisation repository about the new strings you have added. This notifies translators
so that they can translate the new strings as quick as possible. Similarly if you change any existing string, it is more
important that you create an issue as this can be more easily overlooked.

When coding, please also add a string constant for your strings to ```./src/localisation/StringIds.h```.

### Coding style
Use [this](https://github.com/OpenRCT2/OpenRCT2/wiki/Coding-Style) code style as a reference for new or changed code.

### Language
For now, it is recommended that you only write C++ files as the majority of the game is currently in
C++. Exceptions are to modules that have direct relationship to original code.

FROM
https://github.com/OpenRCT2/OpenRCT2/blob/develop/CONTRIBUTING.md
https://github.com/OpenRCT2/OpenRCT2/wiki/How-To-Contribute
