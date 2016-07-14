(function ($) {
Drupal.behaviors.addIsotopeClasses = {
  attach: function(context, settings) {
	  //$('.isotope-element').each(function(i){
     // if(!(i%2))  
      //    $(this).addClass('odd');
     // else
     //     $(this).addClass('even');
    //  })
	  
     var play = $('.isotope-element');
     $(play[0]).addClass('odd');
  } 
};
})(jQuery);