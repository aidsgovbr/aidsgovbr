/**
 * @file
 * Node reference insert plugin for Linkit.
 */
(function ($) {
Drupal.linkit.registerInsertPlugin('node_reference',  {
  insert : function(data, settings) {
    var arr = data.path.split('/');
    var nid = arr[arr.length - 1];
    return settings.linkContent + ' [nid:' + nid + ']';	
  }
});
})(jQuery);