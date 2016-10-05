(function ($) {
Drupal.behaviors.addIsotopeRs = {
  attach: function(context, settings) {
      var play = $('.isotope-element');
      $(play[0]).addClass('odd');
  }

  
  
};
})(jQuery);