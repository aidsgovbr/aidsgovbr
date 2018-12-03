/**
 * @file
 * Javascript behaviors for CKEditor filebrowser.
 */

(function ($) {
  'use strict';

  /**
   * Bind links that will open modals to the appropriate function.
   */
  Drupal.behaviors.ViewsFilebrowserCkeditorZZCToolsModal = {
    attach: function (context) {

      // Get code form CToolsModal. Because the attachBehaviors after submit has
      // to small selector.
      $('form#views-filebrowser-default-upload-form', context).once('ctools-use-modal', function () {
        var $this = $(this);
        var element_settings = {};

        element_settings.url = $this.attr('action');
        element_settings.event = 'submit';
        element_settings.progress = {type: 'throbber'};
        var base = $this.attr('id');

        Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);
        Drupal.ajax[base].form = $this;

        $('input[type=submit], button', this).click(function (event) {
          Drupal.ajax[base].element = this;
          this.form.clk = this;
          // Stop autocomplete from submitting.
          if (Drupal.autocompleteSubmit && !Drupal.autocompleteSubmit()) {
            return false;
          }
          // An empty event means we were triggered via .click() and
          // in jquery 1.4 this won't trigger a submit.
          if (typeof event.bubbles === 'undefined') {
            $(this.form).trigger('submit');
            return false;
          }
        });
      });
    }
  };

})(jQuery);
