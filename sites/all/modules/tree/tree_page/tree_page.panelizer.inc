<?php
/**
 * @file
 * tree_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tree_page_panelizer_defaults() {
  $export = array();

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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '64cfe93a-dd4a-44bb-b53c-3d9d56b7f00d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2a283562-a0ed-4ec3-8f2e-b4749dc17129';
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
    $pane->uuid = '2a283562-a0ed-4ec3-8f2e-b4749dc17129';
    $display->content['new-2a283562-a0ed-4ec3-8f2e-b4749dc17129'] = $pane;
    $display->panels['center'][0] = 'new-2a283562-a0ed-4ec3-8f2e-b4749dc17129';
    $pane = new stdClass();
    $pane->pid = 'new-1b548f88-bf82-4166-96f5-60d333c36335';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1b548f88-bf82-4166-96f5-60d333c36335';
    $display->content['new-1b548f88-bf82-4166-96f5-60d333c36335'] = $pane;
    $display->panels['center'][1] = 'new-1b548f88-bf82-4166-96f5-60d333c36335';
    $pane = new stdClass();
    $pane->pid = 'new-fa0aac7c-daa5-457c-b3e4-704b0be93d0e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_link';
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
    $pane->uuid = 'fa0aac7c-daa5-457c-b3e4-704b0be93d0e';
    $display->content['new-fa0aac7c-daa5-457c-b3e4-704b0be93d0e'] = $pane;
    $display->panels['center'][2] = 'new-fa0aac7c-daa5-457c-b3e4-704b0be93d0e';
    $pane = new stdClass();
    $pane->pid = 'new-71116361-6e73-46c9-b6ce-42688596ac94';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_information';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->uuid = '71116361-6e73-46c9-b6ce-42688596ac94';
    $display->content['new-71116361-6e73-46c9-b6ce-42688596ac94'] = $pane;
    $display->panels['center'][3] = 'new-71116361-6e73-46c9-b6ce-42688596ac94';
    $pane = new stdClass();
    $pane->pid = 'new-7b91591e-0d68-4264-999c-f031a7a64e93';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_home_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->uuid = '7b91591e-0d68-4264-999c-f031a7a64e93';
    $display->content['new-7b91591e-0d68-4264-999c-f031a7a64e93'] = $pane;
    $display->panels['center'][4] = 'new-7b91591e-0d68-4264-999c-f031a7a64e93';
    $pane = new stdClass();
    $pane->pid = 'new-4001f8c9-6579-48cd-b41a-0bdb0dd63cdf';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_type_of_space';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->uuid = '4001f8c9-6579-48cd-b41a-0bdb0dd63cdf';
    $display->content['new-4001f8c9-6579-48cd-b41a-0bdb0dd63cdf'] = $pane;
    $display->panels['center'][5] = 'new-4001f8c9-6579-48cd-b41a-0bdb0dd63cdf';
    $pane = new stdClass();
    $pane->pid = 'new-beceda35-4640-45d7-81d8-dd68767fac27';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_content_fields';
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
    $pane->uuid = 'beceda35-4640-45d7-81d8-dd68767fac27';
    $display->content['new-beceda35-4640-45d7-81d8-dd68767fac27'] = $pane;
    $display->panels['center'][6] = 'new-beceda35-4640-45d7-81d8-dd68767fac27';
    $pane = new stdClass();
    $pane->pid = 'new-fb66fb49-cc17-4195-a61c-ee555837b5b4';
    $pane->panel = 'center';
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
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fb66fb49-cc17-4195-a61c-ee555837b5b4';
    $display->content['new-fb66fb49-cc17-4195-a61c-ee555837b5b4'] = $pane;
    $display->panels['center'][7] = 'new-fb66fb49-cc17-4195-a61c-ee555837b5b4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fb66fb49-cc17-4195-a61c-ee555837b5b4';
  $panelizer->display = $display;
  $export['node:tree_page:default:default'] = $panelizer;

  return $export;
}
