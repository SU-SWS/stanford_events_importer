<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function stanford_events_importer_taxonomy_default_vocabularies() {
  return array(
    'stanford_event_audience' => array(
      'name' => 'Stanford Event Audience',
      'description' => 'Audience as used on events.stanford.edu (e.g., "Faculty/Staff", "Students", etc.)',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_stanford_event_audience',
      'weight' => '0',
      'nodes' => array(
        'stanford_event' => 'stanford_event',
      ),
    ),
    'stanford_event_categories' => array(
      'name' => 'Stanford Event Categories',
      'description' => 'Category names as used on events.stanford.edu',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_stanford_event_categories',
      'weight' => '0',
      'nodes' => array(
        'stanford_event' => 'stanford_event',
      ),
    ),
  );
}
