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
	 //$(play[1]).addClass('oddi');
	 
	 
	 
	// var one = document.getElementById('isotope-element odd');
	 //var two = document.getElementById('field')
	 
	
	
	 //document.getElementById("wordsearch").setAttribute('src','images/fall2011-wordsearchans.gif');
	 
	// document.getElementById("wordsearch").setAttribute('src','images/fall2011-wordsearch.gif');
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
  
  
	 (function($) {

	 var $event = $.event,
	         $special,
	         resizeTimeout;

	 $special = $event.special.debouncedresize = {
	         setup: function() {
	                 $( this ).on( "resize", $special.handler );
	         },
	         teardown: function() {
	                 $( this ).off( "resize", $special.handler );
	         },
	         handler: function( event, execAsap ) {
	                 // Save the context
	                 var context = this,
	                         args = arguments,
	                         dispatch = function() {
	                                 // set correct event type
	                                 event.type = "debouncedresize";
	                                 $event.dispatch.apply( context, args );
	                         };

	                 if ( resizeTimeout ) {
	                         clearTimeout( resizeTimeout );
	                 }

	                 execAsap ?
	                         dispatch() :
	                         resizeTimeout = setTimeout( dispatch, $special.threshold );
	         },
	         threshold: 150
	 };

	 })(jQuery);




	 var $window = $(window);

	 $.event.special.debouncedresize.threshold = 30;

	 $( function() {

	   var $container = $('.isotope-element');
	   var $gridSizer = $container.find('isotope-grid-sizer');
  
	   $window.on( 'debouncedresize', function() {
	     var width = $container.parent().innerWidth();
	     var columns = Math.round( width / $gridSizer.outerWidth( true ) );
	     width = Math.floor( width / columns ) * columns
	     $container.width( width );
	   }).trigger('debouncedresize');
  
	 });
 
 
 
 
	 
 
 
 
 
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
};
})(jQuery);