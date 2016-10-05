<?php
/**
 * @file
 * tree_about.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tree_about_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:about_tree:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'about_tree';
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
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '03a109d7-7e4d-4349-a1c8-d6258f0e46c8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c7f4ca62-eaa6-4ea1-91f8-ab1b8714c13a';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_about_informationa';
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
    $pane->uuid = 'c7f4ca62-eaa6-4ea1-91f8-ab1b8714c13a';
    $display->content['new-c7f4ca62-eaa6-4ea1-91f8-ab1b8714c13a'] = $pane;
    $display->panels['contentmain'][0] = 'new-c7f4ca62-eaa6-4ea1-91f8-ab1b8714c13a';
    $pane = new stdClass();
    $pane->pid = 'new-120b62e4-d71d-4a8c-9a19-988118c8bf12';
    $pane->panel = 'contentmain';
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
    $pane->uuid = '120b62e4-d71d-4a8c-9a19-988118c8bf12';
    $display->content['new-120b62e4-d71d-4a8c-9a19-988118c8bf12'] = $pane;
    $display->panels['contentmain'][1] = 'new-120b62e4-d71d-4a8c-9a19-988118c8bf12';
    $pane = new stdClass();
    $pane->pid = 'new-d719a30e-5d26-46fe-9658-8bdcf5a94157';
    $pane->panel = 'footer';
    $pane->type = 'views';
    $pane->subtype = 'about';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:about_tree:field_status',
          'settings' => array(
            'field_status' => array(
              'und' => array(
                0 => array(
                  'value' => '1',
                ),
              ),
            ),
            'field_status_value' => array(
              0 => '1',
            ),
          ),
          'context' => 'panelizer',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->uuid = 'd719a30e-5d26-46fe-9658-8bdcf5a94157';
    $display->content['new-d719a30e-5d26-46fe-9658-8bdcf5a94157'] = $pane;
    $display->panels['footer'][0] = 'new-d719a30e-5d26-46fe-9658-8bdcf5a94157';
    $pane = new stdClass();
    $pane->pid = 'new-0a9e691e-d68b-407e-bfac-861dfefb6284';
    $pane->panel = 'header';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_about_photo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'about',
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
    $pane->uuid = '0a9e691e-d68b-407e-bfac-861dfefb6284';
    $display->content['new-0a9e691e-d68b-407e-bfac-861dfefb6284'] = $pane;
    $display->panels['header'][0] = 'new-0a9e691e-d68b-407e-bfac-861dfefb6284';
    $pane = new stdClass();
    $pane->pid = 'new-faed7347-df9e-4503-8652-293d66eae5da';
    $pane->panel = 'sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'About TREE',
      'body' => '<div class="views-group">
<div class="views-row views-row-1 views-row-odd views-row-first">
<div class="views-field views-field-nothing">        <span class="field-content"><a href="/tree/node/91">Mission and Values</a> </span>  </div>  
<div class="views-field views-field-field-other-info">        <div class="field-content"></div>  </div>  
<div class="views-field views-field-field-researcher-bio">        <div class="field-content"></div>  </div>	  </div>
</div>


<div class="views-row views-row-2 views-row-even">
<div class="views-field views-field-nothing">        <span class="field-content"> </span>  </div>  
 <div class="views-field views-field-field-other-info">        <div class="field-content"><a href="/tree/staff">Meet the Team</a></div>  </div>  
 <div class="views-field views-field-field-researcher-bio">        <div class="field-content"></div>  </div>	  </div>

<div class="views-row views-row-3 views-row-odd">	      
<div class="views-field views-field-nothing">        <span class="field-content"> </span>  </div>  
<div class="views-field views-field-field-other-info">        <div class="field-content"></div>  </div>  
<div class="views-field views-field-field-researcher-bio">        <div class="field-content"><a href="/tree/researchers">Meet Our Researchers</a></div>  </div>	  


<div class="views-row views-row-4 views-row-even views-row-last">
	      <div class="views-field views-field-nothing">        <span class="field-content"><a href="/tree/node/90">Get Involved</a> </span>  </div>  
  <div class="views-field views-field-field-other-info">        <div class="field-content"></div>  </div>  
  <div class="views-field views-field-field-researcher-bio">        <div class="field-content"></div>  </div>	  </div>
  
		</div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'faed7347-df9e-4503-8652-293d66eae5da';
    $display->content['new-faed7347-df9e-4503-8652-293d66eae5da'] = $pane;
    $display->panels['sidebar'][0] = 'new-faed7347-df9e-4503-8652-293d66eae5da';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:about_tree:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:about_tree:default:search_result';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'about_tree';
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
      'center' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0dc96736-a4a8-4907-9da1-0778c211529c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dff8c05b-237b-4cf3-bfad-ca584df2e091';
    $pane->panel = 'contentmain';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
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
    $pane->uuid = 'dff8c05b-237b-4cf3-bfad-ca584df2e091';
    $display->content['new-dff8c05b-237b-4cf3-bfad-ca584df2e091'] = $pane;
    $display->panels['contentmain'][0] = 'new-dff8c05b-237b-4cf3-bfad-ca584df2e091';
    $pane = new stdClass();
    $pane->pid = 'new-d692db4d-9c78-4c14-bf8f-7d1f5c5166e4';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_about_informationa';
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
    $pane->uuid = 'd692db4d-9c78-4c14-bf8f-7d1f5c5166e4';
    $display->content['new-d692db4d-9c78-4c14-bf8f-7d1f5c5166e4'] = $pane;
    $display->panels['contentmain'][1] = 'new-d692db4d-9c78-4c14-bf8f-7d1f5c5166e4';
    $pane = new stdClass();
    $pane->pid = 'new-74d80fa4-b2c4-488e-b61b-b1fbe2195c49';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_about_photo';
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
    $pane->uuid = '74d80fa4-b2c4-488e-b61b-b1fbe2195c49';
    $display->content['new-74d80fa4-b2c4-488e-b61b-b1fbe2195c49'] = $pane;
    $display->panels['sidebar'][0] = 'new-74d80fa4-b2c4-488e-b61b-b1fbe2195c49';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-dff8c05b-237b-4cf3-bfad-ca584df2e091';
  $panelizer->display = $display;
  $export['node:about_tree:default:search_result'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:about_tree:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'about_tree';
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
  $display->uuid = '21868919-d1a3-4e9d-aff9-55e6af984358';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-941e48d7-a055-4689-9ff5-39a695c4e6a7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_about_informationa';
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
    $pane->uuid = '941e48d7-a055-4689-9ff5-39a695c4e6a7';
    $display->content['new-941e48d7-a055-4689-9ff5-39a695c4e6a7'] = $pane;
    $display->panels['center'][0] = 'new-941e48d7-a055-4689-9ff5-39a695c4e6a7';
    $pane = new stdClass();
    $pane->pid = 'new-0bfa9c51-d2d9-4ef5-a945-137d21c1c402';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_about_photo';
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
    $pane->uuid = '0bfa9c51-d2d9-4ef5-a945-137d21c1c402';
    $display->content['new-0bfa9c51-d2d9-4ef5-a945-137d21c1c402'] = $pane;
    $display->panels['center'][1] = 'new-0bfa9c51-d2d9-4ef5-a945-137d21c1c402';
    $pane = new stdClass();
    $pane->pid = 'new-245f05c6-eccc-4dce-aab3-81566abc57df';
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
    $pane->uuid = '245f05c6-eccc-4dce-aab3-81566abc57df';
    $display->content['new-245f05c6-eccc-4dce-aab3-81566abc57df'] = $pane;
    $display->panels['center'][2] = 'new-245f05c6-eccc-4dce-aab3-81566abc57df';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-245f05c6-eccc-4dce-aab3-81566abc57df';
  $panelizer->display = $display;
  $export['node:about_tree:default:teaser'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
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
  $display->uuid = '282555f0-79ff-4627-b533-ca7e82eaffef';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8da2939f-923c-459e-a2d1-9fabad79f456';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8da2939f-923c-459e-a2d1-9fabad79f456';
    $display->content['new-8da2939f-923c-459e-a2d1-9fabad79f456'] = $pane;
    $display->panels['center'][0] = 'new-8da2939f-923c-459e-a2d1-9fabad79f456';
    $pane = new stdClass();
    $pane->pid = 'new-87b7ccf8-86d3-4517-a7a7-13d9878fd027';
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
    $pane->uuid = '87b7ccf8-86d3-4517-a7a7-13d9878fd027';
    $display->content['new-87b7ccf8-86d3-4517-a7a7-13d9878fd027'] = $pane;
    $display->panels['center'][1] = 'new-87b7ccf8-86d3-4517-a7a7-13d9878fd027';
    $pane = new stdClass();
    $pane->pid = 'new-71339a4d-784c-42cc-8cbc-7a9f7826dbfd';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->uuid = '71339a4d-784c-42cc-8cbc-7a9f7826dbfd';
    $display->content['new-71339a4d-784c-42cc-8cbc-7a9f7826dbfd'] = $pane;
    $display->panels['center'][2] = 'new-71339a4d-784c-42cc-8cbc-7a9f7826dbfd';
    $pane = new stdClass();
    $pane->pid = 'new-385ed767-8841-42eb-9516-536e8f5f4261';
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
    $pane->uuid = '385ed767-8841-42eb-9516-536e8f5f4261';
    $display->content['new-385ed767-8841-42eb-9516-536e8f5f4261'] = $pane;
    $display->panels['center'][3] = 'new-385ed767-8841-42eb-9516-536e8f5f4261';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-385ed767-8841-42eb-9516-536e8f5f4261';
  $panelizer->display = $display;
  $export['node:article:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default:search_result';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
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
  $display->uuid = 'cfad204e-d8e6-4011-871e-7bfd0a11267e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-165fe707-3288-4cc0-8c0b-d50d6607b313';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
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
    $pane->uuid = '165fe707-3288-4cc0-8c0b-d50d6607b313';
    $display->content['new-165fe707-3288-4cc0-8c0b-d50d6607b313'] = $pane;
    $display->panels['center'][0] = 'new-165fe707-3288-4cc0-8c0b-d50d6607b313';
    $pane = new stdClass();
    $pane->pid = 'new-dce6b080-53e4-4dcc-8739-0cbdda6e0cee';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
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
    $pane->uuid = 'dce6b080-53e4-4dcc-8739-0cbdda6e0cee';
    $display->content['new-dce6b080-53e4-4dcc-8739-0cbdda6e0cee'] = $pane;
    $display->panels['center'][1] = 'new-dce6b080-53e4-4dcc-8739-0cbdda6e0cee';
    $pane = new stdClass();
    $pane->pid = 'new-9bdfe7c3-3923-4503-901b-3fa800f150a0';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
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
    $pane->uuid = '9bdfe7c3-3923-4503-901b-3fa800f150a0';
    $display->content['new-9bdfe7c3-3923-4503-901b-3fa800f150a0'] = $pane;
    $display->panels['center'][2] = 'new-9bdfe7c3-3923-4503-901b-3fa800f150a0';
    $pane = new stdClass();
    $pane->pid = 'new-0968c103-783a-4762-a176-a512ab0e5f8d';
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
    $pane->uuid = '0968c103-783a-4762-a176-a512ab0e5f8d';
    $display->content['new-0968c103-783a-4762-a176-a512ab0e5f8d'] = $pane;
    $display->panels['center'][3] = 'new-0968c103-783a-4762-a176-a512ab0e5f8d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0968c103-783a-4762-a176-a512ab0e5f8d';
  $panelizer->display = $display;
  $export['node:article:default:search_result'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
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
  $display->uuid = '3d32b222-1948-4de4-8333-2e280b1f6ce3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-65f423fd-43cb-43a1-8a00-fdf844513ec7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
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
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '65f423fd-43cb-43a1-8a00-fdf844513ec7';
    $display->content['new-65f423fd-43cb-43a1-8a00-fdf844513ec7'] = $pane;
    $display->panels['center'][0] = 'new-65f423fd-43cb-43a1-8a00-fdf844513ec7';
    $pane = new stdClass();
    $pane->pid = 'new-bfa71fff-0858-4ac0-ba66-7de6afdbde7b';
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
    $pane->uuid = 'bfa71fff-0858-4ac0-ba66-7de6afdbde7b';
    $display->content['new-bfa71fff-0858-4ac0-ba66-7de6afdbde7b'] = $pane;
    $display->panels['center'][1] = 'new-bfa71fff-0858-4ac0-ba66-7de6afdbde7b';
    $pane = new stdClass();
    $pane->pid = 'new-01716996-7852-40f1-97aa-ee0b82c9180c';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'taxonomy_term_reference_link',
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
    $pane->uuid = '01716996-7852-40f1-97aa-ee0b82c9180c';
    $display->content['new-01716996-7852-40f1-97aa-ee0b82c9180c'] = $pane;
    $display->panels['center'][2] = 'new-01716996-7852-40f1-97aa-ee0b82c9180c';
    $pane = new stdClass();
    $pane->pid = 'new-19ff894c-ac4c-4dd7-a054-d59a1b0969af';
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
    $pane->uuid = '19ff894c-ac4c-4dd7-a054-d59a1b0969af';
    $display->content['new-19ff894c-ac4c-4dd7-a054-d59a1b0969af'] = $pane;
    $display->panels['center'][3] = 'new-19ff894c-ac4c-4dd7-a054-d59a1b0969af';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-19ff894c-ac4c-4dd7-a054-d59a1b0969af';
  $panelizer->display = $display;
  $export['node:article:default:teaser'] = $panelizer;

  return $export;
}
