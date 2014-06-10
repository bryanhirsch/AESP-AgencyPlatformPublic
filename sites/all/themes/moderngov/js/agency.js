jQuery(window).load(function() { //window.load instead of document.ready because I need images to have loaded before measuring sizes
  //Contain Site Name and Slogan in the available area.
  jQuery('.site-name').fitText(1, { minFontSize: '28px', maxFontSize:'30px'});
  jQuery('.site-slogan').fitText(1, { minFontSize: '8px', maxFontSize:'11px'});
  jQuery('.footer-site-name').fitText(1, { minFontSize: '20px', maxFontSize:'24px'});
  jQuery('.footer-site-slogan').fitText(1, { minFontSize: '8px', maxFontSize:'11px'});
  
  //Footer animation
  //var footerMenuHeight = jQuery('#footer-menu').outerHeight(true);
  //var wrapperHeight = jQuery('#zone-footer-wrapper').outerHeight(true);
  //var footerNavHeight = jQuery('#footer-info').outerHeight(true) + 27;

  //console.log("footerMenuHeight: " + footerMenuHeight + " | wrapperHeight: " + wrapperHeight + " | footerNavHeight: " + footerNavHeight);

  //jQuery('#footer-nav').height(footerNavHeight);

  //jQuery("#footer-tab").toggle(
  //  function(){
  //    jQuery('#footer-nav').animate({height:footerMenuHeight + footerNavHeight},200);
  //    jQuery('html, body').animate({ scrollTop: jQuery(document).height() }, 1000);
  //    jQuery('#footer-tab').attr('src', '/sites/all/themes/agency_1/img/icons/icon-tab-minus.png');
  //  },
  //  function(){
  //    jQuery('#footer-nav').animate({height:footerNavHeight},200);
  //    jQuery('#zone-footer-wrapper').animate({'padding-top':15}, 200);
  //    jQuery('#footer-tab').attr('src', '/sites/all/themes/agency_1/img/icons/icon-tab-plus.png');
  //  }
  //);

});



jQuery(document).ready( function(){
  //positionFooter();
  //function positionFooter(){
  //  var padding_top = jQuery("#section-footer").css("padding-top").replace("px", "");
  //  var page_height = jQuery(document.body).height() - padding_top;
  //  var window_height = jQuery(window).height();
  //  var difference = window_height - page_height;
  //  if (difference < 0)
  //    difference = 0;

  //  jQuery("#section-footer").css({
  //    padding: difference + "px 0 0 0"
  //  })
  //}

  //jQuery(window).resize(positionFooter);
});
