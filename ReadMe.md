**************************************
*** Easy to expand on mod template ***
**************************************
To use for your own project:

> At root folder:

    mod.cpp:
        * change <Name>, <Author> and <Prefix> to your mod. Prefix is TAG

    icons and title .paa files:
        * replace with your own branding

> in .hemtt/

        * change <Name>, <Author> and <Prefix> to your mod. Prefix is TAG

> in addons\ :

    main:
        stays as is, mostly. Use for shared macros (in main/script_macros.hpp) and to increase version (in main/script_version.hpp)
        
        * change all occurences of "TAG" to your actual tag in all files
        * change <Name>, <Author> and <Prefix> in main/config.cpp to your mod. Prefix is TAG
        * Entries in mod.cpp and CfgMods of main/config.cpp are duplicate, I can't quite tell when which is used, so maybe just keep them synced


    addon_template:

        template for your actual content addons. Rename to your addon. (there is a copy under /templates/)

        * change all occurences of "addon_template" to your addon folder name (probably doesn't have to be lowercase)
        * change all occurences of "ADDON_TEMPLATE" to the same tag, just all caps (used in #defines)
        * change all occurences of "TAG" to your actual tag in all files

> hemtt batch files

!! hemtt needs to be installed in system path or mod directory, otherwise you need to adjust the paths in the batch files !!

    build.bat           - to build without signing. Will build into '.hemttout\build' directory.
    build_dev.bat           - to build dev version, set up for file patching with associated softlinks. Will build into '.hemttout\dev' directory.
    build_release.bat   - to build ready for release with signing.  Will build into '.hemttout\release' directory.

If you just build mod as is, your mod will be called "My Cool Mod" and do nothing but put out a chat message when you enter a mission/editor preview.
