<?php
/**
 * @file
 * tree_researchers.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tree_researchers_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_researchers:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_researchers';
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
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3bc89423-af99-422f-b31f-6b579411546c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7c1e2b94-d81a-46e8-8dfd-f3546120a968';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_researcher_pic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'researcher',
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
    $pane->uuid = '7c1e2b94-d81a-46e8-8dfd-f3546120a968';
    $display->content['new-7c1e2b94-d81a-46e8-8dfd-f3546120a968'] = $pane;
    $display->panels['contentmain'][0] = 'new-7c1e2b94-d81a-46e8-8dfd-f3546120a968';
    $pane = new stdClass();
    $pane->pid = 'new-58b1e8fb-4b53-45fd-aabc-bd8deb380fa1';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_researcher_bio';
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
    $pane->uuid = '58b1e8fb-4b53-45fd-aabc-bd8deb380fa1';
    $display->content['new-58b1e8fb-4b53-45fd-aabc-bd8deb380fa1'] = $pane;
    $display->panels['contentmain'][1] = 'new-58b1e8fb-4b53-45fd-aabc-bd8deb380fa1';
    $pane = new stdClass();
    $pane->pid = 'new-4ff981e7-dda6-475b-a1f3-8dbfb4ffa143';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:tree_core_share_button';
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
    $pane->uuid = '4ff981e7-dda6-475b-a1f3-8dbfb4ffa143';
    $display->content['new-4ff981e7-dda6-475b-a1f3-8dbfb4ffa143'] = $pane;
    $display->panels['contentmain'][2] = 'new-4ff981e7-dda6-475b-a1f3-8dbfb4ffa143';
    $pane = new stdClass();
    $pane->pid = 'new-b73b4f32-8986-4e90-ab5d-56df00973ab1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b73b4f32-8986-4e90-ab5d-56df00973ab1';
    $display->content['new-b73b4f32-8986-4e90-ab5d-56df00973ab1'] = $pane;
    $display->panels['sidebar'][0] = 'new-b73b4f32-8986-4e90-ab5d-56df00973ab1';
    $pane = new stdClass();
    $pane->pid = 'new-a913aaf1-3637-4e94-8780-8d99b51be7a8';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'research-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a913aaf1-3637-4e94-8780-8d99b51be7a8';
    $display->content['new-a913aaf1-3637-4e94-8780-8d99b51be7a8'] = $pane;
    $display->panels['sidebar'][1] = 'new-a913aaf1-3637-4e94-8780-8d99b51be7a8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-7c1e2b94-d81a-46e8-8dfd-f3546120a968';
  $panelizer->display = $display;
  $export['node:tree_researchers:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_researchers:default:search_result';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_researchers';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '916b28fb-be70-494d-8194-b64deb8fe568';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-06935ccc-2c42-4fe5-a458-7277de59042a';
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
    $pane->uuid = '06935ccc-2c42-4fe5-a458-7277de59042a';
    $display->content['new-06935ccc-2c42-4fe5-a458-7277de59042a'] = $pane;
    $display->panels['center'][0] = 'new-06935ccc-2c42-4fe5-a458-7277de59042a';
    $pane = new stdClass();
    $pane->pid = 'new-4feff9e2-6df1-4aef-88ac-a199848dc180';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_researcher_bio';
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
    $pane->uuid = '4feff9e2-6df1-4aef-88ac-a199848dc180';
    $display->content['new-4feff9e2-6df1-4aef-88ac-a199848dc180'] = $pane;
    $display->panels['center'][1] = 'new-4feff9e2-6df1-4aef-88ac-a199848dc180';
    $pane = new stdClass();
    $pane->pid = 'new-599c0750-3551-478d-8617-2e0753ff1215';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_researcher_pic';
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
    $pane->uuid = '599c0750-3551-478d-8617-2e0753ff1215';
    $display->content['new-599c0750-3551-478d-8617-2e0753ff1215'] = $pane;
    $display->panels['center'][2] = 'new-599c0750-3551-478d-8617-2e0753ff1215';
    $pane = new stdClass();
    $pane->pid = 'new-caef7d20-b477-4c2d-96f8-7af45ccea8d0';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'search_result',
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
    $pane->uuid = 'caef7d20-b477-4c2d-96f8-7af45ccea8d0';
    $display->content['new-caef7d20-b477-4c2d-96f8-7af45ccea8d0'] = $pane;
    $display->panels['center'][3] = 'new-caef7d20-b477-4c2d-96f8-7af45ccea8d0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-caef7d20-b477-4c2d-96f8-7af45ccea8d0';
  $panelizer->display = $display;
  $export['node:tree_researchers:default:search_result'] = $panelizer;

  return $export;
}
