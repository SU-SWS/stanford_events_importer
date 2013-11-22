/**
 * Tracks the time field in the date and time settings for changes
 * so that it may autopopulate the 'to' field.
 */


(function($){

  // Drupal Behaviours
  // ---------------------------------------------------------------------------


  Drupal.behaviors.stanford_date_timepicker = {
    attach: function (context, settings) {

      $.each($('.start-date-wrapper ', context), function(i, v) {
        var timefield = $(v).find('input:eq(1)');
        timefield.blur(time_blur_handler);
      });

    }
  };


  // Handlers and Callbacks
  // ---------------------------------------------------------------------------


  /**
   * [time_blur_handler description]
   * @param  {[type]} e [description]
   * @return {[type]}   [description]
   */
  var time_blur_handler = function(e) {

    // First find the show end date checkbox and see if it is checked.
    var showend = $(this)
        .closest('.fieldset-wrapper')
        .find('.form-type-checkbox label:contains("Show End Date")')
        .siblings('input');
    var checked = showend.attr('checked');

    // If show end date is not checked then die.
    if (!checked) { return; }


    // Fields and variable definitions oh my!
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
    var php_time_format = $(this).data('timeformat');


    // If we can't find the fields then we must end our journey.
    if (typeof to_date_field === undefined) { return; }
    if (typeof to_time_field === undefined) { return; }

    // If the date field is empty populate it.
    if (to_date_field.val().length === 0) {
      to_date_field.val(from_date_value);
    }

    // Date conversion needs 24hr format.
    var from_time_value_twenty_four = stanford_events_importer_time_to_twenty_four(from_time_value);

    // Format the new time appropriately.
    var date_object = new Date(from_date_value + " " + from_time_value_twenty_four);
    var formatted_time = stanford_events_importer_get_formatted_time(date_object, php_time_format);

    // Set the time field to the new date.
    to_time_field.val(formatted_time);

  };

  // Public Functions
  // ---------------------------------------------------------------------------


  function stanford_events_importer_time_to_twenty_four(time) {

    var hours = Number(time.match(/^(\d+)/)[1]);
    var minutes = Number(time.match(/:(\d+)/)[1]);
    var seconds = time.match(/:(\d+)/)[2];

    var AMPM = time.match(/(am|pm)/gi);
    if (AMPM instanceof Array) {
      if (AMPM[0] == "pm" || APMPM[0] == "PM") {
        hours = hours + 12;
      }
    }

    var sHours = hours.toString();
    var sMinutes = minutes.toString();
    if(hours<10) sHours = "0" + sHours;
    if(minutes<10) sMinutes = "0" + sMinutes;

    var formatted = sHours + ":" + sMinutes;
    if(typeof seconds === 'string') {
      formatted += ":" + seconds;
    }

    return formatted;
  }


  /**
   * [stanford_events_importer_get_formatted_time description]
   * @param  {[type]} dateobj    [description]
   * @param  {[type]} php_format [description]
   * @return {[type]}            [description]
   */
  function stanford_events_importer_get_formatted_time(date_object, php_format) {

    var formatted = php_format;

    date_object.setHours(date_object.getHours() + 1);
    var hr_twentyfour = date_object.getHours() < 12 ? "0" + date_object.getHours().toString() : date_object.getHours();
    var hr_twelve = (hr_twentyfour - 12) < 12 ? "0" + (hr_twentyfour - 12) : 12;
    var min = date_object.getMinutes() < 10 ? "0" + date_object.getMinutes().toString() : date_object.getMinutes();
    var sec = date_object.getSeconds() < 10 ? "0" + date_object.getSeconds().toString() : date_object.getSeconds();
    var ampm = date_object.getHours() < 12 ? "am" : "pm";

    // Hours.
    formatted = formatted.replace(/[H]/g, hr_twentyfour);
    formatted = formatted.replace(/[h]/g, hr_twelve);
    formatted = formatted.replace(/[g]/g, Math.round(hr_twelve));
    formatted = formatted.replace(/[G]/g, Math.round(hr_twentyfour));

    // Minutes.
    formatted = formatted.replace(/[i]/g, min);

    // Seconds.
    formatted = formatted.replace(/[s]/g, sec);

    // Am/Pm.
    formatted = formatted.replace(/[a]/g, ampm);
    formatted = formatted.replace(/[A]/g, ampm.toUpperCase());
    return formatted;
  }


})(jQuery);

