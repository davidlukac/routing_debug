Readme file for Routing Debug module
--------------------------------------------------------------------------------

Visit project sandbox [page](https://www.drupal.org/sandbox/david.lukac/2479685) on Drupal.org,
for more information about the project.
 
To create a Git clone of latest dev snapshot, run
`git clone --branch 7.x-1.x-rc http://git.drupal.org/sandbox/david.lukac/2479685.git routing_debug`
in `sites/all/modules/` folder.

# Overview

Routing Debug is a simple module that provides menu routing table with
additional information like:

- name of the callback function,
- filename and path of file where the callback is defined,
- line number of function definition.

Intention of the module is to help developer to identify potential menu 
overrides. Module interface is accessible on _/routing_debug_ URL.

# Features

- Display registered routes, module the are coming from,
- callback function handling each route/path,
- file and line number of each callback function,
- display raw information provided by _menu_names()_, _system_menus()_ and _menu_router()_ functions.

# Installation

Download latest stable version the module - either from Drupal.org project page,
or by running 

```drush en -y routing_debug```

which downloads and enables the module.

Only dependency of the module is `devel` module.

# Tutorial

After module is installed, the usage is very simple. Module registers it's main
path (`/rounting_debug`), which directly shows available menu routing information
in a table. Two additional tabs are available on the page: raw devel formated
menu data and settings page. Settings page allows _'debug log'_ toggle to be
enabled, which logs additional information to watchdog, in case of _'magic 
Reflection'_ failure.

## Requirements and dependencies

Module uses some functions from [Devel](https://www.drupal.org/project/devel) and therefore is
dependant on it.