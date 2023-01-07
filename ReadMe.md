**************************************
*** Easy to expand on mod template ***
**************************************
!! hemtt needs to be installed (and in system path or mod directory) !!


To use for your own project:

> At root folder:

    hemtt.toml && mod.cpp:

        * change <Name>, <Author> and <Prefix> to your mod. Prefix is TAG

    icons and title .paa files:

        * replace with your own branding
        
> in addons\ :

    main:

        stays as is, mostly. Use for shared macros (in main/script_macros.hpp) and to increase version
        
        * change all occurences of "TAG" to your actual tag

    addon_template:

        template for your actual content addons. Rename to your addon. (there is a copy under /templates/)

        * change all occurences of "addon_template" to your addon folder name (probably doesn't have to be lowercase)
        * change all occurences of "ADDON_TEMPLATE" to the same tag, just all caps (used in #defines)
        * change all occurences of "TAG" to your actual tag

* Classic hemtt:

    build.bat               - to build without signing. Will build into 'addon' directory.
    build_release.bat       - to build ready for release with signing. Will build into 'release' and 'keys' directory.

* hemtt v10+

    build_v10.bat           - to build without signing. Will build into '.hemtt\build' directory.
    build_dev_v10.bat       - to build dev version, set up for file patching with associated softlinks. Will build into '.hemtt\dev' directory.
    build_release_v10.bat   - to build ready for release with signing.  Will build into '.hemtt\release' directory.

If you just build mod as is, your mod will be called "My Cool Mod" and do nothing but put out a chat message when you enter a mission/editor preview.
