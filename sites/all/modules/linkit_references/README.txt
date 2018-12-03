INTRODUCTION
============

This module connects Linkit with Entity Reference and References 
(user and node reference) modules, and allow users to search for users
or nodes in Linkit instead of the standard Drupal autocomplete field
when adding references. 

INSTALLATION
============

 1. Install and configure the dependencies. Check their README files for
    details.
 2. Install Entity Reference or References module.
 3. Install and enable the linkit_references module.

DEPENDENCIES
============

Linkit References depends on the module

 *  Linkit
 *  Entity Reference or References module.

CONFIGURATION
=============

Create one or more Linkit profiles and configure the insert plugin
to Entity Reference, Node reference or User reference.

"Insert path as" should be configured to Raw path. 

For more information about Linkit profiles and configuration of
Linkit profile, see the Linkit documentation. 

LIMITATIONS
=============

The module does not at the moment not support the Entity Reference
widget "Autocomplete (Tags style)" due to a weird issue where the
"Search"-button is not being rendered for field widgets using custom
multiple values handling (FIELD_BEHAVIOR_CUSTOM).

MAINTAINERS
===========

 *  beltofte <http://drupal.org/u/beltofte>
