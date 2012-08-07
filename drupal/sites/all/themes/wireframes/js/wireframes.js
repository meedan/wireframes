(function ($) {

Drupal.behaviors.wireframesAssets = {
  attach: function (context) {
    var $assets     = $('body.node-type-wireframe .field-name-field-asset', context),
        $fieldItems = $('.field-items', $assets),
        highestItem = 0,
        fullWidth   = 0
        padding     = parseInt($fieldItems.css('padding-top'), 10)
                    + parseInt($fieldItems.css('padding-bottom'), 10);

    $('.field-item', $assets).each(function () {
      var $this  = $(this),
          width  = $this.outerWidth(true),
          height = $this.outerHeight(true);

      highestItem = height > highestItem ? height : highestItem;
      fullWidth  += width;
    });

    // Add extra height to account for box padding, also a little extra to
    // ensure all browsers are happy
    highestItem += padding + 2;

    $assets.css({ height: highestItem });
    $fieldItems.css({ width: fullWidth });
  }
};


Drupal.behaviors.wireframesProjects = {
  attach: function (context) {
    // Utilize the jQuery Equal Heights plugin
    $('.page-projects .view-id-projects.view-display-id-page ' +
      '.view-pages.view-display-id-default > .view-content ' +
      '> .views-row').equalHeightsPerRow();
  }
};


})(jQuery);
