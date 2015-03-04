(function ($) {
  Drupal.behaviors.enewsemailconfirm = {
    attach: function (context, settings) {
      $('.form-item-Email').once(function () {
        var self = $(this);
        $(this).find('input').keyup(function () {
          var confirm = $(self).siblings('.form-item-Email-Confirm');
          emailcheck(self, confirm);
        });
      });
      $('.form-item-Email-Confirm').once(function () {
        var self = $(this);
        $(self).after('<div class="sub-password" style="display:none">This email address does not match</div>');
        $(this).find('input').keyup(function () {
          var email = $(self).siblings('.form-item-Email');
          emailcheck(email, self);
        });
      });

      var emailcheck = function (email, confirm) {
        var email_val = $(email).find('input').val();
        var confirm_val = $(confirm).find('input').val();
        if (email_val != confirm_val && confirm_val != '') {
          $(confirm).siblings('.sub-password').show('fast');
        } else {
          $(confirm).siblings('.sub-password').hide('fast');
        }
      }
    }
  }
})(jQuery);