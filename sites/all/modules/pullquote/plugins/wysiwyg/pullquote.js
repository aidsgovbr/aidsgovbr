(function ($) {

Drupal.wysiwyg.plugins['pullquote'] = {

  isNode: function(node) {
    return ($(node).is('span.pullquote'));
  },

  invoke: function(data, settings, instanceId) {
    if (data.format == 'html') {
      if ($(data.node).is('span.pullquote')) {
        // pullquote already here so unwrap
        if (data.content == '') {
          // no selected text. wrap just the current node
          $(data.node).replaceWith($(data.node).html());
        }
        else {
          // unwrap the selected text
          Drupal.wysiwyg.instances[instanceId].insert(data.content);
        }
      }
      else {
        // not looking at a pullquote so wrap
        if (data.content == '') {
          $(data.node).wrapInner('<span class="pullquote" />');
        }
        else {
          Drupal.wysiwyg.instances[instanceId].insert(
            $('<div>').append($('<span class="pullquote" />').append(data.content)).remove().html()
          );
        }
      }
    }
  },
};

})(jQuery);
