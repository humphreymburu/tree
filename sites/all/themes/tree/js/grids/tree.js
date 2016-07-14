(function ($) {
Drupal.behaviors.addIsotopeCl = {
  attach: function(context, settings) {
    var play = $('.isotope-element');
    $(play[0]).addClass('one_item');
    $(play[1]).addClass('two_item');
    $(play[2]).addClass('three_item');
    $(play[3]).addClass('four_item');
    $(play[4]).addClass('five_item');
    $(play[5]).addClass('six_item');
    $(play[6]).addClass('seven_item');
    $(play[7]).addClass('eight_item');  
    $(play[8]).addClass('nine_item');
	
  }
};
})(jQuery);