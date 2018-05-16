<?php
/**
 * @file
 * dih_csv_jdbc_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dih_csv_jdbc_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "sarnia" && $api == "sarnia") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dih_csv_jdbc_demo_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function dih_csv_jdbc_demo_default_search_api_index() {
  $items = array();
  $items['sarnia_dih_csv_jdbc'] = entity_import('search_api_index', '{
    "name" : "dih-csv-jdbc (Sarnia index)",
    "machine_name" : "sarnia_dih_csv_jdbc",
    "description" : "This index is managed by the Sarnia module.",
    "server" : "dih_csv_jdbc",
    "item_type" : "sarnia_dih_csv_jdbc",
    "options" : {
      "cron_limit" : 0,
      "fields" : {
        "_version_" : {
          "name" : "_version_",
          "indexed" : true,
          "type" : "none",
          "boost" : "1.0"
        },
        "address" : { "name" : "address", "indexed" : true, "type" : "none", "boost" : "1.0" },
        "age" : { "name" : "age", "indexed" : true, "type" : "none", "boost" : "1.0" },
        "content" : { "name" : "content", "indexed" : true, "type" : "text", "boost" : "1.0" },
        "id" : { "name" : "id", "indexed" : true, "type" : "none", "boost" : "1.0" },
        "join_date" : {
          "name" : "join_date",
          "indexed" : true,
          "type" : "date",
          "boost" : "1.0"
        },
        "name" : { "name" : "name", "indexed" : true, "type" : "none", "boost" : "1.0" },
        "phone" : { "name" : "phone", "indexed" : true, "type" : "none", "boost" : "1.0" }
      }
    },
    "enabled" : "1",
    "read_only" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function dih_csv_jdbc_demo_default_search_api_server() {
  $items = array();
  $items['dih_csv_jdbc'] = entity_import('search_api_server', '{
    "name" : "dih-csv-jdbc",
    "machine_name" : "dih_csv_jdbc",
    "description" : "",
    "class" : "sarnia_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/dih-csv-jdbc",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 1,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0,
      "commits_disabled" : 0,
      "sarnia_request_handler" : "",
      "sarnia_default_query" : "*:*"
    },
    "enabled" : "1"
  }');
  return $items;
}
