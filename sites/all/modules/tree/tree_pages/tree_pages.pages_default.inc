<?php
/**
 * @file
 * tree_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tree_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'posters_and_presentions';
  $page->task = 'page';
  $page->admin_title = 'Posters and Presentions';
  $page->admin_description = 'Posters and Presentions';
  $page->path = 'Posters/list';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_posters_and_presentions__panel';
  $handler->task = 'page';
  $handler->subtask = 'posters_and_presentions';
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
  $display->layout = 'radix_moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8e5866e0-fd21-4a62-803a-af2e0aa2100d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-edf95e8e-f74e-47ab-be78-b31551295b9c';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'pubs-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'edf95e8e-f74e-47ab-be78-b31551295b9c';
    $display->content['new-edf95e8e-f74e-47ab-be78-b31551295b9c'] = $pane;
    $display->panels['contentmain'][0] = 'new-edf95e8e-f74e-47ab-be78-b31551295b9c';
    $pane = new stdClass();
    $pane->pid = 'new-e439a4ca-9fe3-438c-8b28-f7e1da4dd906';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'resources-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e439a4ca-9fe3-438c-8b28-f7e1da4dd906';
    $display->content['new-e439a4ca-9fe3-438c-8b28-f7e1da4dd906'] = $pane;
    $display->panels['sidebar'][0] = 'new-e439a4ca-9fe3-438c-8b28-f7e1da4dd906';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-edf95e8e-f74e-47ab-be78-b31551295b9c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['posters_and_presentions'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'publications';
  $page->task = 'page';
  $page->admin_title = 'Publications';
  $page->admin_description = 'Publications List';
  $page->path = 'Publications/list';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_publications__panel';
  $handler->task = 'page';
  $handler->subtask = 'publications';
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
  $display->layout = 'radix_moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '47e39d54-5cdd-45c9-9c1d-9d4d477ba45b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1ea7f6cb-d4fb-4c8d-910a-5247cbe04f7e';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'pubs-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1ea7f6cb-d4fb-4c8d-910a-5247cbe04f7e';
    $display->content['new-1ea7f6cb-d4fb-4c8d-910a-5247cbe04f7e'] = $pane;
    $display->panels['contentmain'][0] = 'new-1ea7f6cb-d4fb-4c8d-910a-5247cbe04f7e';
    $pane = new stdClass();
    $pane->pid = 'new-e071496e-f0d2-41ed-b5f3-8bf398afb3a1';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'resources-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e071496e-f0d2-41ed-b5f3-8bf398afb3a1';
    $display->content['new-e071496e-f0d2-41ed-b5f3-8bf398afb3a1'] = $pane;
    $display->panels['sidebar'][0] = 'new-e071496e-f0d2-41ed-b5f3-8bf398afb3a1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1ea7f6cb-d4fb-4c8d-910a-5247cbe04f7e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['publications'] = $page;

  return $pages;

}
