<?php
/**
 * @file
 * tree_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tree_page_default_page_manager_pages() {
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_posters_and_presentions__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0188cb0a-1ca8-44fd-b4e9-886c94918b26';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'resources_pubs-panel_pane_posters';
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
  $pane->uuid = '0188cb0a-1ca8-44fd-b4e9-886c94918b26';
  $display->content['new-0188cb0a-1ca8-44fd-b4e9-886c94918b26'] = $pane;
  $display->panels['contentmain'][0] = 'new-0188cb0a-1ca8-44fd-b4e9-886c94918b26';
  $pane = new stdClass();
  $pane->pid = 'new-0b3491b0-8f9b-4b70-a175-b38c1eedf60a';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="panel-pane pane-custom pane-1">
 <h2 class="pane-title">
      Resource Links   </h2>
  <div class="pane-content">
    <div class="views-group">
<div class="views-row views-row-1 views-row-odd views-row-first">
<div class="views-field views-field-nothing"><div class="field-content">
<a href="/News/list">News</a> </div>  </div>
<div class="views-field views-field-field-other-info">
</div>
</div>
</div>
<div class="views-row views-row-2 views-row-even">
<div class="views-field views-field-nothing">        <span class="field-content"> </span>  </div>
<div class="views-field views-field-field-other-info">
<div class="field-content"><a href="/Stories/list">Success Stories</a></div>
</div>
<div class="views-row views-row-3 views-row-odd">
<div class="views-field views-field-nothing">        <span class="field-content"> </span>  </div>

<div class="views-field views-field-field-researcher-bio">
<div class="field-content"><a href="/Blog/list">Blog</a></div>
</div>
<div class="views-row views-row-4 views-row-even views-row-last">
<div class="views-field views-field-nothing">        <span class="field-content"><a href="/Event">Events</a> </span>  </div>
<div class="views-field views-field-field-other-info">
<div class="field-content"></div>
</div>
<div class="views-field views-field-field-researcher-bio">
<div class="field-content"></div>
</div>
</div>
</div>
  </div>
  </div>',
    'format' => 'panopoly_html_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0b3491b0-8f9b-4b70-a175-b38c1eedf60a';
  $display->content['new-0b3491b0-8f9b-4b70-a175-b38c1eedf60a'] = $pane;
  $display->panels['sidebar'][0] = 'new-0b3491b0-8f9b-4b70-a175-b38c1eedf60a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_publications__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cfd3aac7-11f5-4895-b6dd-4ee5bccb0f87';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'resources_pubs-panel_pane_pubs';
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
  $pane->uuid = 'cfd3aac7-11f5-4895-b6dd-4ee5bccb0f87';
  $display->content['new-cfd3aac7-11f5-4895-b6dd-4ee5bccb0f87'] = $pane;
  $display->panels['contentmain'][0] = 'new-cfd3aac7-11f5-4895-b6dd-4ee5bccb0f87';
  $pane = new stdClass();
  $pane->pid = 'new-a91da60f-738e-4ebb-9b73-01a7734a333e';
  $pane->panel = 'sidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="panel-pane pane-custom pane-1">
<h2 class="pane-title">
      Resource Links   </h2>
  <div class="pane-content">
    <div class="views-group">
<div class="views-row views-row-1 views-row-odd">
<div class="views-field views-field-nothing">       <div class="field-content">
<a href="/News/list">News</a> </div>  </div>
<div class="views-field views-field-field-other-info">
<div class="field-content"></div>
</div>
<div class="views-field views-field-field-researcher-bio">
<div class="field-content"></div>
</div>
</div>
</div>
<div class="views-row views-row-2 views-row-even">
<div class="views-field views-field-nothing">        <span class="field-content"> </span>  </div>
<div class="views-field views-field-field-other-info">
<div class="field-content"><a href="/Stories/list">Success Stories</a></div>
</div>
<div class="views-field views-field-field-researcher-bio">
<div class="field-content"></div>
</div>
</div>
<div class="views-row views-row-3 views-row-odd">
<div class="views-field views-field-nothing">        <span class="field-content"> </span>  </div>
<div class="views-field views-field-field-other-info">
<div class="field-content"></div>
</div>
<div class="views-field views-field-field-researcher-bio">
<div class="field-content"><a href="/Blog/list">Blog</a></div>
</div>
<div class="views-row views-row-4 views-row-even views-row-last">
<div class="views-field views-field-nothing">        <span class="field-content"><a href="/Event">Events</a> </span>  </div>
<div class="views-field views-field-field-other-info">
<div class="field-content"></div>
</div>
<div class="views-field views-field-field-researcher-bio">
<div class="field-content"></div>
</div>
</div>
</div>
  </div>
  </div>',
    'format' => 'panopoly_html_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a91da60f-738e-4ebb-9b73-01a7734a333e';
  $display->content['new-a91da60f-738e-4ebb-9b73-01a7734a333e'] = $pane;
  $display->panels['sidebar'][0] = 'new-a91da60f-738e-4ebb-9b73-01a7734a333e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['publications'] = $page;

  return $pages;

}
