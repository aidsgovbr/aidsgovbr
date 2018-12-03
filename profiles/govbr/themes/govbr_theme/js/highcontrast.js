//Start behaviors
(function($) {
    $.fn.clickToggle = function(func1, func2) {
        var funcs = [func1, func2];
        this.data('toggleclicked', 0);
        this.click(function() {
            var data = $(this).data();
            var tc = data.toggleclicked;
            $.proxy(funcs[tc], this)();
            data.toggleclicked = (tc + 1) % 2;
        });
        return this;
    };
}(jQuery));
(function ($) {
	// Cookie Functions - Start
	$(document).ready(function () {
				
		
	    $('#contrast').click(function(){
	        if ($('body').hasClass('highcontrast')) {
	          $('body').removeClass('highcontrast');
	          setCookie("govbr_highcontrast", 0);
	        }
	        else {
	          $('body').addClass('highcontrast');
	          setCookie("govbr_highcontrast", 1);
	        }
	
	        return false;
	    });
		
		
		
				
		
	});
	// Class manipulation based on cookie check - end
	

	//Close behaviors	
})(jQuery);

// Cookie Functions
function setCookie(cname, cvalue, exdays) {
    var d = new Date();
    d.setTime(d.getTime() + (exdays*24*60*60*1000));
    var expires = "expires="+d.toUTCString();
    document.cookie = cname + "=" + cvalue + "; " + expires + "; path=/";
}