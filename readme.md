Seven Kingdoms: Ancient Adversaries (Visual Studio Fork)
----

*See the official README [here](https://github.com/sraboy/7kaa/blob/master/README).*

This is a personal fork of the [official repo](https://github.com/the3dfxdude/7kaa). The default branch is [visual_studio](https://github.com/sraboy/7kaa/tree/visual_studio). To avoid confusion, there often is no master branch. Branches beginning with "clean_" are forked from upstream master.

The visual_studio branch contains Solution and Project files for VS2015; VS2017 works as well. If you have SDL2 library issues, see this [7kfans.com forum post](https://www.7kfans.com/forums/viewtopic.php?f=20&t=697&start=10) for some help. The repo already contains the libraries you need; if they happen to fall behind/out of date, just pull the ones from the official 7KAA installation. A VS2010 solution can be found [in this repo](https://github.com/microvirus/7kaa). Credit goes to Microvirus for the original VS2010 solution which I bogarted and upgraded.

A couple notes:

* Visual Studio is not officially supported by the project (so no PRs with all the VS stuff).
* If you get errors about not being able to find SDL, OpenAL or the game's data, go to the project's property page (Debug>>7kaa Properties) and specify a Working Directory in the Debugging section or set the `SKDATA` environment variable. 
* I've enabled the Issues tracker on this repo but this is not the place for reporting non-Visual Studio-specific issues.
