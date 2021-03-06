<?php
/**
 * @file
 * tree_layout.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tree_layout_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact_us';
  $page->task = 'page';
  $page->admin_title = 'Contact Us';
  $page->admin_description = 'Contact us page custom';
  $page->path = 'contact_us';
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
  $handler->name = 'page_contact_us__panel';
  $handler->task = 'page';
  $handler->subtask = 'contact_us';
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
  $display->layout = 'radix_taylor';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'half' => NULL,
      'quarter1' => NULL,
      'quarter2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3d57bad1-7c8a-48bc-816c-dd735e393445';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4077394d-1076-4533-9bb8-090a341e4276';
    $pane->panel = 'half';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Get In Touch',
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
    $pane->uuid = '4077394d-1076-4533-9bb8-090a341e4276';
    $display->content['new-4077394d-1076-4533-9bb8-090a341e4276'] = $pane;
    $display->panels['half'][0] = 'new-4077394d-1076-4533-9bb8-090a341e4276';
    $pane = new stdClass();
    $pane->pid = 'new-d97d12f6-a7f2-4847-9a68-c1e8115e1b5c';
    $pane->panel = 'header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Contact TREE',
      'body' => '[gmap markers=green::-1.2997069999999946,36.805728999999914 |zoom=15 |center=-1.2997069999999946,36.805728999999914 |width=100% |height=400px |control=Small |type=Map]
',
      'format' => 'gmap_macro',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'map',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd97d12f6-a7f2-4847-9a68-c1e8115e1b5c';
    $display->content['new-d97d12f6-a7f2-4847-9a68-c1e8115e1b5c'] = $pane;
    $display->panels['header'][0] = 'new-d97d12f6-a7f2-4847-9a68-c1e8115e1b5c';
    $pane = new stdClass();
    $pane->pid = 'new-e4de56e3-ec78-4315-b84b-7d64237c62b6';
    $pane->panel = 'quarter1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'contacts',
      'title' => 'Nairobi',
      'body' => '<p>University of Washington-TREE Program<br style="box-sizing: border-box;" />University of Nairobi Medical School<br style="box-sizing: border-box;" />Kenyatta National Hospital<br style="box-sizing: border-box;" />UNITID Building Ground Floor<br style="box-sizing: border-box;" />P.O. Box 205-00202, KNH</p>

<p><i class="step fi-marker size-18"></i>&nbsp;Nairobi, Kenya
<br/>
<i class="step fi-telephone size-18"></i>&nbsp;Phone: (254) / 0731112512
</p>',
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
    $pane->uuid = 'e4de56e3-ec78-4315-b84b-7d64237c62b6';
    $display->content['new-e4de56e3-ec78-4315-b84b-7d64237c62b6'] = $pane;
    $display->panels['quarter1'][0] = 'new-e4de56e3-ec78-4315-b84b-7d64237c62b6';
    $pane = new stdClass();
    $pane->pid = 'new-0d234ae0-932f-4656-ad0b-33f8e15d5430';
    $pane->panel = 'quarter2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Seattle',
      'body' => '<p>Treatment, Research, and Expert Education (TREE)<br />Department of Global Health University of Washington&nbsp;<br />NJB 13th Floor<br />325 9th Avenue Box 359909</p>

<p><i class="step fi-marker size-18"></i>&nbsp;Seattle, WA 98104
<br/>
<i class="step fi-telephone size-18"></i>&nbsp;Phone: (206)&nbsp;685-8332
</p>',
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
    $pane->uuid = '0d234ae0-932f-4656-ad0b-33f8e15d5430';
    $display->content['new-0d234ae0-932f-4656-ad0b-33f8e15d5430'] = $pane;
    $display->panels['quarter2'][0] = 'new-0d234ae0-932f-4656-ad0b-33f8e15d5430';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4077394d-1076-4533-9bb8-090a341e4276';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_us'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'education';
  $page->task = 'page';
  $page->admin_title = 'Education';
  $page->admin_description = 'Education Page TREE trains health care providers and managers to deliver treatment in resource-limited settings through experiential learning and interactive web-based access to the academic resources of the University of Washington.';
  $page->path = 'Education';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'EDUCATION',
    'name' => 'main-menu',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_education__panel';
  $handler->task = 'page';
  $handler->subtask = 'education';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'education',
    'css' => '.breadcrumb { display: none; }
',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '59e6bec4-f269-4def-8443-f1cbebfbacc1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eeb0f7cf-76e4-44dc-a329-08e6cff77440';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'education';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 1,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
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
    $pane->uuid = 'eeb0f7cf-76e4-44dc-a329-08e6cff77440';
    $display->content['new-eeb0f7cf-76e4-44dc-a329-08e6cff77440'] = $pane;
    $display->panels['middle'][0] = 'new-eeb0f7cf-76e4-44dc-a329-08e6cff77440';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['education'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = 'Homepage';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'HOME',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6dee70ca-0465-419e-8e14-efd6eeefda11';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f01dccc3-daed-48a3-bdc4-df5b846510ca';
    $pane->panel = 'contentmain';
    $pane->type = 'views';
    $pane->subtype = 'tree';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
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
    $pane->uuid = 'f01dccc3-daed-48a3-bdc4-df5b846510ca';
    $display->content['new-f01dccc3-daed-48a3-bdc4-df5b846510ca'] = $pane;
    $display->panels['contentmain'][0] = 'new-f01dccc3-daed-48a3-bdc4-df5b846510ca';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f01dccc3-daed-48a3-bdc4-df5b846510ca';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'research';
  $page->task = 'page';
  $page->admin_title = 'Research';
  $page->admin_description = 'Research - TREE engages in research that answers questions that directly impacts the health care of people living in resource-limited settings.  ';
  $page->path = 'Research';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'RESEARCH',
    'name' => 'main-menu',
    'weight' => '3',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_research__panel';
  $handler->task = 'page';
  $handler->subtask = 'research';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '.breadcrumb { display: none; }
',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2865c4b5-c056-401d-904a-7b7003b2d349';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6d51360c-fa8e-48c1-bd3c-6b7c695396ed';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'research';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 1,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
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
    $pane->uuid = '6d51360c-fa8e-48c1-bd3c-6b7c695396ed';
    $display->content['new-6d51360c-fa8e-48c1-bd3c-6b7c695396ed'] = $pane;
    $display->panels['middle'][0] = 'new-6d51360c-fa8e-48c1-bd3c-6b7c695396ed';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-6d51360c-fa8e-48c1-bd3c-6b7c695396ed';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['research'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'resources';
  $page->task = 'page';
  $page->admin_title = 'Resources';
  $page->admin_description = 'Poster,Publications etc';
  $page->path = 'News_and_Events';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News and Events',
    'name' => 'main-menu',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_resources__panel';
  $handler->task = 'page';
  $handler->subtask = 'resources';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '.breadcrumb { display: none; }
',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'foundation_1col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '232dc98c-b093-4035-8bfb-54fdc724b8d0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc26d037-dba1-4b61-bdce-aadd3947ba79';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
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
    $pane->uuid = 'dc26d037-dba1-4b61-bdce-aadd3947ba79';
    $display->content['new-dc26d037-dba1-4b61-bdce-aadd3947ba79'] = $pane;
    $display->panels['middle'][0] = 'new-dc26d037-dba1-4b61-bdce-aadd3947ba79';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-dc26d037-dba1-4b61-bdce-aadd3947ba79';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resources'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'treatment';
  $page->task = 'page';
  $page->admin_title = 'Treatment';
  $page->admin_description = '';
  $page->path = 'Treatment';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'TREATMENT',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_treatment__panel';
  $handler->task = 'page';
  $handler->subtask = 'treatment';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '.breadcrumb { display: none; }
',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '225c6b7c-e877-4ccf-8139-34eb6c741bbe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7a2793d4-f005-4a0d-a870-3d530406f80b';
    $pane->panel = 'contentmain';
    $pane->type = 'views';
    $pane->subtype = 'treatment';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 1,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
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
    $pane->uuid = '7a2793d4-f005-4a0d-a870-3d530406f80b';
    $display->content['new-7a2793d4-f005-4a0d-a870-3d530406f80b'] = $pane;
    $display->panels['contentmain'][0] = 'new-7a2793d4-f005-4a0d-a870-3d530406f80b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['treatment'] = $page;

  return $pages;

}
