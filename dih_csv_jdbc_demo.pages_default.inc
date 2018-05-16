<?php
/**
 * @file
 * dih_csv_jdbc_demo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dih_csv_jdbc_demo_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'csv_jdbc_item';
  $page->task = 'page';
  $page->admin_title = 'csv-jdbc-item';
  $page->admin_description = '';
  $page->path = 'csv/item/!id';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'id' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_csv_jdbc_item__panel';
  $handler->task = 'page';
  $handler->subtask = 'csv_jdbc_item';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'pearson_top' => NULL,
      'pearson_first' => NULL,
      'pearson_second' => NULL,
      'pearson_third' => NULL,
      'pearson_bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4f29f03b-056e-4404-85b6-ae1f50702ad2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_csv_jdbc_item__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-840bff86-6893-41f5-802c-57c33f5d80c0';
  $pane->panel = 'middle';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '840bff86-6893-41f5-802c-57c33f5d80c0';
  $display->content['new-840bff86-6893-41f5-802c-57c33f5d80c0'] = $pane;
  $display->panels['middle'][0] = 'new-840bff86-6893-41f5-802c-57c33f5d80c0';
  $pane = new stdClass();
  $pane->pid = 'new-b34e3540-c9d8-425b-863a-41eac9915d8d';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'dih_csv_demo-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b34e3540-c9d8-425b-863a-41eac9915d8d';
  $display->content['new-b34e3540-c9d8-425b-863a-41eac9915d8d'] = $pane;
  $display->panels['middle'][1] = 'new-b34e3540-c9d8-425b-863a-41eac9915d8d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['csv_jdbc_item'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'csv_jdbc_search';
  $page->task = 'page';
  $page->admin_title = 'csv-jdbc-search';
  $page->admin_description = '';
  $page->path = 'search/csv/!term';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'term' => array(
      'id' => '',
      'identifier' => '',
      'argument' => '',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_csv_jdbc_search__panel';
  $handler->task = 'page';
  $handler->subtask = 'csv_jdbc_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'pearson_top' => NULL,
      'pearson_first' => NULL,
      'pearson_second' => NULL,
      'pearson_third' => NULL,
      'pearson_bottom' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'CSV search demo';
  $display->uuid = 'cc5c93f0-12c0-425f-a35f-5af2b04f2cc9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_csv_jdbc_search__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-55dd679a-4432-428e-a825-c3cd9b98fc0d';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-n4Gm0KkWC3DOh8NKqEEFgd07oxO9MmjC';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '55dd679a-4432-428e-a825-c3cd9b98fc0d';
  $display->content['new-55dd679a-4432-428e-a825-c3cd9b98fc0d'] = $pane;
  $display->panels['left'][0] = 'new-55dd679a-4432-428e-a825-c3cd9b98fc0d';
  $pane = new stdClass();
  $pane->pid = 'new-dde725ae-3486-415d-a382-ca6ff43061ec';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-P7S0FNGqIUUhuvdeKAt1PvO49c1udBlX';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dde725ae-3486-415d-a382-ca6ff43061ec';
  $display->content['new-dde725ae-3486-415d-a382-ca6ff43061ec'] = $pane;
  $display->panels['left'][1] = 'new-dde725ae-3486-415d-a382-ca6ff43061ec';
  $pane = new stdClass();
  $pane->pid = 'new-e3bdcbb6-d30a-40ee-8642-761a91c71e4f';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-dih_csv_demo-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e3bdcbb6-d30a-40ee-8642-761a91c71e4f';
  $display->content['new-e3bdcbb6-d30a-40ee-8642-761a91c71e4f'] = $pane;
  $display->panels['middle'][0] = 'new-e3bdcbb6-d30a-40ee-8642-761a91c71e4f';
  $pane = new stdClass();
  $pane->pid = 'new-9879a641-44e3-4bbe-94a5-1194fa4434f3';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'dih_csv_demo-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9879a641-44e3-4bbe-94a5-1194fa4434f3';
  $display->content['new-9879a641-44e3-4bbe-94a5-1194fa4434f3'] = $pane;
  $display->panels['middle'][1] = 'new-9879a641-44e3-4bbe-94a5-1194fa4434f3';
  $pane = new stdClass();
  $pane->pid = 'new-7d738fb5-0df2-4359-b07b-733b745b3df7';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'current_search-dih_csv_demo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7d738fb5-0df2-4359-b07b-733b745b3df7';
  $display->content['new-7d738fb5-0df2-4359-b07b-733b745b3df7'] = $pane;
  $display->panels['right'][0] = 'new-7d738fb5-0df2-4359-b07b-733b745b3df7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['csv_jdbc_search'] = $page;

  return $pages;

}
