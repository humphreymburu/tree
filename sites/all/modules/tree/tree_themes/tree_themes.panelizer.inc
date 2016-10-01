<?php
/**
 * @file
 * tree_themes.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tree_themes_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:themes:default:search_index';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'themes';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'search_index';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3a25e165-d5a6-44c9-bc2a-6bc8a99cac41';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-683ccbf3-50d0-4b32-9044-d4bb31ce57d6';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '683ccbf3-50d0-4b32-9044-d4bb31ce57d6';
    $display->content['new-683ccbf3-50d0-4b32-9044-d4bb31ce57d6'] = $pane;
    $display->panels['center'][0] = 'new-683ccbf3-50d0-4b32-9044-d4bb31ce57d6';
    $pane = new stdClass();
    $pane->pid = 'new-3b0c49fe-1426-4887-820a-1165d1d2150c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3b0c49fe-1426-4887-820a-1165d1d2150c';
    $display->content['new-3b0c49fe-1426-4887-820a-1165d1d2150c'] = $pane;
    $display->panels['center'][1] = 'new-3b0c49fe-1426-4887-820a-1165d1d2150c';
    $pane = new stdClass();
    $pane->pid = 'new-4e4ac5a9-2108-4513-a1d5-a99d56cdecd5';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_type_of_theme';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4e4ac5a9-2108-4513-a1d5-a99d56cdecd5';
    $display->content['new-4e4ac5a9-2108-4513-a1d5-a99d56cdecd5'] = $pane;
    $display->panels['center'][2] = 'new-4e4ac5a9-2108-4513-a1d5-a99d56cdecd5';
    $pane = new stdClass();
    $pane->pid = 'new-505aacdc-26cc-4749-b8e5-d582c9eba01c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_theme_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => 'content',
        'image_style' => 'flexslider_full',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '505aacdc-26cc-4749-b8e5-d582c9eba01c';
    $display->content['new-505aacdc-26cc-4749-b8e5-d582c9eba01c'] = $pane;
    $display->panels['center'][3] = 'new-505aacdc-26cc-4749-b8e5-d582c9eba01c';
    $pane = new stdClass();
    $pane->pid = 'new-993018e5-8f87-45e0-b3cf-17ed66e208f8';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '993018e5-8f87-45e0-b3cf-17ed66e208f8';
    $display->content['new-993018e5-8f87-45e0-b3cf-17ed66e208f8'] = $pane;
    $display->panels['center'][4] = 'new-993018e5-8f87-45e0-b3cf-17ed66e208f8';
    $pane = new stdClass();
    $pane->pid = 'new-d13aa132-676c-46d6-912f-0ed360160c37';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'search_index',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd13aa132-676c-46d6-912f-0ed360160c37';
    $display->content['new-d13aa132-676c-46d6-912f-0ed360160c37'] = $pane;
    $display->panels['center'][5] = 'new-d13aa132-676c-46d6-912f-0ed360160c37';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d13aa132-676c-46d6-912f-0ed360160c37';
  $panelizer->display = $display;
  $export['node:themes:default:search_index'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:themes:default:search_result';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'themes';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'search_result';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_moscone';
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
  $display->title = '%node:title';
  $display->uuid = '52b9deea-45fc-4513-a777-4726ef0944d1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-72e46f4c-99b8-4fe7-a20d-60253a70ea7c';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h2',
        'title_link' => 'content',
        'title_class' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => ' %title',
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
    $pane->uuid = '72e46f4c-99b8-4fe7-a20d-60253a70ea7c';
    $display->content['new-72e46f4c-99b8-4fe7-a20d-60253a70ea7c'] = $pane;
    $display->panels['contentmain'][0] = 'new-72e46f4c-99b8-4fe7-a20d-60253a70ea7c';
    $pane = new stdClass();
    $pane->pid = 'new-5a73026d-3985-4538-ac29-a90be6a77898';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '350',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '5a73026d-3985-4538-ac29-a90be6a77898';
    $display->content['new-5a73026d-3985-4538-ac29-a90be6a77898'] = $pane;
    $display->panels['contentmain'][1] = 'new-5a73026d-3985-4538-ac29-a90be6a77898';
    $pane = new stdClass();
    $pane->pid = 'new-a9c78566-fbc6-465d-9fdd-de330d27f2e9';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:tree_core_read_more_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a9c78566-fbc6-465d-9fdd-de330d27f2e9';
    $display->content['new-a9c78566-fbc6-465d-9fdd-de330d27f2e9'] = $pane;
    $display->panels['contentmain'][2] = 'new-a9c78566-fbc6-465d-9fdd-de330d27f2e9';
    $pane = new stdClass();
    $pane->pid = 'new-7ec72b23-0b74-42d2-93d0-6489128795a1';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_theme_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'medium',
        'image_link' => 'content',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '7ec72b23-0b74-42d2-93d0-6489128795a1';
    $display->content['new-7ec72b23-0b74-42d2-93d0-6489128795a1'] = $pane;
    $display->panels['sidebar'][0] = 'new-7ec72b23-0b74-42d2-93d0-6489128795a1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:themes:default:search_result'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:themes:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'themes';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '502ee540-483e-45e4-8a9c-6f0d583a426a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-96fa49df-6c4d-4fe5-9fc5-3ed7694f9359';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '96fa49df-6c4d-4fe5-9fc5-3ed7694f9359';
    $display->content['new-96fa49df-6c4d-4fe5-9fc5-3ed7694f9359'] = $pane;
    $display->panels['center'][0] = 'new-96fa49df-6c4d-4fe5-9fc5-3ed7694f9359';
    $pane = new stdClass();
    $pane->pid = 'new-b1449d2e-47ad-45d4-82be-c78b2dfbc484';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_type_of_theme';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b1449d2e-47ad-45d4-82be-c78b2dfbc484';
    $display->content['new-b1449d2e-47ad-45d4-82be-c78b2dfbc484'] = $pane;
    $display->panels['center'][1] = 'new-b1449d2e-47ad-45d4-82be-c78b2dfbc484';
    $pane = new stdClass();
    $pane->pid = 'new-7f2f2fbe-b0d2-46a6-be61-1e0f1d0ef916';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_theme_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7f2f2fbe-b0d2-46a6-be61-1e0f1d0ef916';
    $display->content['new-7f2f2fbe-b0d2-46a6-be61-1e0f1d0ef916'] = $pane;
    $display->panels['center'][2] = 'new-7f2f2fbe-b0d2-46a6-be61-1e0f1d0ef916';
    $pane = new stdClass();
    $pane->pid = 'new-1f48512a-776e-4935-94a6-abcc3167d56f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f48512a-776e-4935-94a6-abcc3167d56f';
    $display->content['new-1f48512a-776e-4935-94a6-abcc3167d56f'] = $pane;
    $display->panels['center'][3] = 'new-1f48512a-776e-4935-94a6-abcc3167d56f';
    $pane = new stdClass();
    $pane->pid = 'new-8da37ad2-d1a1-443f-8278-c66f338ae7a7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => 600,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8da37ad2-d1a1-443f-8278-c66f338ae7a7';
    $display->content['new-8da37ad2-d1a1-443f-8278-c66f338ae7a7'] = $pane;
    $display->panels['center'][4] = 'new-8da37ad2-d1a1-443f-8278-c66f338ae7a7';
    $pane = new stdClass();
    $pane->pid = 'new-4847c9bc-f058-40d8-92ed-8de437dcb6ed';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'teaser',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4847c9bc-f058-40d8-92ed-8de437dcb6ed';
    $display->content['new-4847c9bc-f058-40d8-92ed-8de437dcb6ed'] = $pane;
    $display->panels['center'][5] = 'new-4847c9bc-f058-40d8-92ed-8de437dcb6ed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4847c9bc-f058-40d8-92ed-8de437dcb6ed';
  $panelizer->display = $display;
  $export['node:themes:default:teaser'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:themes:tree_themes';
  $panelizer->title = 'Tree_Themes';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'themes';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
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
      'column1' => NULL,
      'column2' => NULL,
      'middle' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '6a898097-f2b5-427b-9374-d87968872f12';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ff2c2837-724d-40ba-bbd1-3afd883ef55a';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ff2c2837-724d-40ba-bbd1-3afd883ef55a';
    $display->content['new-ff2c2837-724d-40ba-bbd1-3afd883ef55a'] = $pane;
    $display->panels['contentmain'][0] = 'new-ff2c2837-724d-40ba-bbd1-3afd883ef55a';
    $pane = new stdClass();
    $pane->pid = 'new-a532d49b-303f-49a7-8c8e-f17c407a957d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:tree_core_share_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'context' => 'panelizer',
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
    $pane->uuid = 'a532d49b-303f-49a7-8c8e-f17c407a957d';
    $display->content['new-a532d49b-303f-49a7-8c8e-f17c407a957d'] = $pane;
    $display->panels['contentmain'][1] = 'new-a532d49b-303f-49a7-8c8e-f17c407a957d';
    $pane = new stdClass();
    $pane->pid = 'new-4cf5b996-d9ac-4a5d-86cd-2959348b8bf5';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'education-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:themes:field_type_of_theme',
          'settings' => array(
            'field_type_of_theme' => array(
              'und' => array(
                0 => array(
                  'target_id' => '1',
                ),
              ),
            ),
            'field_type_of_theme_target_id' => array(
              0 => '1',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4cf5b996-d9ac-4a5d-86cd-2959348b8bf5';
    $display->content['new-4cf5b996-d9ac-4a5d-86cd-2959348b8bf5'] = $pane;
    $display->panels['footer'][0] = 'new-4cf5b996-d9ac-4a5d-86cd-2959348b8bf5';
    $pane = new stdClass();
    $pane->pid = 'new-babef426-661f-490c-b430-96a553acc736';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'research-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:themes:field_type_of_theme',
          'settings' => array(
            'field_type_of_theme' => array(
              'und' => array(
                0 => array(
                  'target_id' => '3',
                ),
              ),
            ),
            'field_type_of_theme_target_id' => array(
              0 => '3',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'babef426-661f-490c-b430-96a553acc736';
    $display->content['new-babef426-661f-490c-b430-96a553acc736'] = $pane;
    $display->panels['footer'][1] = 'new-babef426-661f-490c-b430-96a553acc736';
    $pane = new stdClass();
    $pane->pid = 'new-59269e62-3c8b-4d8d-96e1-2ae95705c915';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'treatment-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:themes:field_type_of_theme',
          'settings' => array(
            'field_type_of_theme' => array(
              'und' => array(
                0 => array(
                  'target_id' => '2',
                ),
              ),
            ),
            'field_type_of_theme_target_id' => array(
              0 => '2',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '59269e62-3c8b-4d8d-96e1-2ae95705c915';
    $display->content['new-59269e62-3c8b-4d8d-96e1-2ae95705c915'] = $pane;
    $display->panels['footer'][2] = 'new-59269e62-3c8b-4d8d-96e1-2ae95705c915';
    $pane = new stdClass();
    $pane->pid = 'new-99787f82-d3db-410f-9955-7a03734b8ada';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h1',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = '99787f82-d3db-410f-9955-7a03734b8ada';
    $display->content['new-99787f82-d3db-410f-9955-7a03734b8ada'] = $pane;
    $display->panels['header'][0] = 'new-99787f82-d3db-410f-9955-7a03734b8ada';
    $pane = new stdClass();
    $pane->pid = 'new-c93d19cd-d045-441b-b48d-e01bfa2372b5';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_theme_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => 'content',
        'image_style' => 'hero',
      ),
      'context' => 'panelizer',
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
    $pane->uuid = 'c93d19cd-d045-441b-b48d-e01bfa2372b5';
    $display->content['new-c93d19cd-d045-441b-b48d-e01bfa2372b5'] = $pane;
    $display->panels['header'][1] = 'new-c93d19cd-d045-441b-b48d-e01bfa2372b5';
    $pane = new stdClass();
    $pane->pid = 'new-ec1bcc0b-206b-45ad-a3a0-d9ade558a30e';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec1bcc0b-206b-45ad-a3a0-d9ade558a30e';
    $display->content['new-ec1bcc0b-206b-45ad-a3a0-d9ade558a30e'] = $pane;
    $display->panels['sidebar'][0] = 'new-ec1bcc0b-206b-45ad-a3a0-d9ade558a30e';
    $pane = new stdClass();
    $pane->pid = 'new-fa75594f-2fe5-49e4-8fde-4b4a661d6ff1';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'education-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:themes:field_type_of_theme',
          'settings' => array(
            'field_type_of_theme' => array(
              'und' => array(
                0 => array(
                  'target_id' => '1',
                ),
              ),
            ),
            'field_type_of_theme_target_id' => array(
              0 => '1',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fa75594f-2fe5-49e4-8fde-4b4a661d6ff1';
    $display->content['new-fa75594f-2fe5-49e4-8fde-4b4a661d6ff1'] = $pane;
    $display->panels['sidebar'][1] = 'new-fa75594f-2fe5-49e4-8fde-4b4a661d6ff1';
    $pane = new stdClass();
    $pane->pid = 'new-59a0ff90-6750-4e38-b7bc-1842f3c619f0';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'research-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:themes:field_type_of_theme',
          'settings' => array(
            'field_type_of_theme' => array(
              'und' => array(
                0 => array(
                  'target_id' => '3',
                ),
              ),
            ),
            'field_type_of_theme_target_id' => array(
              0 => '3',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '59a0ff90-6750-4e38-b7bc-1842f3c619f0';
    $display->content['new-59a0ff90-6750-4e38-b7bc-1842f3c619f0'] = $pane;
    $display->panels['sidebar'][2] = 'new-59a0ff90-6750-4e38-b7bc-1842f3c619f0';
    $pane = new stdClass();
    $pane->pid = 'new-1bf69fe5-efc5-41a3-b5c8-516d05021b53';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'treatment-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:themes:field_type_of_theme',
          'settings' => array(
            'field_type_of_theme' => array(
              'und' => array(
                0 => array(
                  'target_id' => '2',
                ),
              ),
            ),
            'field_type_of_theme_target_id' => array(
              0 => '2',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1bf69fe5-efc5-41a3-b5c8-516d05021b53';
    $display->content['new-1bf69fe5-efc5-41a3-b5c8-516d05021b53'] = $pane;
    $display->panels['sidebar'][3] = 'new-1bf69fe5-efc5-41a3-b5c8-516d05021b53';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:themes:tree_themes'] = $panelizer;

  return $export;
}
