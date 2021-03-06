<?php
/**
 * @file
 * tree_document.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function tree_document_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:tree_users:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'tree_users';
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
  $display->title = '';
  $display->uuid = '6d239037-b2fa-4676-b2ce-ba54233f5a4d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-455e4af2-d103-42ee-9638-a630c5a6a2c7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'fieldable_panels_pane:title_field';
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
    $pane->uuid = '455e4af2-d103-42ee-9638-a630c5a6a2c7';
    $display->content['new-455e4af2-d103-42ee-9638-a630c5a6a2c7'] = $pane;
    $display->panels['center'][0] = 'new-455e4af2-d103-42ee-9638-a630c5a6a2c7';
    $pane = new stdClass();
    $pane->pid = 'new-7b6e66e9-9f92-4109-a59f-9e2fc70b5176';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'fieldable_panels_pane:field_users';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'links' => 0,
        'view_mode' => 'teaser',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b6e66e9-9f92-4109-a59f-9e2fc70b5176';
    $display->content['new-7b6e66e9-9f92-4109-a59f-9e2fc70b5176'] = $pane;
    $display->panels['center'][1] = 'new-7b6e66e9-9f92-4109-a59f-9e2fc70b5176';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7b6e66e9-9f92-4109-a59f-9e2fc70b5176';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:tree_users:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'fieldable_panels_pane:tree_users:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'fieldable_panels_pane';
  $panelizer->panelizer_key = 'tree_users';
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
  $display->title = '';
  $display->uuid = '17cb16da-cffa-4b36-9619-22122e63f1fe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-36ffbc97-10ea-4967-b320-ef55f00b2e58';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'fieldable_panels_pane:title_field';
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
    $pane->uuid = '36ffbc97-10ea-4967-b320-ef55f00b2e58';
    $display->content['new-36ffbc97-10ea-4967-b320-ef55f00b2e58'] = $pane;
    $display->panels['center'][0] = 'new-36ffbc97-10ea-4967-b320-ef55f00b2e58';
    $pane = new stdClass();
    $pane->pid = 'new-0aa2fc44-29be-42cb-aeff-8814d82bb79f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'fieldable_panels_pane:field_users';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'links' => 1,
        'view_mode' => 'teaser',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0aa2fc44-29be-42cb-aeff-8814d82bb79f';
    $display->content['new-0aa2fc44-29be-42cb-aeff-8814d82bb79f'] = $pane;
    $display->panels['center'][1] = 'new-0aa2fc44-29be-42cb-aeff-8814d82bb79f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0aa2fc44-29be-42cb-aeff-8814d82bb79f';
  $panelizer->display = $display;
  $export['fieldable_panels_pane:tree_users:default:teaser'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_document:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_document';
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
  $display->layout = 'radix_bryant_flipped';
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
  $display->uuid = '7a41330f-ecdd-4fc3-91bf-f21535bb1a2c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7cb4aafb-b8a9-43c0-8099-ecaba3206444';
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
      'override_title_text' => '%title ',
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
    $pane->uuid = '7cb4aafb-b8a9-43c0-8099-ecaba3206444';
    $display->content['new-7cb4aafb-b8a9-43c0-8099-ecaba3206444'] = $pane;
    $display->panels['contentmain'][0] = 'new-7cb4aafb-b8a9-43c0-8099-ecaba3206444';
    $pane = new stdClass();
    $pane->pid = 'new-b7027d14-d901-4a1f-962b-1ae595c88f0d';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_purpose';
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
      'override_title' => 1,
      'override_title_text' => 'Purpose',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b7027d14-d901-4a1f-962b-1ae595c88f0d';
    $display->content['new-b7027d14-d901-4a1f-962b-1ae595c88f0d'] = $pane;
    $display->panels['contentmain'][1] = 'new-b7027d14-d901-4a1f-962b-1ae595c88f0d';
    $pane = new stdClass();
    $pane->pid = 'new-c5396b4c-a830-459d-bed3-e6e0fc17ac47';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_results';
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
      'override_title' => 1,
      'override_title_text' => 'Results',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c5396b4c-a830-459d-bed3-e6e0fc17ac47';
    $display->content['new-c5396b4c-a830-459d-bed3-e6e0fc17ac47'] = $pane;
    $display->panels['contentmain'][2] = 'new-c5396b4c-a830-459d-bed3-e6e0fc17ac47';
    $pane = new stdClass();
    $pane->pid = 'new-46a78c0e-eb7c-41f1-a190-5cfeac4e2ac9';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_conclusion';
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
      'override_title' => 1,
      'override_title_text' => 'Conclusion',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '46a78c0e-eb7c-41f1-a190-5cfeac4e2ac9';
    $display->content['new-46a78c0e-eb7c-41f1-a190-5cfeac4e2ac9'] = $pane;
    $display->panels['contentmain'][3] = 'new-46a78c0e-eb7c-41f1-a190-5cfeac4e2ac9';
    $pane = new stdClass();
    $pane->pid = 'new-88b87738-6ddd-4c3d-ab06-64d53fe1c11d';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'document-thumbs';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '88b87738-6ddd-4c3d-ab06-64d53fe1c11d';
    $display->content['new-88b87738-6ddd-4c3d-ab06-64d53fe1c11d'] = $pane;
    $display->panels['sidebar'][0] = 'new-88b87738-6ddd-4c3d-ab06-64d53fe1c11d';
    $pane = new stdClass();
    $pane->pid = 'new-71cb6949-6b8c-4b5d-928e-97acd6f61391';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files_collection';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'add' => '',
        'delete' => '',
        'description' => 0,
        'edit' => '',
        'view_mode' => 'full',
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
      'css_id' => '',
      'css_class' => 'file',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '71cb6949-6b8c-4b5d-928e-97acd6f61391';
    $display->content['new-71cb6949-6b8c-4b5d-928e-97acd6f61391'] = $pane;
    $display->panels['sidebar'][1] = 'new-71cb6949-6b8c-4b5d-928e-97acd6f61391';
    $pane = new stdClass();
    $pane->pid = 'new-5eff9684-d351-4857-97c2-faa1e6b70e4f';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document_bio';
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
      'override_title' => 1,
      'override_title_text' => 'Authors',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'doc',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5eff9684-d351-4857-97c2-faa1e6b70e4f';
    $display->content['new-5eff9684-d351-4857-97c2-faa1e6b70e4f'] = $pane;
    $display->panels['sidebar'][2] = 'new-5eff9684-d351-4857-97c2-faa1e6b70e4f';
    $pane = new stdClass();
    $pane->pid = 'new-57341792-c020-43c1-959e-161af6daafd8';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_links';
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
      'override_title' => 1,
      'override_title_text' => 'Related Link',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'links',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '57341792-c020-43c1-959e-161af6daafd8';
    $display->content['new-57341792-c020-43c1-959e-161af6daafd8'] = $pane;
    $display->panels['sidebar'][3] = 'new-57341792-c020-43c1-959e-161af6daafd8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-71cb6949-6b8c-4b5d-928e-97acd6f61391';
  $panelizer->display = $display;
  $export['node:tree_document:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_document:default:search_result';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_document';
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
  $display->layout = 'radix_bryant';
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
  $display->uuid = 'e4fbcce0-b2ce-4b2c-b43f-525507deac02';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-617909d2-3b2c-4fea-94ed-28f1d993ec43';
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
        'title_link' => 'content',
        'title_class' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '%title',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search_title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '617909d2-3b2c-4fea-94ed-28f1d993ec43';
    $display->content['new-617909d2-3b2c-4fea-94ed-28f1d993ec43'] = $pane;
    $display->panels['contentmain'][0] = 'new-617909d2-3b2c-4fea-94ed-28f1d993ec43';
    $pane = new stdClass();
    $pane->pid = 'new-a9db7236-9cb4-4e84-9713-7318406e15a9';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document_bio';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '450',
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
    $pane->uuid = 'a9db7236-9cb4-4e84-9713-7318406e15a9';
    $display->content['new-a9db7236-9cb4-4e84-9713-7318406e15a9'] = $pane;
    $display->panels['contentmain'][1] = 'new-a9db7236-9cb4-4e84-9713-7318406e15a9';
    $pane = new stdClass();
    $pane->pid = 'new-5c1c8d2d-28ce-4ae9-b518-15b0a799f209';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_publication_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'short',
        'fromto' => 'both',
        'multiple_from' => '',
        'multiple_number' => '',
        'multiple_to' => '',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Publication Date',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5c1c8d2d-28ce-4ae9-b518-15b0a799f209';
    $display->content['new-5c1c8d2d-28ce-4ae9-b518-15b0a799f209'] = $pane;
    $display->panels['contentmain'][2] = 'new-5c1c8d2d-28ce-4ae9-b518-15b0a799f209';
    $pane = new stdClass();
    $pane->pid = 'new-024dd305-0f01-4412-9957-ca5858313a9c';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 0,
        'view_mode' => 'default',
        'links' => 1,
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => 'Document Type',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '024dd305-0f01-4412-9957-ca5858313a9c';
    $display->content['new-024dd305-0f01-4412-9957-ca5858313a9c'] = $pane;
    $display->panels['contentmain'][3] = 'new-024dd305-0f01-4412-9957-ca5858313a9c';
    $pane = new stdClass();
    $pane->pid = 'new-e243dad9-90f9-48d7-8cc1-c7d529ecc6c5';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e243dad9-90f9-48d7-8cc1-c7d529ecc6c5';
    $display->content['new-e243dad9-90f9-48d7-8cc1-c7d529ecc6c5'] = $pane;
    $display->panels['contentmain'][4] = 'new-e243dad9-90f9-48d7-8cc1-c7d529ecc6c5';
    $pane = new stdClass();
    $pane->pid = 'new-338bc1f6-004d-449c-a9cc-cc7417446c87';
    $pane->panel = 'sidebar';
    $pane->type = 'views_panes';
    $pane->subtype = 'document-thumbs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '338bc1f6-004d-449c-a9cc-cc7417446c87';
    $display->content['new-338bc1f6-004d-449c-a9cc-cc7417446c87'] = $pane;
    $display->panels['sidebar'][0] = 'new-338bc1f6-004d-449c-a9cc-cc7417446c87';
    $pane = new stdClass();
    $pane->pid = 'new-84c287a1-854f-4fb9-8392-297deaa50936';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_files_collection';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => 1,
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
    $pane->uuid = '84c287a1-854f-4fb9-8392-297deaa50936';
    $display->content['new-84c287a1-854f-4fb9-8392-297deaa50936'] = $pane;
    $display->panels['sidebar'][1] = 'new-84c287a1-854f-4fb9-8392-297deaa50936';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tree_document:default:search_result'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:tree_document:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'tree_document';
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
  $display->layout = 'radix_boxton';
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
  $display->uuid = '1ebe484a-f84f-439f-ba3d-84630348bd79';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1ec2d1d2-660a-4d4a-8ac4-246cb5b65858';
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
        'title_class' => '',
        'title_link' => 'content',
        'title_style' => 'div',
      ),
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
    $pane->uuid = '1ec2d1d2-660a-4d4a-8ac4-246cb5b65858';
    $display->content['new-1ec2d1d2-660a-4d4a-8ac4-246cb5b65858'] = $pane;
    $display->panels['contentmain'][0] = 'new-1ec2d1d2-660a-4d4a-8ac4-246cb5b65858';
    $pane = new stdClass();
    $pane->pid = 'new-6f524373-109d-4473-b544-e828902b7a94';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 0,
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
    $pane->uuid = '6f524373-109d-4473-b544-e828902b7a94';
    $display->content['new-6f524373-109d-4473-b544-e828902b7a94'] = $pane;
    $display->panels['contentmain'][1] = 'new-6f524373-109d-4473-b544-e828902b7a94';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:tree_document:default:teaser'] = $panelizer;

  return $export;
}
