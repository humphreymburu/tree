<?php
/**
 * @file
 * tree_events.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tree_events_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_event:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_event';
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
  $display->layout = 'radix_phelan';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0c9eea73-32d1-49dc-9986-e5ddd9d54256';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8a2a1373-e63b-43fc-a860-b45618dd2046';
    $pane->panel = 'column1';
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
    $pane->css = array(
      'css_id' => 'hero-title',
      'css_class' => 'hero-container',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8a2a1373-e63b-43fc-a860-b45618dd2046';
    $display->content['new-8a2a1373-e63b-43fc-a860-b45618dd2046'] = $pane;
    $display->panels['column1'][0] = 'new-8a2a1373-e63b-43fc-a860-b45618dd2046';
    $pane = new stdClass();
    $pane->pid = 'new-c8e095c7-bb4b-4a78-9ed3-50ea6f491ecb';
    $pane->panel = 'column1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'event',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c8e095c7-bb4b-4a78-9ed3-50ea6f491ecb';
    $display->content['new-c8e095c7-bb4b-4a78-9ed3-50ea6f491ecb'] = $pane;
    $display->panels['column1'][1] = 'new-c8e095c7-bb4b-4a78-9ed3-50ea6f491ecb';
    $pane = new stdClass();
    $pane->pid = 'new-991de0d7-8582-4df1-9b8e-9ae11eeaf99a';
    $pane->panel = 'column1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_category';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '991de0d7-8582-4df1-9b8e-9ae11eeaf99a';
    $display->content['new-991de0d7-8582-4df1-9b8e-9ae11eeaf99a'] = $pane;
    $display->panels['column1'][2] = 'new-991de0d7-8582-4df1-9b8e-9ae11eeaf99a';
    $pane = new stdClass();
    $pane->pid = 'new-0decae58-7ee2-4dc1-b7f1-43070fbd82f0';
    $pane->panel = 'column1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'event_details',
      'title' => '',
      'body' => '<ul class="date">
<li>
<p>
<i class="step fi-calendar size-18"></i> &nbsp;%node:field_event_date <br>
<i class="step fi-marker size-18"></i> &nbsp;%node:field_event_location 
</p>
</li>
</ul>',
      'format' => 'panopoly_html_text',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0decae58-7ee2-4dc1-b7f1-43070fbd82f0';
    $display->content['new-0decae58-7ee2-4dc1-b7f1-43070fbd82f0'] = $pane;
    $display->panels['column1'][3] = 'new-0decae58-7ee2-4dc1-b7f1-43070fbd82f0';
    $pane = new stdClass();
    $pane->pid = 'new-de7624ab-7bb7-4546-9a7c-9998eff8a901';
    $pane->panel = 'column2';
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
    $pane->uuid = 'de7624ab-7bb7-4546-9a7c-9998eff8a901';
    $display->content['new-de7624ab-7bb7-4546-9a7c-9998eff8a901'] = $pane;
    $display->panels['column2'][0] = 'new-de7624ab-7bb7-4546-9a7c-9998eff8a901';
    $pane = new stdClass();
    $pane->pid = 'new-77521f71-556a-4341-8024-faa91d4fe71f';
    $pane->panel = 'column2';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '77521f71-556a-4341-8024-faa91d4fe71f';
    $display->content['new-77521f71-556a-4341-8024-faa91d4fe71f'] = $pane;
    $display->panels['column2'][1] = 'new-77521f71-556a-4341-8024-faa91d4fe71f';
    $pane = new stdClass();
    $pane->pid = 'new-a0a09eb8-86b7-4ca7-9656-cf0c0a060ba8';
    $pane->panel = 'column2';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a0a09eb8-86b7-4ca7-9656-cf0c0a060ba8';
    $display->content['new-a0a09eb8-86b7-4ca7-9656-cf0c0a060ba8'] = $pane;
    $display->panels['column2'][2] = 'new-a0a09eb8-86b7-4ca7-9656-cf0c0a060ba8';
    $pane = new stdClass();
    $pane->pid = 'new-95a6e9c2-1e81-41d4-adcc-fea60e653ab1';
    $pane->panel = 'column2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_content';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '95a6e9c2-1e81-41d4-adcc-fea60e653ab1';
    $display->content['new-95a6e9c2-1e81-41d4-adcc-fea60e653ab1'] = $pane;
    $display->panels['column2'][3] = 'new-95a6e9c2-1e81-41d4-adcc-fea60e653ab1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a0a09eb8-86b7-4ca7-9656-cf0c0a060ba8';
  $panelizer->display = $display;
  $export['node:tree_event:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_event:default:search_result';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_event';
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
  $display->uuid = '2bb8c865-4be1-4738-a881-d0632abba398';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4c105cb6-f825-4d30-9b05-8cd0d795c6c2';
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
    $pane->uuid = '4c105cb6-f825-4d30-9b05-8cd0d795c6c2';
    $display->content['new-4c105cb6-f825-4d30-9b05-8cd0d795c6c2'] = $pane;
    $display->panels['contentmain'][0] = 'new-4c105cb6-f825-4d30-9b05-8cd0d795c6c2';
    $pane = new stdClass();
    $pane->pid = 'new-9b2b34b3-9f3e-48ed-b07c-048093ec8447';
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
        'masonry' => FALSE,
        'masonry_column_width' => '',
        'masonry_column_width_units' => 'px',
        'masonry_gutter_width' => '0',
        'masonry_resizable' => 1,
        'masonry_animated' => 0,
        'masonry_animation_duration' => '500',
        'masonry_fit_width' => 0,
        'masonry_rtl' => 0,
        'masonry_images_first' => 1,
        'masonry_stamp_selector' => '',
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
    $pane->uuid = '9b2b34b3-9f3e-48ed-b07c-048093ec8447';
    $display->content['new-9b2b34b3-9f3e-48ed-b07c-048093ec8447'] = $pane;
    $display->panels['contentmain'][1] = 'new-9b2b34b3-9f3e-48ed-b07c-048093ec8447';
    $pane = new stdClass();
    $pane->pid = 'new-ef706045-8ab1-4c00-b9f4-e0c9eb44afdf';
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
    $pane->uuid = 'ef706045-8ab1-4c00-b9f4-e0c9eb44afdf';
    $display->content['new-ef706045-8ab1-4c00-b9f4-e0c9eb44afdf'] = $pane;
    $display->panels['contentmain'][2] = 'new-ef706045-8ab1-4c00-b9f4-e0c9eb44afdf';
    $pane = new stdClass();
    $pane->pid = 'new-1cbad525-be63-4673-b2c1-2cb98f9221a8';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_photo';
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
    $pane->uuid = '1cbad525-be63-4673-b2c1-2cb98f9221a8';
    $display->content['new-1cbad525-be63-4673-b2c1-2cb98f9221a8'] = $pane;
    $display->panels['sidebar'][0] = 'new-1cbad525-be63-4673-b2c1-2cb98f9221a8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tree_event:default:search_result'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_event:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_event';
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
  $display->layout = 'radix_moscone';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '51bb5efd-c973-429a-98d6-8d0bf7f4310f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bcef800f-c61e-44a8-969c-69fdc8ba59e0';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'events',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'value',
        'show_repeat_rule' => 'hide',
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
    $pane->uuid = 'bcef800f-c61e-44a8-969c-69fdc8ba59e0';
    $display->content['new-bcef800f-c61e-44a8-969c-69fdc8ba59e0'] = $pane;
    $display->panels['contentmain'][0] = 'new-bcef800f-c61e-44a8-969c-69fdc8ba59e0';
    $pane = new stdClass();
    $pane->pid = 'new-646b685b-bdf8-43cb-ad63-edf6352f86dc';
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
        'trim_length' => '400',
        'masonry' => FALSE,
        'masonry_column_width' => '',
        'masonry_column_width_units' => 'px',
        'masonry_gutter_width' => '0',
        'masonry_resizable' => 1,
        'masonry_animated' => 0,
        'masonry_animation_duration' => '500',
        'masonry_fit_width' => 0,
        'masonry_rtl' => 0,
        'masonry_images_first' => 1,
        'masonry_stamp_selector' => '',
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
    $pane->uuid = '646b685b-bdf8-43cb-ad63-edf6352f86dc';
    $display->content['new-646b685b-bdf8-43cb-ad63-edf6352f86dc'] = $pane;
    $display->panels['contentmain'][1] = 'new-646b685b-bdf8-43cb-ad63-edf6352f86dc';
    $pane = new stdClass();
    $pane->pid = 'new-97d6908c-0c3b-49b6-b491-ff36a51c2bf9';
    $pane->panel = 'contentmain';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '97d6908c-0c3b-49b6-b491-ff36a51c2bf9';
    $display->content['new-97d6908c-0c3b-49b6-b491-ff36a51c2bf9'] = $pane;
    $display->panels['contentmain'][2] = 'new-97d6908c-0c3b-49b6-b491-ff36a51c2bf9';
    $pane = new stdClass();
    $pane->pid = 'new-be3938d8-4c24-4798-a696-21bcba7bbdcf';
    $pane->panel = 'header';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'be3938d8-4c24-4798-a696-21bcba7bbdcf';
    $display->content['new-be3938d8-4c24-4798-a696-21bcba7bbdcf'] = $pane;
    $display->panels['header'][0] = 'new-be3938d8-4c24-4798-a696-21bcba7bbdcf';
    $pane = new stdClass();
    $pane->pid = 'new-75b8f646-aaf7-4f83-93f1-177d007c6470';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_event_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
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
    $pane->uuid = '75b8f646-aaf7-4f83-93f1-177d007c6470';
    $display->content['new-75b8f646-aaf7-4f83-93f1-177d007c6470'] = $pane;
    $display->panels['sidebar'][0] = 'new-75b8f646-aaf7-4f83-93f1-177d007c6470';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-97d6908c-0c3b-49b6-b491-ff36a51c2bf9';
  $panelizer->display = $display;
  $export['node:tree_event:default:teaser'] = $panelizer;

  return $export;
}
