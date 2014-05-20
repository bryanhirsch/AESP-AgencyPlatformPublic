jQuery(window).load(function() {//window.load instead of document.ready because I need images to have loaded before measuring sizes

});

jQuery(document).ready(function($) {

	var stickyNavTop = 50;
	var stickyNav = function() {
		var flyout = document.getElementById("flyout_menu");
		var sticky = document.getElementById("sticky_nav");
		var winHeight = jQuery(window).height();
		// New height
		var winWidth = jQuery(window).width();
		// New width
		//alert(parseInt(winWidth) );
		if (jQuery.browser.safari) {
			var bodyelem = jQuery(".html");
		} else {
			var bodyelem = jQuery("html");
		}
		var scrollTop = bodyelem.scrollTop();

		if (sticky.innerHTML.indexOf('sticky-desktop-mobile')==-1) {
			if (scrollTop > stickyNavTop) {
				jQuery('#sticky_nav').show();
				jQuery('#zone-branding').hide();
			} else {
				jQuery('#zone-branding').show();
				jQuery('#sticky_nav').hide();
			}
		} else {
			jQuery('#zone-branding').show();
			jQuery('#sticky_nav').hide();
		}

		if (parseInt(winWidth) < 831) {
			jQuery('#sticky_nav').show();
			jQuery('#zone-branding').hide();
		}

		var stickyHeight = sticky.clientHeight;
		var stickyMenuHeight = document.getElementById('sticky_nav_menu_wrapper').clientHeight;
		var sliver = document.querySelectorAll('.sliver-container');

		if (sliver.length != 0) {
			sliver = sliver[0].clientHeight;
		} else {
			sliver = 0;
		}

		if (scrollTop < sliver) {
			sticky.style.top = (0 - scrollTop).toString().concat('px');
			flyout.style.top = (stickyHeight + stickyMenuHeight - scrollTop - 2).toString().concat('px');
			flyout.style.height = (winHeight - (stickyHeight + stickyMenuHeight) - (sliver - scrollTop) + 3).toString().concat('px');

		} else {
			sticky.style.top = (-sliver).toString().concat('px');
			flyout.style.top = (stickyHeight + stickyMenuHeight - sliver - 2).toString().concat('px');
			flyout.style.height = (winHeight - (stickyHeight + stickyMenuHeight) + 3).toString().concat('px');
		}

	};

	function prefaces() {

		var prefaces = new Array();
		prefaces[0] = document.getElementById('region-preface-first');
		prefaces[1] = document.getElementById('region-preface-second');
		prefaces[2] = document.getElementById('region-preface-third');

		if (prefaces[0] != null && prefaces[1] != null && prefaces[2] != null) {
			var i, j = 0, w1, w2, w3, itemHeight = 0, fields = new Array();

			for ( i = 0; i < 3; i++) {
				fields[i] = prefaces[i].querySelectorAll('.views-field');
			}

			w1 = fields[0].length;
			w2 = fields[1].length;
			w3 = fields[2].length;

			if (w2 == w1 && w3 == w1) {
				while (j < w1) {
					itemHeight = 0;

					for ( i = 0; i < 3; i++) {
						if (fields[i][j].clientHeight > itemHeight) {
							itemHeight = fields[i][j].clientHeight;
						}
					}

					itemHeight = itemHeight.toString().concat('px');
					for ( i = 0; i < 3; i++) {
						fields[i][j].style.height = itemHeight;
					}

					j++;

				}
			} else {
				if (w1 == w2) {
					heightMatch(fields[0], fields[1]);
				} else if (w1 == w3) {
					heightMatch(fields[0], fields[2]);
				} else if (w2 == w3) {
					heigthMatch(fields[1], fields[2]);
				}

			}

			itemHeight = 0;
			for ( i = 0; i < 3; i++) {
				if (itemHeight < prefaces[i].clientHeight) {
					itemHeight = prefaces[i].clientHeight
				}
			}
			itemHeight = itemHeight.toString().concat('px');
			for ( i = 0; i < 3; i++) {
				prefaces[i].style.height = itemHeight;
			}

		}
	};

	function heightMatch(item1, item2) {
		var itemHeight;
		for (var j = 0; j < item1.length; j++) {
			if (item1[j].clientHeight > item2[j].clientHeight) {
				itemHeight = item1[j].clientHeight.toString().concat('px');
			} else {
				itemHeight = item2[j].clientHeight.toString().concat('px');
			}

			item1[j].style.height = itemHeight;
			item2[j].style.height = itemHeight;
		}
	}

	function frontSlider() {
		if ($(".front-slider .slides li").size() <= 3) {
			$(".front-slider .flex-direction-nav").css("display", "none");
		}

		var $quote = $(".front-slider .text-foreground");
		for (var i = 0; i < $quote.size(); i++) {
			var numChars = $quote[i].innerHTML.length;
			$element = $quote[i];
			if (numChars < 70) {
				$element.style.fontSize = "2.3em";
			} else if ((numChars >= 70) && (numChars < 120)) {
				$element.style.fontSize = "2em";
			} else if ((numChars >= 120) && (numChars < 170)) {
				$element.style.fontSize = "1.7em";
			} else if ((numChars >= 170) && (numChars < 220)) {
				$element.style.fontSize = "1.4em";
			} else if ((numChars >= 220) && (numChars < 270)) {
				$element.style.fontSize = "1.2em";
			} else {
				$element.style.fontSize = "1em";
			}
		}
	}

	frontSlider();
	stickyNav();
	prefaces();

	jQuery(window).scroll(function() {
		stickyNav();
	});

	jQuery(window).resize(function() {
		stickyNav();
	});

	jQuery("#sticky_nav .button").toggle(function() {
		jQuery("#flyout_menu").animate({
			left : "-10px"
		});
	}, function() {
		jQuery("#flyout_menu").animate({
			left : "-999px"
		});
	});

	jQuery("#flyout_menu .close").click(function() {
		jQuery("#sticky_nav .button").trigger("click");
	});
});
