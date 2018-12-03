/**
 * @file
 * Plugin file for CKEditor.
 */

(function ($) {
  'use strict';

  // The onlick function assigned to the 'Browse Server' button. Opens the
  // file browser and updates target field when file is selected.
  //
  // @param {CKEDITOR.event}
  // evt The event object.
  function browseServer(evt) {
    var ckeditor = this;
    Drupal.CTools.Modal.show('views-filebrowser-modal-style');
    // Change the z-index of modal because CKEditor modal has an z-index of
    // 10000.
    $('#modalContent').css('z-index', 11000);

    // "this" is now a CKEDITOR.dialog object.
    var ajax_settings = {};
    ajax_settings.event = 'ViewsFilebrowserDialog';

    ajax_settings.url = Drupal.settings.basePath + 'views_filebrowser_ckeditor';
    if (typeof ckeditor._.dialog.widget != 'undefined') {
      ajax_settings.url += '?target=' + ckeditor._.dialog.widget.name;
    }

    ajax_settings.progress = {
      type: 'throbber',
      message: Drupal.t('Loading Dialog...')
    };

    Drupal.ajax['views-filebrowser-ckeditor-dialog'] = new Drupal.ajax('modalContent', $('#modalContent'), ajax_settings);

    // @TODO: Jquery 1.5 accept success setting to be an array of functions.
    // But we have to wait for jquery to get updated in Drupal core.
    // In the meantime we have to override it.
    Drupal.ajax['views-filebrowser-ckeditor-dialog'].options.success = function (response, status) {
      if (typeof response == 'string') {
        response = $.parseJSON(response);
      }

      // Call the ajax success method.
      Drupal.ajax['views-filebrowser-ckeditor-dialog'].success(response, status);

      Drupal.attachBehaviors('#modalContent');

      var $buttons_wrapper = $('#modal-buttons');
      var dialog = ckeditor.getDialog();
      var editor = dialog.getParentEditor();
      editor._.filebrowserSe = ckeditor;
      var CKEditorFuncNum = editor._.filebrowserFn;

      $buttons_wrapper.bind('ViewsFilebrowserCkeditorSave', function (e, path) {
        CKEDITOR.tools.callFunction(CKEditorFuncNum, path);
      });
    };

    $('#modalContent').trigger('ViewsFilebrowserDialog');

    return;
  }

  /*
   * Traverse through the content definition and attach filebrowser to
   * elements with 'filebrowser' attribute.
   *
   *
   * @param String
   *   dialogName Dialog name.
   * @param {CKEDITOR.dialog.definitionObject}
   *   definition Dialog definition.
   * @param {Array}
   *   elements Array of {@link CKEDITOR.dialog.definition.content} objects.
   */
  function attachFileBrowser(editor, dialogName, definition, elements) {
    if (!elements || !elements.length) {
      return;
    }

    var element;

    for (var i = elements.length; i--;) {
      element = elements[i];

      if (element.type === 'hbox' || element.type === 'vbox' || element.type === 'fieldset') {
        attachFileBrowser(editor, dialogName, definition, element.children);
      }

      if (!element.filebrowser) {
        continue;
      }

      if (typeof element.filebrowser === 'string') {
        var fb = {
          action: (element.type === 'fileButton') ? 'QuickUpload' : 'Browse',
          target: element.filebrowser
        };
        element.filebrowser = fb;
      }

      if (element.filebrowser.action === 'Browse') {
        element.onClick = browseServer;
        element.hidden = false;
      }
    }
  }

  CKEDITOR.plugins.add('views_filebrowser_ckeditor', {
    requires: 'popup',
    init: function (editor, pluginPath) {
      editor.on('destroy', function () {
        CKEDITOR.tools.removeFunction(this._.views_filebrowser_ckeditorFn);
      });
    }
  });

  CKEDITOR.on('dialogDefinition', function (evt) {
    var definition = evt.data.definition;
    var element;

    // Associate views_filebrowser_ckeditor to elements with 'views_filebrowser_ckeditor' attribute.
    for (var i = 0; i < definition.contents.length; ++i) {
      if ((element = definition.contents[i])) {
        attachFileBrowser(evt.editor, evt.data.name, definition, element.elements);
      }
    }
  });

})(jQuery);
