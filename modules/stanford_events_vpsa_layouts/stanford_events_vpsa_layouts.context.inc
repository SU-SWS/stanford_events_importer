<?php
/**
 * @file
 * stanford_events_vpsa_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_events_vpsa_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vpsa_events_node';
  $context->description = 'VPSA Events Nodes';
  $context->tag = 'Events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'stanford_event' => 'stanford_event',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-806b9c648bcf50687790f17cfd35a3ce' => array(
          'module' => 'views',
          'delta' => '806b9c648bcf50687790f17cfd35a3ce',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('VPSA Events Nodes');
  $export['vpsa_events_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vpsa_events_past';
  $context->description = 'VPSA Past Events page';
  $context->tag = 'Events';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events/past-events' => 'events/past-events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-stanford_events_views-block_2' => array(
          'module' => 'views',
          'delta' => 'stanford_events_views-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('VPSA Past Events page');
  $export['vpsa_events_past'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vpsa_events_upcoming';
  $context->description = 'VPSA Upcoming Events, Month, Day';
  $context->tag = 'Events';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events/upcoming-events' => 'events/upcoming-events',
        'events/month' => 'events/month',
        'events/month/*' => 'events/month/*',
        'events/day' => 'events/day',
        'events/day/*' => 'events/day/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-934c9b9d8d2d2f2b37f050dcd3bba83c' => array(
          'module' => 'views',
          'delta' => '934c9b9d8d2d2f2b37f050dcd3bba83c',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('VPSA Upcoming Events, Month, Day');
  $export['vpsa_events_upcoming'] = $context;

  return $export;
}
