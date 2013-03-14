(function ($) {

Drupal.behaviors.wireframesAssets = {
  attach: function (context) {
    var $assets     = $('body.node-type-wireframe .field-name-field-asset-collection', context),
        $fieldItems = $('> .field-items', $assets),
        highestItem = 0,
        fullWidth   = 0
        padding     = parseInt($fieldItems.css('padding-top'), 10)
                    + parseInt($fieldItems.css('padding-bottom'), 10);

    $('> .field-item', $fieldItems).each(function () {
      var $this  = $(this),
          width  = $this.outerWidth(true),
          height = $this.outerHeight(true);

      highestItem = height > highestItem ? height : highestItem;
      fullWidth  += width;
    });

    // Add extra height to account for box padding, also a little extra to
    // ensure all browsers are happy
    highestItem += padding + 15;

    $assets.css({ height: highestItem });
    $fieldItems.css({ width: fullWidth });
  }
};


Drupal.behaviors.wireframesProjects = {
  attach: function (context) {
    // Utilize the jQuery Equal Heights plugin
    $('.view-pages > .view-content .views-row').equalHeightsPerRow();
  }
};


})(jQuery);
