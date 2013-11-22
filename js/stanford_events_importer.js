/**
 * Tracks the time field in the date and time settings for changes
 * so that it may autopopulate the 'to' field.
 */


(function($){

  Drupal.behaviors.stanford_date_timepicker = {
    attach: function (context, settings) {

      $.each($('.start-date-wrapper ', context), function(i, v) {
        var timefield = $(v).find('input:eq(1)');


        timefield.blur(time_blur_handler); // each
      }); // attach

    }
  };

  // ---------------------------------------------------------------------------


  /**
   * [time_blur_handler description]
   * @param  {[type]} e [description]
   * @return {[type]}   [description]
   */
  var time_blur_handler = function(e) {

    var showend = $(this)
        .closest('.fieldset-wrapper')
        .find('.form-type-checkbox label:contains("Show End Date")')
        .siblings('input');

    var checked = showend.attr('checked');

    // If show end date is not checked then die.
    if (!checked) {
      return;
    }

    // Fields and variable Definition.
    var fields = $(this)
                 .closest('.fieldset-wrapper')
                 .find('.end-date-wrapper input');
    var to_date_field   = fields.eq(0);
    var to_time_field   = fields.eq(1);
    var from_date_field = $(this)
                 .closest('.fieldset-wrapper')
                 .find('.start-date-wrapper input:eq(0)');
    var from_date_value = from_date_field.val();
    var from_time_value = $(this).val();

    if (typeof to_date_field === undefined) {
      return;
    }

    if (typeof to_date_field === undefined) {
      return;
    }

    if (to_date_field.val().length === 0) {
      to_date_field.val(from_date_value);
    }

    var date_object = new Date(from_date_value + " " + from_time_value);
    date_object.setHours(date_object.getHours() + 1);
    var hr = date_object.getHours() < 12 ? date_object.getHours() : date_object.getHours() - 12;
    var min = date_object.getMinutes();
    if (min < 10) {
        min = "0" + min;
    }
    var ampm = date_object.getHours() < 12 ? "am" : "pm";

    var formatted_date = hr + ":" + min + ampm;

    to_time_field.val(formatted_date);

  };


})(jQuery);
