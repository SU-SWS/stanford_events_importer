<?php
/**
 * @file
 * stanford_events_importer.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function stanford_events_importer_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Stanford Events Category List';
  $data_table->name = 'stanford_events_category_list';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'guid' => array(
        'type' => 'int',
        'size' => 'tiny',
        'not null' => TRUE,
        'default' => 0,
        'description' => '',
        'unsigned' => 1,
      ),
      'category_id' => array(
        'type' => 'int',
        'size' => 'tiny',
        'not null' => FALSE,
        'description' => '',
        'unsigned' => 1,
      ),
      'name' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'type' => array(
        'type' => 'int',
        'size' => 'tiny',
        'not null' => FALSE,
        'description' => '',
        'unsigned' => 1,
      ),
      'description' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'tag' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'stanford_events_category_list',
    'indexes' => array(
      'category_id' => array(
        0 => 'category_id',
      ),
      'guid' => array(
        0 => 'guid',
      ),
      'type' => array(
        0 => 'type',
      ),
    ),
    'primary key' => array(
      0 => 'guid',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'guid' => array(
        'label' => 'GUID',
      ),
      'category_id' => array(
        'label' => 'Category ID',
      ),
      'name' => array(
        'label' => 'Name',
      ),
      'type' => array(
        'label' => 'Type',
      ),
      'description' => array(
        'label' => 'Description',
      ),
      'tag' => array(
        'label' => 'Tag',
      ),
    ),
  );
  $export['stanford_events_category_list'] = $data_table;

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Stanford Events Organization List';
  $data_table->name = 'stanford_events_organization_list';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'guid' => array(
        'type' => 'int',
        'size' => 'small',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'organization_id' => array(
        'type' => 'int',
        'size' => 'small',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'name' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'type' => array(
        'type' => 'int',
        'size' => 'tiny',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'email' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'phone' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'url' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'rss_url' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'stanford_events_organization_list',
    'indexes' => array(
      'guid' => array(
        0 => 'guid',
      ),
      'organization_id' => array(
        0 => 'organization_id',
      ),
      'type' => array(
        0 => 'type',
      ),
    ),
    'primary key' => array(
      0 => 'guid',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'guid' => array(
        'label' => 'GUID',
      ),
      'organization_id' => array(
        'label' => 'Organization ID',
      ),
      'name' => array(
        'label' => 'Name',
      ),
      'type' => array(
        'label' => 'Type',
      ),
      'email' => array(
        'label' => 'Email',
      ),
      'phone' => array(
        'label' => 'Phone',
      ),
      'url' => array(
        'label' => 'URL',
      ),
      'rss_url' => array(
        'label' => 'RSS URL',
      ),
    ),
  );
  $export['stanford_events_organization_list'] = $data_table;

  return $export;
}
