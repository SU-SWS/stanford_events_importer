<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function stanford_events_importer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function stanford_events_importer_node_info() {
  $items = array(
    'stanford_event' => array(
      'name' => t('Stanford Event'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'stanford_event_importer' => array(
      'name' => t('Stanford Event Importer'),
      'module' => 'features',
      'description' => t('This is a meta content type to which you can attach Stanford Event Importer Feeds'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function stanford_events_importer_views_api() {
  return array(
    'api' => '2',
  );
}