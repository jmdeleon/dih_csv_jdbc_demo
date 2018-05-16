<?php
/**
 * @file
 * dih_csv_jdbc_demo.sarnia.inc
 */

/**
 * Implements hook_default_sarnia_preset().
 */
function dih_csv_jdbc_demo_default_sarnia_preset() {
  $export = array();

  $sarnia_index = new stdClass();
  $sarnia_index->disabled = FALSE; /* Edit this to true to make a default sarnia_index disabled initially */
  $sarnia_index->api_version = 1;
  $sarnia_index->machine_name = 'sarnia_dih_csv_jdbc';
  $sarnia_index->label = 'dih-csv-jdbc (Sarnia index)';
  $sarnia_index->search_api_server = 'dih_csv_jdbc';
  $sarnia_index->search_api_index = 'sarnia_dih_csv_jdbc';
  $sarnia_index->id_field = '_version_';
  $export['sarnia_dih_csv_jdbc'] = $sarnia_index;

  return $export;
}
