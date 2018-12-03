/**
 * @file
 * User reference insert plugin for Linkit.
 */
(function ($) {
Drupal.linkit.registerInsertPlugin('user_reference',  {
  insert : function(data, settings) {
    var arr = data.path.split('/');
    var uid = arr[arr.length - 1];
    return settings.linkContent + ' [uid:' + uid + ']';	
  }
});
})(jQuery);