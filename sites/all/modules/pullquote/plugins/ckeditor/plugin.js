/**
 * @file
 * Plugin for inserting pullquotes with Pullquote module.
 */

(function ($) {

  CKEDITOR.plugins.add( 'pullquote', {

    hidpi: true,
    icons: 'pullquote',

    init: function( editor ) {

      // Get the major CKeditor verison.
      // We do not care about minor versions.
      var version = parseInt(CKEDITOR.version);

     var addCssObj = CKEDITOR;

      if (version == 3) {
        addCssObj = editor;
      }

      // Add the styles to show pullquoted text
      addCssObj.addCss('span.pullquote { border-bottom: 2px dotted green;}');

      // Add Button.
      editor.ui.addButton( 'pullquote', {
        label: Drupal.t('Make selected text a Pullquote'),
        icon: this.path + '../wysiwyg/pullquote.gif',
        command: 'pullquote'
      });

      // Ckeditor version lower then 4 needs to have a icon path.
      if (version < 4) {
        editor.ui._.items.pullquote.icon = this.path + '../wysiwyg/pullquote.gif';
        editor.ui._.items.pullquote.args[0].icon = this.path + '../wysiwyg/pullquote.gif';
      }

      // Add Command.
      editor.addCommand( 'pullquote', {
        // FOR ACF in ckeditor 4.1+, allow everything.
        allowedContent: 'span[*]{*}(*)',
        exec : function () {

          // Define a block style.
          var style = new CKEDITOR.style({
            element: 'span',
            attributes: { class: 'pullquote' }
          });

          // Add/Remove the Pullquote span
          if (style.checkActive( editor.elementPath(), editor )) {
            // Pullquote is already so unwrap
            editor.removeStyle( style );
          } else {
            // Add the pullquote
            editor.applyStyle( style );
          }

        }
      });
    }
  });

})(jQuery);
