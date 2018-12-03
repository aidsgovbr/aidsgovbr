(function ($, Drupal) {
  /*global jQuery:false */
  /*global Drupal:false */
  "use strict";

  /**
   * Provide vertical tab summaries for Bootstrap settings.
   */
  Drupal.behaviors.govbrSettingSummaries = {
    attach: function (context) {
      var $context = $(context);

      // Global information.
      $context.find('#edit-info').drupalSetSummary(function () {
        var summary = [];
        // Designation.
        var designation = $context.find('input[name="govbr_theme_info_designation"]').val();
        if (designation) {
          summary.push(designation);
        }
        // Name
        var name = $context.find('input[name="govbr_theme_info_name"]').val();
        if (name) {
          summary.push(name);
        }
        // Subordination
        var subordination = $context.find('input[name="govbr_theme_info_subordination"]').val();
        if (subordination) {
          summary.push(subordination);
        }

        return summary.join("<br>");
      });

      // Color scheme.
      $context.find('#edit-color-scheme').drupalSetSummary(function () {
        var summary = [];
        // Scheme.
        var scheme = $('input[name="govbr_theme_color_scheme"]:checked');
        if (scheme.val()) {
          summary.push(Drupal.t('Selected scheme') + ': '+ scheme.val());
        }

        return summary.join(' ');
      });

      // Accessibility.
      $context.find('#edit-accessibility').drupalSetSummary(function () {
        var summary = [];
        // Shortcuts.
        var content = $context.find('input[name="govbr_theme_accessibility_shortcuts[content]"]');
        var menu = $context.find('input[name="govbr_theme_accessibility_shortcuts[menu]"]');
        var search = $context.find('input[name="govbr_theme_accessibility_shortcuts[search]"]');
        var footer = $context.find('input[name="govbr_theme_accessibility_shortcuts[footer]"]');

        if (content.is(':checked')) {
          summary.push(content.val());
        }
        if (menu.is(':checked')) {
          summary.push(menu.val());
        }
        if (search.is(':checked')) {
          summary.push(search.val());
        }
        if (footer.is(':checked')) {
          summary.push(footer.val());
        }

        return Drupal.t('Go to links:') + ' ' + summary.join(', ');
      });
    }
  };

})(jQuery, Drupal);
