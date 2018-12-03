/**
 * @file
 * Entity reference insert plugin for Linkit.
 */
(function ($) {
Drupal.linkit.registerInsertPlugin('entity_reference',  {
  insert : function(data, settings) {
    var arr = data.path.split('/');
    var enity_id = arr[arr.length - 1];
    var ret = settings.linkContent + ' (' + enity_id + ')';
    var autocomplete_callback = $('#' + settings.source + '-autocomplete').val();
	
    if (autocomplete_callback.indexOf('/autocomplete/tags/') != -1) {
      return $('#' . settings.source).val() + ', ' + ret;
    }
    else {
      return ret;
    }	
  }
});
})(jQuery);