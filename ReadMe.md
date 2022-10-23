**************************************
*** Easy to expand on mod template ***
**************************************
!! hemtt needs to be installed (and in system path) !!


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

run buil

If you just build it like that, your mod will