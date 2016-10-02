<?php
/**
 * @file
 * tree_news.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tree_news_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_news:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_news';
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
      'center' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '707fb154-7b94-4a2b-bd01-86c565f71064';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-badf9a7a-0bbd-42a6-8a2d-4e7d02bf621d';
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
        'title_style' => 'h1',
        'title_link' => '',
        'title_class' => 'page-title ',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '%title',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'badf9a7a-0bbd-42a6-8a2d-4e7d02bf621d';
    $display->content['new-badf9a7a-0bbd-42a6-8a2d-4e7d02bf621d'] = $pane;
    $display->panels['contentmain'][0] = 'new-badf9a7a-0bbd-42a6-8a2d-4e7d02bf621d';
    $pane = new stdClass();
    $pane->pid = 'new-867a94db-dc2d-490b-971a-9ce4dac90256';
    $pane->panel = 'contentmain';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Published:&nbsp;',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '867a94db-dc2d-490b-971a-9ce4dac90256';
    $display->content['new-867a94db-dc2d-490b-971a-9ce4dac90256'] = $pane;
    $display->panels['contentmain'][1] = 'new-867a94db-dc2d-490b-971a-9ce4dac90256';
    $pane = new stdClass();
    $pane->pid = 'new-2ea0de52-ef13-4d79-89c4-ebd408ea7693';
    $pane->panel = 'contentmain';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'By:&nbsp;',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2ea0de52-ef13-4d79-89c4-ebd408ea7693';
    $display->content['new-2ea0de52-ef13-4d79-89c4-ebd408ea7693'] = $pane;
    $display->panels['contentmain'][2] = 'new-2ea0de52-ef13-4d79-89c4-ebd408ea7693';
    $pane = new stdClass();
    $pane->pid = 'new-3b50bf34-0fd3-42c5-a5fa-6e66454e8fac';
    $pane->panel = 'contentmain';
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
        'image_style' => 'news',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3b50bf34-0fd3-42c5-a5fa-6e66454e8fac';
    $display->content['new-3b50bf34-0fd3-42c5-a5fa-6e66454e8fac'] = $pane;
    $display->panels['contentmain'][3] = 'new-3b50bf34-0fd3-42c5-a5fa-6e66454e8fac';
    $pane = new stdClass();
    $pane->pid = 'new-2e0030e1-6190-4b08-8386-6a5b87cd5c39';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_body';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2e0030e1-6190-4b08-8386-6a5b87cd5c39';
    $display->content['new-2e0030e1-6190-4b08-8386-6a5b87cd5c39'] = $pane;
    $display->panels['contentmain'][4] = 'new-2e0030e1-6190-4b08-8386-6a5b87cd5c39';
    $pane = new stdClass();
    $pane->pid = 'new-4a4a529a-1f13-4020-8194-af4ec3da2783';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:tree_core_share_button';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '4a4a529a-1f13-4020-8194-af4ec3da2783';
    $display->content['new-4a4a529a-1f13-4020-8194-af4ec3da2783'] = $pane;
    $display->panels['contentmain'][5] = 'new-4a4a529a-1f13-4020-8194-af4ec3da2783';
    $pane = new stdClass();
    $pane->pid = 'new-bc1bf0ee-f744-418d-8987-53390bc16c21';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'resources_pubs-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:tree_news:field_type_of_news',
          'settings' => array(
            'field_type_of_news' => array(
              'und' => array(
                0 => array(
                  'target_id' => '40',
                ),
              ),
            ),
            'field_type_of_news_target_id' => array(
              0 => '40',
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
    $pane->uuid = 'bc1bf0ee-f744-418d-8987-53390bc16c21';
    $display->content['new-bc1bf0ee-f744-418d-8987-53390bc16c21'] = $pane;
    $display->panels['sidebar'][0] = 'new-bc1bf0ee-f744-418d-8987-53390bc16c21';
    $pane = new stdClass();
    $pane->pid = 'new-9d688ae0-75d1-4b40-85d9-ee126040a5d6';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'resources_pubs-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:tree_news:field_type_of_news',
          'settings' => array(
            'field_type_of_news' => array(
              'und' => array(
                0 => array(
                  'target_id' => '38',
                ),
              ),
            ),
            'field_type_of_news_target_id' => array(
              0 => '38',
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
    $pane->uuid = '9d688ae0-75d1-4b40-85d9-ee126040a5d6';
    $display->content['new-9d688ae0-75d1-4b40-85d9-ee126040a5d6'] = $pane;
    $display->panels['sidebar'][1] = 'new-9d688ae0-75d1-4b40-85d9-ee126040a5d6';
    $pane = new stdClass();
    $pane->pid = 'new-22ce2fce-a2e1-4399-8204-fdb87965da64';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'resources_pubs-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:tree_news:field_type_of_news',
          'settings' => array(
            'field_type_of_news' => array(
              'und' => array(
                0 => array(
                  'target_id' => '39',
                ),
              ),
            ),
            'field_type_of_news_target_id' => array(
              0 => '39',
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
    $pane->uuid = '22ce2fce-a2e1-4399-8204-fdb87965da64';
    $display->content['new-22ce2fce-a2e1-4399-8204-fdb87965da64'] = $pane;
    $display->panels['sidebar'][2] = 'new-22ce2fce-a2e1-4399-8204-fdb87965da64';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-badf9a7a-0bbd-42a6-8a2d-4e7d02bf621d';
  $panelizer->display = $display;
  $export['node:tree_news:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_news:default:search_result';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_news';
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
      'contentmain' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '232a52e8-a78c-43bf-9412-cc9f5e8d1dd2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-233f2c37-2603-40ec-8654-9c361bcec7c7';
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
    $pane->uuid = '233f2c37-2603-40ec-8654-9c361bcec7c7';
    $display->content['new-233f2c37-2603-40ec-8654-9c361bcec7c7'] = $pane;
    $display->panels['contentmain'][0] = 'new-233f2c37-2603-40ec-8654-9c361bcec7c7';
    $pane = new stdClass();
    $pane->pid = 'new-fe7ee197-b027-4ed0-a955-a13dda318b4c';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_body';
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
    $pane->uuid = 'fe7ee197-b027-4ed0-a955-a13dda318b4c';
    $display->content['new-fe7ee197-b027-4ed0-a955-a13dda318b4c'] = $pane;
    $display->panels['contentmain'][1] = 'new-fe7ee197-b027-4ed0-a955-a13dda318b4c';
    $pane = new stdClass();
    $pane->pid = 'new-2d3b0fbc-2e1e-4659-8fef-a936f4115be7';
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
    $pane->uuid = '2d3b0fbc-2e1e-4659-8fef-a936f4115be7';
    $display->content['new-2d3b0fbc-2e1e-4659-8fef-a936f4115be7'] = $pane;
    $display->panels['contentmain'][2] = 'new-2d3b0fbc-2e1e-4659-8fef-a936f4115be7';
    $pane = new stdClass();
    $pane->pid = 'new-f2f59457-4fb3-4741-b55b-385744a10969';
    $pane->panel = 'sidebar';
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
    $pane->uuid = 'f2f59457-4fb3-4741-b55b-385744a10969';
    $display->content['new-f2f59457-4fb3-4741-b55b-385744a10969'] = $pane;
    $display->panels['sidebar'][0] = 'new-f2f59457-4fb3-4741-b55b-385744a10969';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tree_news:default:search_result'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_news:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_news';
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
  $display->uuid = 'fb7dd768-8a72-4fdd-b0b4-ecba919803ac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-849a2558-d39e-45d3-8ead-4f7c4b06dac5';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_news_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_trimmed',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '849a2558-d39e-45d3-8ead-4f7c4b06dac5';
    $display->content['new-849a2558-d39e-45d3-8ead-4f7c4b06dac5'] = $pane;
    $display->panels['contentmain'][0] = 'new-849a2558-d39e-45d3-8ead-4f7c4b06dac5';
    $pane = new stdClass();
    $pane->pid = 'new-6106df07-abf6-4c3b-b4b2-cfb1999d944f';
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
    $pane->uuid = '6106df07-abf6-4c3b-b4b2-cfb1999d944f';
    $display->content['new-6106df07-abf6-4c3b-b4b2-cfb1999d944f'] = $pane;
    $display->panels['header'][0] = 'new-6106df07-abf6-4c3b-b4b2-cfb1999d944f';
    $pane = new stdClass();
    $pane->pid = 'new-62629cc7-bd4e-4227-8179-dddbc0cf17c7';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'thumbnail',
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
    $pane->uuid = '62629cc7-bd4e-4227-8179-dddbc0cf17c7';
    $display->content['new-62629cc7-bd4e-4227-8179-dddbc0cf17c7'] = $pane;
    $display->panels['sidebar'][0] = 'new-62629cc7-bd4e-4227-8179-dddbc0cf17c7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tree_news:default:teaser'] = $panelizer;

  return $export;
}
