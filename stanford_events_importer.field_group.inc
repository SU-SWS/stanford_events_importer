<?php
/**
 * @file
 * stanford_events_importer.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_events_importer_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_descriptor_info|node|stanford_event|default';
  $field_group->group_name = 'group_descriptor_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descriptor group',
    'weight' => '1',
    'children' => array(
      0 => 'field_stanford_event_admission',
      1 => 'field_stanford_event_datetime',
      2 => 'field_stanford_event_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Descriptor group',
      'instance_settings' => array(
        'classes' => 'descriptor',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_stanford_event_full_group_descriptor_info',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_descriptor_info|node|stanford_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_floatright|node|stanford_event|default';
  $field_group->group_name = 'group_floatright';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Float Right',
    'weight' => '0',
    'children' => array(
      0 => 'field_stanford_event_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Float Right',
      'instance_settings' => array(
        'classes' => 'float-right border-simple-nowidth border-shadow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_stanford_event_full_group_floatright',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_floatright|node|stanford_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postcard_content|node|stanford_event|teaser';
  $field_group->group_name = 'group_postcard_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '4',
    'children' => array(
      0 => 'field_stanford_event_admission',
      1 => 'field_stanford_event_datetime',
      2 => 'field_stanford_event_location',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'classes' => 'group-postcard-content field-group-div postcard-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_stanford_event_teaser_group_postcard_content',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_postcard_content|node|stanford_event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postcard_image|node|stanford_event|teaser';
  $field_group->group_name = 'group_postcard_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '3',
    'children' => array(
      0 => 'field_stanford_event_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Image',
      'instance_settings' => array(
        'classes' => 'group-postcard-image field-group-div postcard-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_stanford_event_teaser_group_postcard_image',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_postcard_image|node|stanford_event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_addimage_border_style|field_collection_item|field_s_image_additional|stanford_large_scaled';
  $field_group->group_name = 'group_s_addimage_border_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_additional';
  $field_group->mode = 'stanford_large_scaled';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Border Style',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_addimage_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Border Style',
      'instance_settings' => array(
        'classes' => 'border-simple-nowidth border-shadow',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'field_collection_item_field_s_image_additional_stanford_large_scaled_group_s_addimage_border_style',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_addimage_border_style|field_collection_item|field_s_image_additional|stanford_large_scaled'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_addimage_caption_div|field_collection_item|field_s_image_additional|stanford_large_scaled';
  $field_group->group_name = 'group_s_addimage_caption_div';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_additional';
  $field_group->mode = 'stanford_large_scaled';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caption Style',
    'weight' => '1',
    'children' => array(
      0 => 'field_s_addimage_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caption Style',
      'instance_settings' => array(
        'classes' => 'caption',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'field_collection_item_field_s_image_additional_stanford_large_scaled_group_s_addimage_caption_div',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_addimage_caption_div|field_collection_item|field_s_image_additional|stanford_large_scaled'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_addimage_credits_style|field_collection_item|field_s_image_additional|stanford_large_scaled';
  $field_group->group_name = 'group_s_addimage_credits_style';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_additional';
  $field_group->mode = 'stanford_large_scaled';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Credits Style',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_addimage_credits',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Credits Style',
      'instance_settings' => array(
        'classes' => 'credits',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'field_collection_item_field_s_image_additional_stanford_large_scaled_group_s_addimage_credits_style',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_addimage_credits_style|field_collection_item|field_s_image_additional|stanford_large_scaled'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_addimage|field_collection_item|field_s_image_additional|form';
  $field_group->group_name = 'group_s_addimage';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_s_image_additional';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Additional Image(s)',
    'weight' => '0',
    'children' => array(
      0 => 'field_s_addimage_image',
      1 => 'field_s_addimage_credits',
      2 => 'field_s_addimage_source_info',
      3 => 'field_s_addimage_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Add/Edit Additional Image(s)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_s_addimage|field_collection_item|field_s_image_additional|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_event_associations|node|stanford_event|form';
  $field_group->group_name = 'group_s_event_associations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Associations and Categories',
    'weight' => '2',
    'children' => array(
      0 => 'field_s_event_type',
      1 => 'field_stanford_event_program',
      2 => 'field_event_related_person',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Associations and Categories',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-s-event-associations field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_s_event_associations|node|stanford_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|node|stanford_event|teaser';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '0',
    'children' => array(
      0 => 'group_postcard_image',
      1 => 'group_postcard_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'classes' => 'group-s-postcard field-group-div postcard clear-both postcard-left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_stanford_event_teaser_group_s_postcard',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s_postcard|node|stanford_event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stanford_event_advanced|node|stanford_event|form';
  $field_group->group_name = 'group_stanford_event_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '14',
    'children' => array(
      0 => 'field_stanford_event_add_to_cal',
      1 => 'field_stanford_event_audience',
      2 => 'field_stanford_event_categories',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_stanford_event_advanced|node|stanford_event|form'] = $field_group;

  return $export;
}
