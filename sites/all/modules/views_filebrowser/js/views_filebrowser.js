/**
 * @file
 * JS file for Views Filebrowser.
 */

(function ($) {
  'use strict';

  /**
   * Attached the filemanager opener behavior to CCK filefields.
   */
  Drupal.behaviors.uploadField = {
    attach: function (context) {
      $('.views-filebrowser-opener', context).once('views-filebrowser-opener').each(function () {
        // Reference variables.
        var $select_submit = $(this);
        var $wrapper = $select_submit.parents('.form-managed-file').addClass('views-filebrowser-opener-widget-edit');
        var $path_input = $('input.filemanager-path', $wrapper);
        var $new_fid_input = $('input[name$="new-fid]"]', $wrapper);
        var $upload_input = $('input[type="file"]', $wrapper);
        var $upload_submit = $('input[name$="upload_button"]', $wrapper);

        $new_fid_input.bind('file_input_change', function () {
          $select_submit.trigger('mousedown');
        });

        // Create the links for the tabs.
        var $link1 = $('<a href="#" />').text(Drupal.t('Upload new file'));
        var $link2 = $('<a href="#" />').text(Drupal.t('Select existing file'));

        // Create the tabs warpper and its tabs.
        var $tabs = $('<ul />')
          .addClass('views-filebrowser-opener-tabs')
          .append($('<li />').append($link1))
          .append($('<li />').append($link2))
          .appendTo($wrapper);

        // Create the tab content wrappes and place the appropriate contents
        // inside it.
        var $wrapper1 = $('<div />')
          .addClass('tab-content')
          .append($upload_input)
          .append($upload_submit);
        var $wrapper2 = $('<div />')
          .addClass('tab-content')
          .append($path_input.parent())
          .append($select_submit.parent());

        // Place the tab content wrappers inside the widget wrapper.
        $wrapper.append($('<div />').addClass('tab-content-wrapper').append($wrapper1).append($wrapper2));

        // Bind the click events to the tab links and trigger the event for the
        // first tab.
        $link1.bind('click', filefieldFileManager.openTab);
        $link2.bind('click', filefieldFileManager.openTab);
        $('a', $tabs).eq(1).trigger('click');
      });
    }
  };

  var filefieldFileManager = {

    /**
     * Shows a tabs content after clicking a tab.
     *
     * @param {object} e click event on tabs.
     */
    openTab: function (e) {
      e.preventDefault();

      var $trigger = $(this);
      var $widget = $trigger.parents('.widget-edit');
      var $tab_wrapper = $trigger.parents('.views-filebrowser-opener-widget-edit');
      var index = $('a', $trigger.parents('ul')).index($trigger);

      // Hide all tabs content wrappers before showing the one with the same
      // index as the clicked tab.
      $('.tab-content', $tab_wrapper).hide();
      $('.tab-content', $tab_wrapper).eq(index).fadeIn('fast');

      // Toggle classes.
      $('li', $trigger.parents('ul')).removeClass('active');
      $trigger.parent().addClass('active');

      // Store the clicked tab index so it can be reused after AHAH refreshes.
      $('input[id~="-filefield-opener-active-tab"]', $widget).val(index);
    }
  };

  // [name] is the name of the event "click", "mouseover", ..
  // same as you'd pass it to bind()
  // [fn] is the handler function.
  $.fn.bindFirst = function (name, fn) {
    if (this.size()) {
      // Bind as you normally would
      // don't want to miss out on any jQuery magic.
      this.bind(name, fn);

      // Thanks to a comment by @Martin, adding support for
      // namespaced events too.
      var handlers = this.data('events')[name.split('.')[0]];
      // Take out the handler we just inserted from the end.
      var handler = handlers.pop();
      // Move it at the beginning.
      handlers.splice(0, 0, handler);
    }
  };

})(jQuery);
