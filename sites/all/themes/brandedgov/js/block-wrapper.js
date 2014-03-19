jQuery(document).ready(function() {
	var blockWrapper = function() {
		var blocks = document.querySelectorAll('.block');
		var page = document.getElementById('block-system-main');
		var pageTitle = document.getElementById('page-title');
		var i = 0, loc = 0;
		var wrapString = ' ';
		var outerString = page.outerHTML;

		loc = outerString.indexOf('theme-icon-');
		if (loc != -1) {
			wrapString = wrapString.concat(outerString.substring(loc, outerString.indexOf(' ', loc + 1)));
		}

		pageTitle.className = pageTitle.className + wrapString;
		wrapString = ' ';

		while (i < blocks.length) {
			innerString = blocks[i].innerHTML;
			loc = innerString.indexOf('theme-icon');
			if (loc != -1) {
				wrapString = wrapString.concat(innerString.substring(loc, innerString.indexOf(' ', loc + 1)));
			}
			blocks[i].className = blocks[i].className + wrapString;
			i++;
			wrapString = ' ';
		}
	}
	
	
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


	prefaces();
	blockWrapper();
});
