<?php
/**
 * @file
 * stanford_events_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_events_importer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_events_importer_node_info() {
  $items = array(
    'stanford_event' => array(
      'name' => t('Stanford Event'),
      'base' => 'node_content',
      'description' => t('An event pulled in from <a href="http://events.stanford.edu">events.stanford.edu</a>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'stanford_event_importer' => array(
      'name' => t('Stanford Event Importer'),
      'base' => 'node_content',
      'description' => t('This is a meta content type to which you can attach Stanford Event Importer Feeds'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
