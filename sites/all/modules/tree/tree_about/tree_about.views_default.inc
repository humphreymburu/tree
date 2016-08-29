<?php
/**
 * @file
 * tree_about.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tree_about_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'about';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'about_tree' => 'about_tree',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'More About Tree';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'title' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'pack-header';
  /* Field: Content: status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Content: Photo About */
  $handler->display->display_options['fields']['field_about_photo']['id'] = 'field_about_photo';
  $handler->display->display_options['fields']['field_about_photo']['table'] = 'field_data_field_about_photo';
  $handler->display->display_options['fields']['field_about_photo']['field'] = 'field_about_photo';
  $handler->display->display_options['fields']['field_about_photo']['label'] = '';
  $handler->display->display_options['fields']['field_about_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_about_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_about_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_about_photo']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: About Info */
  $handler->display->display_options['fields']['field_about_info']['id'] = 'field_about_info';
  $handler->display->display_options['fields']['field_about_info']['table'] = 'field_data_field_about_info';
  $handler->display->display_options['fields']['field_about_info']['field'] = 'field_about_info';
  $handler->display->display_options['fields']['field_about_info']['label'] = '';
  $handler->display->display_options['fields']['field_about_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_about_info']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_about_info']['alter']['text'] = '[field_about_photo]
<div class="title-block-content">
<h5 class="title-block">[field_about_info]</h5></div>
';
  $handler->display->display_options['fields']['field_about_info']['alter']['path'] = '/content/[title] ';
  $handler->display->display_options['fields']['field_about_info']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_about_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_about_info']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_about_info]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/content/[title]';
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Photo About */
  $handler->display->display_options['fields']['field_about_photo_1']['id'] = 'field_about_photo_1';
  $handler->display->display_options['fields']['field_about_photo_1']['table'] = 'field_data_field_about_photo';
  $handler->display->display_options['fields']['field_about_photo_1']['field'] = 'field_about_photo';
  $handler->display->display_options['fields']['field_about_photo_1']['label'] = '';
  $handler->display->display_options['fields']['field_about_photo_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_about_photo_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_about_photo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_about_photo_1']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Other Info */
  $handler->display->display_options['fields']['field_other_info']['id'] = 'field_other_info';
  $handler->display->display_options['fields']['field_other_info']['table'] = 'field_data_field_other_info';
  $handler->display->display_options['fields']['field_other_info']['field'] = 'field_other_info';
  $handler->display->display_options['fields']['field_other_info']['label'] = '';
  $handler->display->display_options['fields']['field_other_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_other_info']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_other_info']['alter']['text'] = '[field_about_photo_1] 
<div class="title-block-content">
<h5 class="title-block">[field_other_info]</h5></div>';
  $handler->display->display_options['fields']['field_other_info']['alter']['path'] = '/staff';
  $handler->display->display_options['fields']['field_other_info']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_other_info] ';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '/staff';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Photo Researcher */
  $handler->display->display_options['fields']['field_researcher_pic']['id'] = 'field_researcher_pic';
  $handler->display->display_options['fields']['field_researcher_pic']['table'] = 'field_data_field_researcher_pic';
  $handler->display->display_options['fields']['field_researcher_pic']['field'] = 'field_researcher_pic';
  $handler->display->display_options['fields']['field_researcher_pic']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_pic']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_pic']['alter']['path'] = '/research_list';
  $handler->display->display_options['fields']['field_researcher_pic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_pic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_researcher_pic']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Researcher Bio */
  $handler->display->display_options['fields']['field_researcher_bio']['id'] = 'field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['table'] = 'field_data_field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['field'] = 'field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['text'] = 'Meet Our Researchers';
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['path'] = '/researcher_list';
  $handler->display->display_options['fields']['field_researcher_bio']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_researcher_bio']['element_class'] = 'title-block';
  $handler->display->display_options['fields']['field_researcher_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_bio']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_researcher_bio']['element_wrapper_class'] = 'title-block-content';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'about_tree' => 'about_tree',
    'tree_researchers' => 'tree_researchers',
  );
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  $handler->display->display_options['path'] = 'about_tree';

  /* Display: About Links */
  $handler = $view->new_display('page', 'About Links', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About Tree';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'pack-header';
  /* Field: Content: About Info */
  $handler->display->display_options['fields']['field_about_info']['id'] = 'field_about_info';
  $handler->display->display_options['fields']['field_about_info']['table'] = 'field_data_field_about_info';
  $handler->display->display_options['fields']['field_about_info']['field'] = 'field_about_info';
  $handler->display->display_options['fields']['field_about_info']['label'] = '';
  $handler->display->display_options['fields']['field_about_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_about_info']['alter']['text'] = '[field_about_info]
';
  $handler->display->display_options['fields']['field_about_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_about_info']['alter']['path'] = '/content/[title] ';
  $handler->display->display_options['fields']['field_about_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_about_info']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_about_info] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Other Info */
  $handler->display->display_options['fields']['field_other_info']['id'] = 'field_other_info';
  $handler->display->display_options['fields']['field_other_info']['table'] = 'field_data_field_other_info';
  $handler->display->display_options['fields']['field_other_info']['field'] = 'field_other_info';
  $handler->display->display_options['fields']['field_other_info']['label'] = '';
  $handler->display->display_options['fields']['field_other_info']['alter']['text'] = '[field_other_info]';
  $handler->display->display_options['fields']['field_other_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_other_info']['alter']['path'] = '/staff';
  $handler->display->display_options['fields']['field_other_info']['element_label_colon'] = FALSE;
  /* Field: Content: Researcher Bio */
  $handler->display->display_options['fields']['field_researcher_bio']['id'] = 'field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['table'] = 'field_data_field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['field'] = 'field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['text'] = 'Meet Our Researchers';
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['path'] = '/research_list';
  $handler->display->display_options['fields']['field_researcher_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'about_tree' => 'about_tree',
    'tree_researchers' => 'tree_researchers',
  );
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  $handler->display->display_options['path'] = 'about_links';
  $translatables['about'] = array(
    t('Master'),
    t('About'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
    t('More About Tree'),
    t('[field_about_photo]
<div class="title-block-content">
<h5 class="title-block">[field_about_info]</h5></div>
'),
    t('[field_about_info]'),
    t('[field_about_photo_1] 
<div class="title-block-content">
<h5 class="title-block">[field_other_info]</h5></div>'),
    t('[field_other_info] '),
    t('Meet Our Researchers'),
    t('About Links'),
    t('About Tree'),
    t('[field_about_info]
'),
    t('[field_about_info] '),
    t('[field_other_info]'),
  );
  $export['about'] = $view;

  return $export;
}
