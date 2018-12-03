-- SUMMARY --

The Pullquote module duplicates marked-up node body text as a CSS formatted
pullquote, using according to a technique described at:
http://css-tricks.com/better-pull-quotes/

For a full description visit the project page:
* http://drupal.org/project/pullquote

Bug reports, feature suggestions and latest developments:
* http://drupal.org/project/issues/pullquote


--BREAKING CHANGES--

If you used the 7.x-2.x version of this module, the alternate syntax to avoid
conflicts with markdown was:
<pullquote>Quote me</pullquote>
but this caused issues with most text filters. As a result, it was changed to
{pullquote}Quote Me{/pullquote}

If you used this alternate syntax, your pullquotes will not work with version 3.


-- REQUIREMENTS --

None.


-- INSTALLATION --

1. Install and activate the module as normal, see http://drupal.org/node/895232
   for further information.
2. Ensure that you have an active Text Format (see
/admin/config/content/formats) that allows <span> HTML tags.
3. Optionally, activate core Help module at /admin/modules.
4. If WYSIWYG module is enabled and a supported WYSIWYG editor is in place add
5. If CKEditor is enabled, add the pullquote button to your editor
   (see /admin/config/content/ckeditor).

Alternative setup (recommended):
Pullquote now allows for a pullquote token to be used in the body of nodes. The
syntax is [pullquote]Quote Me[/pullquote]. The square brackets are used so as to
avoid trouble with WYSIWYG modules. You give users the option to use pullquote
tokens without giving them span tag access in the text filter. Just make sure
that the pullquote filter runs AFTER the allowed tags filter. Otherwise
Pullquote will make span tags that are just removed by the allowed tags filter.

1. Install and activate the module as normal, see http://drupal.org/node/895232
for further information.
2. Enable the Pullquote filter for your text format (see
/admin/config/content/formats).
3. Ensure that the Pullquote filter runs after the allowed tags filter.
4. Optionally, activate core Help module at /admin/modules.


-- USE --

Surround any text to be duplicated as a pull quote with a span that has the
class 'pullquote'.
For example: <span class="pullquote">this is a test</span>

This module integrates with WYSIWYG module. This feature is fairly rough and
works best in TinyMCE. CKEditor also works but is pretty flaky. If you have a
favorite editor we welcome patches.

Pullquote now supports the standalone CKEditor. This works well and is the
recommended way to use the module with a WYSIWYG style editor.

Pullquote also allows for a pullquote token to be used in the body of nodes. The
syntax is [pullquote]Quote Me[/pullquote]. The square brackets are used so as to
avoid trouble with WYSIWYG modules. We recognize that in Markdown square
brackets are used to create links. However the syntax is [Link Text](Link Target)
and our tests show that without the link target, markdown won't bother with a link
source. However trouble might arise if you have a quote that starts with a
parenthetical. To solve this Pullquote provides as alternate syntax:
{pullquote}Quote Me{/pullquote}
which avoids this problem.


-- LEFT FLOATING PULLQUOTES --

Pullquote supports left floating quotes. You can use both synatxes to
create a left floating quote.

Examples:
[pullquote-left]Quote Me![/pullquote-left]

{pullquote-left}Me too!{/pullquote-left}


In case you are used to editing the HTML directly, a left quote is designated
by two classes on the span...
Example:
<span class="pullquote pullquote-left">This will appear on the left.</span>


-- CONTACT --

Current maintainers:
* Stuckagain - http://drupal.org/user/196722
* lliss - http://drupal.org/user/724750
* callison - http://drupal.org/user/49429

Contributors:
* Sun - http://drupal.org/user/54136
* Jun Matsushita (jun) - http://drupal.org/user/49184
