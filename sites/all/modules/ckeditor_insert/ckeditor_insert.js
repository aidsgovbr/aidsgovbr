(function ($) {
  Drupal.behaviors.ckeditor_insert = {
    attach: function (context) {
      ckeditor_insert_update();
      $('#ckeditor_file_insert_close_button', context).click(function () {
        $('#ckeditor_insert_fade').removeClass('file-dialog-is-open');
        ckeditor_insert_update();
      });
      $('#ckeditor_image_insert_close_button', context).click(function () {
        $('#ckeditor_insert_fade').removeClass('image-dialog-is-open');
        ckeditor_insert_update();
      });
    }
  };

  function ckeditor_insert_update() {
    var $ckeditorInsertFade = $('#ckeditor_insert_fade');
    if ($ckeditorInsertFade.hasClass('file-dialog-is-open')) {
      $('#ckeditor_file_insert_light,#ckeditor_insert_fade').show();
    }
    else if ($ckeditorInsertFade.hasClass('image-dialog-is-open')) {
      $('#ckeditor_image_insert_light,#ckeditor_insert_fade').show();
    }
    else {
      $('#ckeditor_file_insert_light,#ckeditor_image_insert_light,#ckeditor_insert_fade').hide();
    }
  }

})(jQuery);

