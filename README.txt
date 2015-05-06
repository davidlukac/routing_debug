Readme file for Routing Debug module
--------------------------------------------------------------------------------

Visit project sandbox [page](https://www.drupal.org/sandbox/david.lukac/2479685) on Drupal.org,
for more information about the project.
 
To create a Git clone of latest dev snapshot, run
`git clone --branch 7.x-1.x [YOUR USERNAME]@git.drupal.org:sandbox/david.lukac/2479685.git routing_debug`
in `sites/all/modules/` folder.

# Installation

Download latest stable version the module - either from Drupal.org project page,
or by running 

```drush en -y routing_debug```

which downloads and enables the module.

Only dependency of the module is `devel` module.

# Usage

After module is installed, the usage is very simple. Module registers it's main
path (`/rounting_debug`), which directly shows available menu routing information
in a table. Two additional tabs are available on the page: raw devel formated
menu data and settings page. Settings page allows _'debug log'_ toggle to be
enabled, which logs additional information to watchdog, in case of _'magic 
Reflection'_ failure.

## Dependencies

Module uses some functions from [Devel](https://www.drupal.org/project/devel) and therefore is
dependant on it.