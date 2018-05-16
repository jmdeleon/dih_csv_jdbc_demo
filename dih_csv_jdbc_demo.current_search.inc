<?php
/**
 * @file
 * dih_csv_jdbc_demo.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function dih_csv_jdbc_demo_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'dih_csv_demo';
  $item->label = 'dih_csv_demo';
  $item->settings = array(
    'items' => array(
      'facets' => array(
        'id' => 'active',
        'label' => 'Facets',
        'pattern' => '[facetapi_active:facet-label]: [facetapi_active:active-value]',
        'keys' => 1,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '3',
    ),
  );
  $export['dih_csv_demo'] = $item;

  return $export;
}
