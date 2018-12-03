/**
 * @file
 * Provide the HTML to create the modal dialog.
 */

(function ($) {
  'use strict';

  Drupal.theme.prototype.views_filebrowser_filemanager = function () {
    var html = '';
    html += '<div id="ctools-modal" class="popups-box">';
    html += '  <div class="ctools-modal-content ctools-modal-views-filebrowser-modal-content">';
    html += '    <span class="popups-close"><a class="close" href="#">' + Drupal.CTools.Modal.currentSettings.closeImage + '</a></span>';
    html += '    <span id="modal-title" class="modal-title"></span>';
    html += '    <div id="modal-content" class="modal-content popups-body"></div>';
    html += '  </div>';
    html += '  <div id="modal-buttons">';
    html += '    <span class="popups-insert">';
    html += '      <input class="insert form-submit" type="submit" value="' + Drupal.t('Insert') + '">';
    html += '      <input type="hidden" value="" name="new-file" />';
    html += '    </span>';
    html += '    <span class="popups-close">';
    html += '      <input class="close form-submit" type="submit" value="' + Drupal.t('Close') + '">';
    html += '    </span>';
    html += '  </div>';
    html += '</div>';
    return html;
  };

  /**
   * Disable links in Browser Window.
   */
  Drupal.behaviors.ViewsFilebrowserLinks = {
    attach: function (context) {
      $('.view-views-filebrowser-files .view-content', $(context).parent()).once('views-filebrowser-select').each(function () {
        var $rows = $(this).find('tr');
        var $target_container = $(this).parents('#modal-content');

        $rows.each(function () {
          var $row = $(this);

          $row.bind('click', function (e) {
            e.preventDefault();
            $rows.removeClass('filebrowser-select');

            $row.toggleClass('filebrowser-select');

            if ($target_container.size()) {
              var type = $('#modal-content-target', $target_container).data('target-type');
              var value = $row.find('.data-fid').data(type);

              $('#modal-buttons input[name="new-file"]').val(value);
              $('#modal-buttons input.insert').focus();
            }
          });
        });

      });
    }
  };

  /**
   * Processes the modal window.
   */
  Drupal.behaviors.viewsFileBrowserModal = {
    attach: function (context) {

      $('.droppable-browse-button', context).once('droppable-browse-button').each(function () {
        var $browse_button = $(this);

        // If the upload form has a description for the upload field we need to
        // move it to the browse button inside the views exposed filters form.
        $('#modal-content-upload input[type=file]')
          .parents('.form-item')
          .find('.description')
          .appendTo($browse_button.parent());

        // If the browse button is clicked we will trigger a click on the hidden
        // upload field.
        $browse_button.bind('click', function (e) {
          e.preventDefault();

          if (!$browse_button.hasClass('disabled')) {
            $('#modal-content-upload input[type=file]').trigger('click');
          }
        });

        // If the value of the hidden upload field changes, check for (error)
        // messages. If any messages are found they will be moved to the exposed
        // filters form. If no messages are found we can assume the file is
        // ready for upload so we'll trigger the upload forms submit button.
        $('#modal-content-upload input[type=file]').bind('change', function () {
          $browse_button
            .addClass('disabled')
            .after('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');

          if ($('#modal-content-upload .messages').size()) {
            $('#modal-content-upload .messages').appendTo('.views-exposed-form');

            $browse_button.removeClass('disabled');
            $('.ajax-progress.ajax-progress-throbber').remove();
          }
          else {
            $(this)
              .parent()
              .find('input[type=submit]')
              .trigger('mousedown');
          }
        });
      });

      // Resize the heights of the filebrowser regions after resizing the
      // browser window.
      if (!Drupal.viewsFileBrowserModalResize) {
        Drupal.viewsFileBrowserModalResize = function () {
          var content_height = $('.modal-views-filebrowser .modal-content').height();
          var filters_height = $('.modal-views-filebrowser .views-exposed-form').outerHeight();

          $('.modal-views-filebrowser .view-content').height(content_height - filters_height);
        };

        $(window).bind('resize', Drupal.viewsFileBrowserModalResize);
      }
      Drupal.viewsFileBrowserModalResize();

      // Automatically set the focus on the filename filter field.
      $('.modal-views-filebrowser #edit-filename').focus();
    }
  };

  /**
   * Submit the file upload field.
   */
  Drupal.behaviors.ViewsFilebrowserFileUpload = {
    attach: function (context, settings) {
      $('body').ajaxComplete(function (event, request, settings) {
        var form_build_id;
        if ((form_build_id = settings.url.match(/file\/ajax\/filefield_modal_file\/(.*)$/)) !== null) {
          var $form = $('[value="' + form_build_id[1] + '"]').closest('form');
          // Check if the upload has completed by checking if there is a Delete
          // button in the form that has the form-build-id.
          if ($('#modal-content-upload .messages').size()) {
            $('#modal-content-upload .messages')
              .appendTo('.views-exposed-form');
          }
          if ($form.find('[id$=remove-button]').length) {
            // Click the submit button.
            $form.find('[id^=edit-submit]').click();
          }
        }
      });
    }
  };

  /**
   * Submit the drag and drop upload field.
   */
  Drupal.behaviors.ViewsFilebrowserDragNDropUpload = {
    attach: function (context, settings) {
      $('body').ajaxComplete(function (event, request, settings) {
        var form_build_id;
        if ((form_build_id = settings.url.match(/file\/ajax\/dnd\/(.*)$/)) !== null) {
          var $form = $('[value="' + form_build_id[1] + '"]').closest('form');
          // Check if the upload has completed by checking if there is a Delete
          // button in the form that has the form-build-id.
          if ($('#modal-content-upload .messages').size()) {
            $('#modal-content-upload .messages')
              .appendTo('.views-exposed-form');
          }
          if ($form.find('[id$=remove-button]').length) {
            // Click the submit button.
            $form.find('[id^=edit-submit]').click();
          }
        }
      });
    }
  };

  /**
   * Adds behaviors to the insert and close submit buttons in the modal footer.
   */
  Drupal.behaviors.ViewsFileBrowserModalButtons = {
    attach: function (context, settings) {
      $('#modal-buttons input[type=submit]', context).once('views-file-browser-modal-buttons').each(function () {
        $(this).click(function (e) {
          e.preventDefault();
          var $button = $(this);

          if ($button.hasClass('insert')) {
            var fid = $button.parent().find('input[name="new-file"]').val();

            var field_name = $('#modal-content-target').data('target-name');
            $("input[name='" + field_name + "[filemanager][new-fid]']").val(fid).trigger('file_input_change');

            $('#modal-buttons').trigger('ViewsFilebrowserCkeditorSave', fid);
          }

          Drupal.CTools.Modal.dismiss();
        });
      });
    }
  };

})(jQuery);
