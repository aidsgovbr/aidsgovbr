## Contents of this file

* Introduction
* Requirements
* Recommended modules
* Installation
* Configuration
* Development
* Contact

## Introduction

The **AddThis** project provides Drupal integration to the
[AddThis.com][1] link sharing service by allowing you to include a field
consisting of AddThis link sharing icons. 

The AddThis icon makes it easier for visitors to your site bookmark a
page and to share it with other people on social media.  This may
create a buzz for your site and increase its popularity and ranking.

If you register at the [AddThis.com][1] web site, you will also have
access to valuable Analytics about the bookmarking and sharing
activity of your users.

## Requirements

Field, Block

## Recommended modules

* [Advanced Help][4]:  
  When this module is enabled, display of the project's `README.md`
  will be rendered when you visit
  `help/addthis/README.md`.
* [Markdown filter][5]:  
  When this module is enabled, display of the project's `README.md`
  will be rendered with the markdown filter.


## Installation

Install as you would normally install a contributed drupal
module. See: [Installing modules][6] for further information.

To enable the module, enable the following two modules on the
*Modules* list page:

1. **AddThis** (lets you add the AddThis-field)

2. **AddThis Displays** (displays the field)

For link sharing statistics registration at [http://addthis.com/][1] is
required, but the module will work even without registration.

## Configuration

You may also want to see the user contributed configuration [Configure
AddThis in 7.x-4.x][2] on Drupal.org.

To configure the module, navigate to
*admin/config/user-interface/addthis*.  There are two configuraion tabs:

### Basic settings

The Basic settings tab have the following sub-panels:

- Compact menu: Configure the global behavior and style of the compact
  menu and some additional settings
- Excluded services: Sharing services to exclude from all AddThis
  menus.
- Analytics & tracking: For click analytics and statistics.
- Custom AddThis button: Upload an image that you want to use
  instead of the default AddThis button.
- Third Party settings: Settings for Twitter

### Advanced settings

There are two panels under the Advanced settings tab.

The first panel lets you define *Service URLs* for the AddThis API.

The second panel lets you add a custom AddThis configuration code and
toggle some advanced flags.

### Adding fields

To add an **AddThis** field (to display a toolbox, buttons or
counters) to content, do the following:

1. Navigate to *admin/structure/types*.
2. Click “manage fields” for the content type you want to add the
   field to (e.g. *Article*).
3. Choose a label (e.a. “AddThis”).
4. Select “AddThis” as field type.
5. Click “Save”.
6. Click “manage display” for the same content type (e.g. *Article*).
7. Select the format for the “AddThis” widget. This may be one of
   “Disabled”, “Basic toolbox”, “Basic button” or “&lt;Hidden&gt;”.
8. The “Basic toolbox” and “Basic button” let you configure additional
   settings by clicking the cogwheel icon.  For instance you may
   specify that the following shall appear in the “Basic toolbox”:
   `facebook,twitter,linkedin,email,more`.
9. Click “Save”.

For access to link sharing analytics on the AddThis web site you need
an AddThis ProfileID.  You get by registering at
[http://addthis.com/][1]. However, the module will work
with a <em>blank</em> AddThis ProfileID.

## Development

Please see the `addthis.api.php` for implementation options of
different displays and altering configuration on rendering.

## Contact

Owner:

* [Vesa Palmu][7] (wesku)

Current co-maintainers:

* [Jani Palsamäki][8] (janip).
* [Matthias Glastra][9] (matglas86)
* [Gisle Hannemyr][10] (gisle)

Major contributions by:

* [Lesmana Lim][11] (lesmana)

[1]: http://addthis.com/
[2]: https://www.drupal.org/node/1309922
[4]: https://www.drupal.org/project/advanced_help
[5]: https://www.drupal.org/project/markdown
[6]: https://drupal.org/documentation/install/modules-themes/modules-7

[7]: https://www.drupal.org/u/wesku
[8]: https://www.drupal.org/u/janip
[9]: https://www.drupal.org/u/matglas86
[10]: https://www.drupal.org/u/gisle
[11]: https://www.drupal.org/u/les-lim
