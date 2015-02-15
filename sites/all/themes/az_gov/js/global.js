(function ($) {
  Drupal.behaviors.azgov = {
    attach: function (context, settings) {
      $('.media .file-image > a').once(function () {
        if ($(this).attr('href') != "") {
          $(this).parent().wrap('<a>');
          var link = $(this).parent().parent();
          $(this.attributes).each(function () {
            $(link).attr(this.nodeName, this.value);
          });
          $(this).remove();
        }
      });

      $('.media').once(function () {
        var self = this;
        $(this).find('.file-image img').once(function () {
          $(self).attr('style', $(this).attr('style'));
        });
      });

      $(document).ready(function () {
        //Move the quicktabs into the contextual links gear and hides the actual tabs from view.
        $("[id^=block-quicktabs-draggable-views-]").each(function () {
          var links = $(this).find('ul.quicktabs-tabs').contents();
          $(this).find('.contextual-links-wrapper:first ul').append(links);
          $(this).find('.contextual-links-wrapper:first').css('right', '50px');
          $(this).find('h2.block-title:first').remove();
          $(this).find('ul.quicktabs-tabs').remove();
        });

        //Fix basic slideshow heights
        var slideshow_heights = function () {
          if ($('.node-basic-slideshow .field-slideshow-slide').length > 1) {
            $('.node-basic-slideshow .field-slideshow-caption').css('max-height', $($('.node-basic-slideshow .field-slideshow-image')[0]).height() - 40);
          } else {
            $('.node-basic-slideshow .field-slideshow-caption').css('max-height', $($('.node-basic-slideshow .field-slideshow-image')[0]).height() - 20);
          }
          $('.node-basic-slideshow .field-slideshow').css('min-height', $('.node-basic-slideshow .field-slideshow img').height());
        };
        //invokes the slideshow height match function above
        slideshow_heights();
        $(window).resize(function () {
          slideshow_heights();
        });
      });

      //adds a class to any email input form
      $('input.email').addClass('form-control');

      //matches the heights of the preface rows or the preface regions.
      var preface_match = function () {
        var maxHeight = 0;
        $('.total-prefaces-1 .basic-block-row > div, .total-prefaces-2 .preface > div, .total-prefaces-3 .preface > div').each(function () {
          $(this).height('auto');
          maxHeight = maxHeight > $(this).height() ? maxHeight : $(this).height();
        });
        if ($(window).width() >= 600) {
          $('.total-prefaces-1 .basic-block-row > div, .total-prefaces-2 .preface > div, .total-prefaces-3 .preface > div').each(function () {
            $(this).height(maxHeight);
          });
        }

        var maxHeight = 0;
        $('#preface-group h2.node-title, #preface-group h2.block-title').each(function () {
          $(this).height('auto');
          maxHeight = maxHeight > $(this).height() ? maxHeight : $(this).height();
        })
        if ($(window).width() >= 600) {
          $('#preface-group h2.node-title, #preface-group h2.block-title').each(function () {
            $(this).height(maxHeight);
          })
        }
      };
      //invokes the preface match function above
      preface_match();
      $(window).resize(function () {
        preface_match();
      });


      //expandable page node
      $('.node-expandable-page .field-name-field-expandable-page-text').once(function () {
        $(this).hide();
        $(this).siblings('.field-name-field-expandable-page-link-label').click(function () {
          $(this).siblings('.field-name-field-expandable-page-text').slideToggle('slow');
        });
      });

      //adjusts the padding on the content zone since the footer is an absolute position
      //this helps with a dynamic footer height so that the footer can remain at the bottom even on short pages
      $('#zone-content').css('padding-bottom', $('#zone-footer').height() + 20);
      $(window).resize(function () {
        $('#zone-content').css('padding-bottom', $('#zone-footer').height() + 20);
      });


      //if ($('.button-link-wrapper').length == 0) {
      //  var menu_button = '<div class="mobile-menu-expand">Expand Menu Item</div>';
      //  $('.region-menu ul.menu li.expanded > a').wrap('<div class="button-link-wrapper">')
      //  $('.button-link-wrapper a').after(menu_button);
      //  $('.mobile-menu-expand').click(function () {
      //    $(this).toggleClass('mobile-menu-open');
      //    $(this).parent().parent().toggleClass('open-menu-item');
      //    $(this).parent().siblings('ul').slideToggle(300);
      //  });
      //}
      //if the window is resized, the menu items will collapse.
      $(window).resize(function () {
        $('.mobile-menu-open').click();
        $('.region-menu ul.menu ul').css('display', '');
      });

      //moves the sliver within the page tag for container height fixes
      var sliver = $('.sliver-container');
      if (sliver.length > 0) {
        $('#page').prepend(sliver[0].outerHTML);
        sliver.remove();
      }

      //adds contextual links actions to node pages
      $('.logged-in.page-node #content div.tabs').once(function () {
        //add & removes necessary classes for contextual links
        $(this).removeClass().addClass('contextual-links-wrapper contextual-links-processed');
        $(this).find('ul').removeClass().addClass('contextual-links');

        /**************************************************/
        /* Begin direct copy of js from Contextual Module */
        /**************************************************/
        var $wrapper = $(this);
        var $region = $wrapper.closest('.contextual-links-region');
        var $links = $wrapper.find('ul.contextual-links');
        var $trigger = $('<a class="contextual-links-trigger" href="#" />').text(Drupal.t('Configure')).click(
          function () {
            $links.stop(true, true).slideToggle(100);
            $wrapper.toggleClass('contextual-links-active');
            return false;
          }
        );
        // Attach hover behavior to trigger and ul.contextual-links.
        $trigger.add($links).hover(
          function () {
            $region.addClass('contextual-links-region-active');
          },
          function () {
            $region.removeClass('contextual-links-region-active');
          }
        );
        // Hide the contextual links when user clicks a link or rolls out of the .contextual-links-region.
        /*$region.bind('mouseleave click', Drupal.contextualLinks.mouseleave); Did not work for non-admins, modified the bind reaction as below */
        $region.hover(
          function () {
            $trigger.addClass('contextual-links-trigger-active');
          },
          function () {
            $trigger.removeClass('contextual-links-trigger-active');
          }
        );
        // Prepend the trigger.
        $wrapper.prepend($trigger);

        /***********************************/
        /* End Copy from Contextual Module */
        /***********************************/

        $region.bind('mouseleave click', function () {
          if ($wrapper.hasClass('contextual-links-active')) {
            $trigger.click();
          }
        });
      });


      $('.sliver-container img').once(function () {
        $(this).attr('alt', $(this).attr('title') + ' Image');
      });


      $('.menu-block-wrapper ul.menu li.expanded').once(function () {
        $(this).find('ul').hide();
        $(this).prepend('<span class="glyphicon glyphicon-chevron-right"/>');
        $(this).find('.glyphicon').click(function () {
          $(this).siblings('ul').slideToggle('slow');
          $(this).toggleClass('glyphicon-chevron-down');
          $(this).toggleClass('glyphicon-chevron-right');
        });
      });

      //adds the mobile button for main menu
      $('#block-system-main-menu ul.menu li.expanded').once(function () {
        $(this).prepend('<span class="glyphicon glyphicon-plus-sign" />');
        $(this).find('.glyphicon').click(function () {
          $(this).toggleClass('glyphicon-plus-sign');
          $(this).toggleClass('glyphicon-minus-sign');
          $(this).siblings('ul').slideToggle('slow');
        });
      });
    }
  }
})(jQuery);