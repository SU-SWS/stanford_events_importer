<?php
/**
 * @file
 * stanford_events_recap.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_events_recap_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_post_events|node|stanford_event|form';
  $field_group->group_name = 'group_post_events';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Post Event Details',
    'weight' => '19',
    'children' => array(
      0 => 'field_s_event_post_video',
      1 => 'field_s_event_post_audio',
      2 => 'field_s_event_post_gallery',
      3 => 'field_s_event_post_recap',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-post-events field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Post Event Details');

  return $field_groups;
}
