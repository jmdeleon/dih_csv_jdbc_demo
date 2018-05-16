<?php
/**
 * @file
 * dih_csv_jdbc_demo.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dih_csv_jdbc_demo_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dih_csv_demo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_sarnia_dih_csv_jdbc';
  $view->human_name = 'dih-csv-demo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'solr_document' => 'solr_document',
    'solr_document_1' => 'solr_document_1',
    'solr_document_2' => 'solr_document_2',
    'solr_document_3' => 'solr_document_3',
    'solr_document_4' => 'solr_document_4',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'solr_document';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'solr_document' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'solr_document_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'solr_document_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'solr_document_3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'solr_document_4' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: dih-csv-jdbc (Sarnia index): Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['link_to_entity'] = 0;
  /* Field: dih-csv-jdbc (Sarnia index): Data: name */
  $handler->display->display_options['fields']['solr_document']['id'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document']['label'] = 'Name';
  $handler->display->display_options['fields']['solr_document']['element_type'] = 'h2';
  $handler->display->display_options['fields']['solr_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['solr_document']['solr_property'] = 'name';
  $handler->display->display_options['fields']['solr_document']['formatter'] = 'sarnia_formatter_plain';
  /* Field: dih-csv-jdbc (Sarnia index): Data: phone */
  $handler->display->display_options['fields']['solr_document_1']['id'] = 'solr_document_1';
  $handler->display->display_options['fields']['solr_document_1']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document_1']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_1']['label'] = 'Phone';
  $handler->display->display_options['fields']['solr_document_1']['solr_property'] = 'phone';
  $handler->display->display_options['fields']['solr_document_1']['formatter'] = 'sarnia_formatter_plain';
  /* Field: dih-csv-jdbc (Sarnia index): Data: address */
  $handler->display->display_options['fields']['solr_document_2']['id'] = 'solr_document_2';
  $handler->display->display_options['fields']['solr_document_2']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document_2']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_2']['label'] = 'Address';
  $handler->display->display_options['fields']['solr_document_2']['solr_property'] = 'address';
  $handler->display->display_options['fields']['solr_document_2']['formatter'] = '0';
  /* Field: dih-csv-jdbc (Sarnia index): Data: age */
  $handler->display->display_options['fields']['solr_document_3']['id'] = 'solr_document_3';
  $handler->display->display_options['fields']['solr_document_3']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document_3']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_3']['label'] = 'Age';
  $handler->display->display_options['fields']['solr_document_3']['solr_property'] = 'age';
  $handler->display->display_options['fields']['solr_document_3']['formatter'] = 'sarnia_formatter_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'csv/item/[id]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;

  /* Display: Search */
  $handler = $view->new_display('panel_pane', 'Search', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: dih-csv-jdbc (Sarnia index): Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['link_to_entity'] = 0;
  /* Field: dih-csv-jdbc (Sarnia index): Data: name */
  $handler->display->display_options['fields']['solr_document']['id'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document']['label'] = 'Name';
  $handler->display->display_options['fields']['solr_document']['alter']['path'] = 'csv/item/[id]';
  $handler->display->display_options['fields']['solr_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['solr_document']['solr_property'] = 'name';
  $handler->display->display_options['fields']['solr_document']['formatter'] = 'sarnia_formatter_plain';
  /* Field: dih-csv-jdbc (Sarnia index): Data: phone */
  $handler->display->display_options['fields']['solr_document_1']['id'] = 'solr_document_1';
  $handler->display->display_options['fields']['solr_document_1']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document_1']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_1']['label'] = 'Phone';
  $handler->display->display_options['fields']['solr_document_1']['solr_property'] = 'phone';
  $handler->display->display_options['fields']['solr_document_1']['formatter'] = 'sarnia_formatter_plain';
  /* Field: dih-csv-jdbc (Sarnia index): Data: address */
  $handler->display->display_options['fields']['solr_document_2']['id'] = 'solr_document_2';
  $handler->display->display_options['fields']['solr_document_2']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document_2']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_2']['label'] = 'Address';
  $handler->display->display_options['fields']['solr_document_2']['solr_property'] = 'address';
  $handler->display->display_options['fields']['solr_document_2']['formatter'] = '0';
  /* Field: dih-csv-jdbc (Sarnia index): Data: age */
  $handler->display->display_options['fields']['solr_document_3']['id'] = 'solr_document_3';
  $handler->display->display_options['fields']['solr_document_3']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document_3']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_3']['label'] = 'Age';
  $handler->display->display_options['fields']['solr_document_3']['solr_property'] = 'age';
  $handler->display->display_options['fields']['solr_document_3']['formatter'] = 'sarnia_formatter_plain';
  /* Field: dih-csv-jdbc (Sarnia index): Data: join_date */
  $handler->display->display_options['fields']['solr_document_4']['id'] = 'solr_document_4';
  $handler->display->display_options['fields']['solr_document_4']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document_4']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_4']['label'] = 'Join date';
  $handler->display->display_options['fields']['solr_document_4']['solr_property'] = 'join_date';
  $handler->display->display_options['fields']['solr_document_4']['formatter'] = 'sarnia_formatter_date';
  $handler->display->display_options['fields']['solr_document_4']['settings'] = array(
    'date_format_predefined' => '0',
    'date_format_custom' => 'Y-m-d H:m:s',
    'data_is_timestamp' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'csv/item/[id]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'panel',
      'context' => 'entity:bean.field_bean_highlight_description',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Item */
  $handler = $view->new_display('panel_pane', 'Item', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: dih-csv-jdbc (Sarnia index): Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['link_to_entity'] = 0;
  /* Field: dih-csv-jdbc (Sarnia index): Data: name */
  $handler->display->display_options['fields']['solr_document']['id'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document']['label'] = '';
  $handler->display->display_options['fields']['solr_document']['element_type'] = 'h1';
  $handler->display->display_options['fields']['solr_document']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['solr_document']['solr_property'] = 'name';
  $handler->display->display_options['fields']['solr_document']['formatter'] = 'sarnia_formatter_plain';
  /* Field: dih-csv-jdbc (Sarnia index): Data: phone */
  $handler->display->display_options['fields']['solr_document_1']['id'] = 'solr_document_1';
  $handler->display->display_options['fields']['solr_document_1']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document_1']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_1']['label'] = 'Phone';
  $handler->display->display_options['fields']['solr_document_1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['solr_document_1']['solr_property'] = 'phone';
  $handler->display->display_options['fields']['solr_document_1']['formatter'] = 'sarnia_formatter_plain';
  /* Field: dih-csv-jdbc (Sarnia index): Data: address */
  $handler->display->display_options['fields']['solr_document_2']['id'] = 'solr_document_2';
  $handler->display->display_options['fields']['solr_document_2']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document_2']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_2']['label'] = 'Address';
  $handler->display->display_options['fields']['solr_document_2']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['solr_document_2']['solr_property'] = 'address';
  $handler->display->display_options['fields']['solr_document_2']['formatter'] = '0';
  /* Field: dih-csv-jdbc (Sarnia index): Data: age */
  $handler->display->display_options['fields']['solr_document_3']['id'] = 'solr_document_3';
  $handler->display->display_options['fields']['solr_document_3']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document_3']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_3']['label'] = 'Age';
  $handler->display->display_options['fields']['solr_document_3']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['solr_document_3']['solr_property'] = 'age';
  $handler->display->display_options['fields']['solr_document_3']['formatter'] = 'sarnia_formatter_plain';
  /* Field: dih-csv-jdbc (Sarnia index): Data: join_date */
  $handler->display->display_options['fields']['solr_document_4']['id'] = 'solr_document_4';
  $handler->display->display_options['fields']['solr_document_4']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['fields']['solr_document_4']['field'] = 'solr_document';
  $handler->display->display_options['fields']['solr_document_4']['label'] = 'Join date';
  $handler->display->display_options['fields']['solr_document_4']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['solr_document_4']['solr_property'] = 'join_date';
  $handler->display->display_options['fields']['solr_document_4']['formatter'] = 'sarnia_formatter_date';
  $handler->display->display_options['fields']['solr_document_4']['settings'] = array(
    'date_format_predefined' => 'l, F j, Y - g:ia',
    'date_format_custom' => 'M j, Y',
    'data_is_timestamp' => 1,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: dih-csv-jdbc (Sarnia index): Data: id */
  $handler->display->display_options['arguments']['solr_document']['id'] = 'solr_document';
  $handler->display->display_options['arguments']['solr_document']['table'] = 'search_api_index_sarnia_dih_csv_jdbc';
  $handler->display->display_options['arguments']['solr_document']['field'] = 'solr_document';
  $handler->display->display_options['arguments']['solr_document']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['solr_document']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['solr_document']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['solr_document']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['solr_document']['not'] = 0;
  $handler->display->display_options['arguments']['solr_document']['solr_property'] = 'id';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'solr_document' => array(
      'type' => 'panel',
      'context' => 'entity:bean.field_bean_highlight_description',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'dih-csv-jdbc (Sarnia index): Data: id',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['dih_csv_demo'] = $view;

  return $export;
}
