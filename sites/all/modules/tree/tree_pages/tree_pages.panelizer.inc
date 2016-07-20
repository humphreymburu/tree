<?php
/**
 * @file
 * tree_pages.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tree_pages_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:themes:default:default';
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
      'column1' => NULL,
      'column2' => NULL,
      'footer' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a626ceef-43e8-4cb1-8bea-a3629981d45b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e6e4e441-6ef0-4db7-bb30-f056b4e3d7c6';
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
    $pane->uuid = 'e6e4e441-6ef0-4db7-bb30-f056b4e3d7c6';
    $display->content['new-e6e4e441-6ef0-4db7-bb30-f056b4e3d7c6'] = $pane;
    $display->panels['contentmain'][0] = 'new-e6e4e441-6ef0-4db7-bb30-f056b4e3d7c6';
    $pane = new stdClass();
    $pane->pid = 'new-e2ff6d28-5e1b-4a89-92f3-684758b8a216';
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
    $pane->uuid = 'e2ff6d28-5e1b-4a89-92f3-684758b8a216';
    $display->content['new-e2ff6d28-5e1b-4a89-92f3-684758b8a216'] = $pane;
    $display->panels['contentmain'][1] = 'new-e2ff6d28-5e1b-4a89-92f3-684758b8a216';
    $pane = new stdClass();
    $pane->pid = 'new-e89ab06c-ce81-45ba-82c9-a54b7aa148b9';
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
        'image_style' => 'hero',
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
    $pane->uuid = 'e89ab06c-ce81-45ba-82c9-a54b7aa148b9';
    $display->content['new-e89ab06c-ce81-45ba-82c9-a54b7aa148b9'] = $pane;
    $display->panels['header'][0] = 'new-e89ab06c-ce81-45ba-82c9-a54b7aa148b9';
    $pane = new stdClass();
    $pane->pid = 'new-7c27e32d-2356-4059-b341-3e5fb24c9c29';
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
    $pane->uuid = '7c27e32d-2356-4059-b341-3e5fb24c9c29';
    $display->content['new-7c27e32d-2356-4059-b341-3e5fb24c9c29'] = $pane;
    $display->panels['sidebar'][0] = 'new-7c27e32d-2356-4059-b341-3e5fb24c9c29';
    $pane = new stdClass();
    $pane->pid = 'new-fca932aa-a701-4ceb-9fe9-8cd6724b3fa0';
    $pane->panel = 'sidebar';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fca932aa-a701-4ceb-9fe9-8cd6724b3fa0';
    $display->content['new-fca932aa-a701-4ceb-9fe9-8cd6724b3fa0'] = $pane;
    $display->panels['sidebar'][1] = 'new-fca932aa-a701-4ceb-9fe9-8cd6724b3fa0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-e6e4e441-6ef0-4db7-bb30-f056b4e3d7c6';
  $panelizer->display = $display;
  $export['node:themes:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_page';
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
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '132e0da5-7125-4267-bbc1-cbd03dc2dc9f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-acecf059-d878-40cf-a780-c0771fdaa4f1';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
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
    $pane->uuid = 'acecf059-d878-40cf-a780-c0771fdaa4f1';
    $display->content['new-acecf059-d878-40cf-a780-c0771fdaa4f1'] = $pane;
    $display->panels['top'][0] = 'new-acecf059-d878-40cf-a780-c0771fdaa4f1';
    $pane = new stdClass();
    $pane->pid = 'new-b95d845e-f723-4979-b98c-c6f646d2d3d6';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_information';
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
    $pane->uuid = 'b95d845e-f723-4979-b98c-c6f646d2d3d6';
    $display->content['new-b95d845e-f723-4979-b98c-c6f646d2d3d6'] = $pane;
    $display->panels['top'][1] = 'new-b95d845e-f723-4979-b98c-c6f646d2d3d6';
    $pane = new stdClass();
    $pane->pid = 'new-8379f4c1-89a9-4985-9ff6-ea4a11410175';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '8379f4c1-89a9-4985-9ff6-ea4a11410175';
    $display->content['new-8379f4c1-89a9-4985-9ff6-ea4a11410175'] = $pane;
    $display->panels['top'][2] = 'new-8379f4c1-89a9-4985-9ff6-ea4a11410175';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tree_page:default:default'] = $panelizer;

  return $export;
}
