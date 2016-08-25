<?php
/**
 * @file
 * tree_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tree_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'education';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Education';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'tree_event' => 'tree_event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Education';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_event_photo' => 'field_event_photo',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['id'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['table'] = 'field_data_field_type_of_theme';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['field'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Education Category */
  $handler->display->display_options['fields']['field_education_category']['id'] = 'field_education_category';
  $handler->display->display_options['fields']['field_education_category']['table'] = 'field_data_field_education_category';
  $handler->display->display_options['fields']['field_education_category']['field'] = 'field_education_category';
  $handler->display->display_options['fields']['field_education_category']['label'] = '';
  $handler->display->display_options['fields']['field_education_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_education_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_education_category']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Theme Photo */
  $handler->display->display_options['fields']['field_theme_photo']['id'] = 'field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['table'] = 'field_data_field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['field'] = 'field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['label'] = '';
  $handler->display->display_options['fields']['field_theme_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_theme_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h5 class="title-one">[field_education_category]</h5>
<h3 class="title-block">[title]</h3> ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'title-block-content';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'tree_page' => 'tree_page',
    'themes' => 'themes',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['filters']['name']['value'] = 'Education';
  $handler->display->display_options['path'] = 'uw_education';

  /* Display: Courses */
  $handler = $view->new_display('panel_pane', 'Courses', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['id'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['table'] = 'field_data_field_type_of_theme';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['field'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
    'themes' => 'themes',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'theme';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['pane_title'] = 'courses';

  /* Display: More on Education */
  $handler = $view->new_display('panel_pane', 'More on Education', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'More Education';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Education Category */
  $handler->display->display_options['fields']['field_education_category']['id'] = 'field_education_category';
  $handler->display->display_options['fields']['field_education_category']['table'] = 'field_data_field_education_category';
  $handler->display->display_options['fields']['field_education_category']['field'] = 'field_education_category';
  $handler->display->display_options['fields']['field_education_category']['label'] = '';
  $handler->display->display_options['fields']['field_education_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_education_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_education_category']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_class'] = 'title-block';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Theme Photo */
  $handler->display->display_options['fields']['field_theme_photo']['id'] = 'field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['table'] = 'field_data_field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['field'] = 'field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['label'] = '';
  $handler->display->display_options['fields']['field_theme_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_theme_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h5 class="title-one"> [field_education_category]</h5>
<h3 class="title-block"> [title] </h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'title-block-content ';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'themes' => 'themes',
  );
  $handler->display->display_options['pane_title'] = 'More on Education';
  $translatables['education'] = array(
    t('Master'),
    t('Resources Page'),
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
    t('Education'),
    t('Taxonomy term entity referenced from field_type_of_theme'),
    t('<h5 class="title-one">[field_education_category]</h5>
<h3 class="title-block">[title]</h3> '),
    t('Courses'),
    t('courses'),
    t('View panes'),
    t('More on Education'),
    t('More Education'),
    t('<h5 class="title-one"> [field_education_category]</h5>
<h3 class="title-block"> [title] </h3>'),
  );
  $export['education'] = $view;

  $view = new view();
  $view->name = 'pubs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Success Stories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['id'] = 'field_type_of_news_target_id';
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['field'] = 'field_type_of_news_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: News Body */
  $handler->display->display_options['fields']['field_news_body']['id'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['table'] = 'field_data_field_news_body';
  $handler->display->display_options['fields']['field_news_body']['field'] = 'field_news_body';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['id'] = 'field_type_of_news_target_id';
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['field'] = 'field_type_of_news_target_id';
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
  /* Field: Content: News Body */
  $handler->display->display_options['fields']['field_news_body']['id'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['table'] = 'field_data_field_news_body';
  $handler->display->display_options['fields']['field_news_body']['field'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['label'] = '';
  $handler->display->display_options['fields']['field_news_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_news_body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_type_of_news_target_id';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['value'] = 'Success Stories';
  $handler->display->display_options['path'] = 'Publications';

  /* Display: Blogs */
  $handler = $view->new_display('page', 'Blogs', 'blogs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog Posts';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = '.pub__info__title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: News Body */
  $handler->display->display_options['fields']['field_news_body']['id'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['table'] = 'field_data_field_news_body';
  $handler->display->display_options['fields']['field_news_body']['field'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['label'] = '';
  $handler->display->display_options['fields']['field_news_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_body']['element_class'] = 'pub__info__meta ';
  $handler->display->display_options['fields']['field_news_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_news_body']['settings'] = array(
    'trim_length' => '80',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pub__info__title"> [title] </div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'pub__info';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tree_news' => 'tree_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'news_category';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'Blog Posts/list';

  /* Display: Success Stories */
  $handler = $view->new_display('page', 'Success Stories', 'page_2');
  $handler->display->display_options['display_description'] = 'list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = '.pub__info__title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: News Body */
  $handler->display->display_options['fields']['field_news_body']['id'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['table'] = 'field_data_field_news_body';
  $handler->display->display_options['fields']['field_news_body']['field'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['label'] = '';
  $handler->display->display_options['fields']['field_news_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_body']['element_class'] = 'pub__info__meta ';
  $handler->display->display_options['fields']['field_news_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_news_body']['settings'] = array(
    'trim_length' => '80',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pub__info__title"> [title] </div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'pub__info';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tree_news' => 'tree_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'news_category';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'Success Stories/list';

  /* Display: News */
  $handler = $view->new_display('page', 'News', 'news');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['display_description'] = 'list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = '.pub__info__title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: News Body */
  $handler->display->display_options['fields']['field_news_body']['id'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['table'] = 'field_data_field_news_body';
  $handler->display->display_options['fields']['field_news_body']['field'] = 'field_news_body';
  $handler->display->display_options['fields']['field_news_body']['label'] = '';
  $handler->display->display_options['fields']['field_news_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_news_body']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_body']['element_class'] = 'pub__info__meta ';
  $handler->display->display_options['fields']['field_news_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_news_body']['settings'] = array(
    'trim_length' => '80',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pub__info__title"> [title] </div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'pub__info';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tree_news' => 'tree_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    26 => '26',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'news_category';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'News/list';

  /* Display: Publication List */
  $handler = $view->new_display('panel_pane', 'Publication List', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_type_target_id']['id'] = 'field_document_type_target_id';
  $handler->display->display_options['relationships']['field_document_type_target_id']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['relationships']['field_document_type_target_id']['field'] = 'field_document_type_target_id';
  $handler->display->display_options['relationships']['field_document_type_target_id']['required'] = TRUE;
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
    'tree_document' => 'tree_document',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    17 => '17',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tree_document_type';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['pane_title'] = 'publication list';

  /* Display: Posters and Presentations List */
  $handler = $view->new_display('panel_pane', 'Posters and Presentations List', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Posters and Presentations';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_document_type_target_id']['id'] = 'field_document_type_target_id';
  $handler->display->display_options['relationships']['field_document_type_target_id']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['relationships']['field_document_type_target_id']['field'] = 'field_document_type_target_id';
  $handler->display->display_options['relationships']['field_document_type_target_id']['required'] = TRUE;
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
    'tree_document' => 'tree_document',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tree_document_type';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['pane_title'] = 'Posters and Presentations list';
  $translatables['pubs'] = array(
    t('Master'),
    t('Success Stories'),
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
    t('Taxonomy term entity referenced from field_type_of_news'),
    t('News Body'),
    t('Page'),
    t('Blogs'),
    t('Blog Posts'),
    t('<div class="pub__info__title"> [title] </div>
'),
    t('list'),
    t('News'),
    t('Publication List'),
    t('Publications'),
    t('Taxonomy term entity referenced from field_document_type'),
    t('publication list'),
    t('View panes'),
    t('Posters and Presentations List'),
    t('Posters and Presentations'),
    t('Posters and Presentations list'),
  );
  $export['pubs'] = $view;

  $view = new view();
  $view->name = 'research';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Research';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'tree_event' => 'tree_event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Research';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_event_photo' => 'field_event_photo',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['id'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['table'] = 'field_data_field_type_of_theme';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['field'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h6';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'pack-header';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h3 class="title-block">[title]</h3> ';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'title-block-content';
  /* Field: Content: Theme Photo */
  $handler->display->display_options['fields']['field_theme_photo']['id'] = 'field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['table'] = 'field_data_field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['field'] = 'field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['label'] = '';
  $handler->display->display_options['fields']['field_theme_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_theme_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="res-container"><a href="researcher_list" class="res_button">Meet Our Researchers</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Researcher Bio */
  $handler->display->display_options['fields']['field_researcher_bio']['id'] = 'field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['table'] = 'field_data_field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['field'] = 'field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['text'] = '[nothing]';
  $handler->display->display_options['fields']['field_researcher_bio']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_researcher_bio']['element_class'] = 'res-block_title ';
  $handler->display->display_options['fields']['field_researcher_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_bio']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_researcher_bio']['element_wrapper_class'] = 'res-block_content';
  $handler->display->display_options['fields']['field_researcher_bio']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_researcher_bio']['settings'] = array(
    'trim_length' => '5',
  );
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
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'tree_page' => 'tree_page',
    'tree_researchers' => 'tree_researchers',
    'themes' => 'themes',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['filters']['name']['value'] = 'Research';
  $handler->display->display_options['path'] = 'uw_research';

  /* Display: More Research */
  $handler = $view->new_display('panel_pane', 'More Research', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'More Research';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['id'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['table'] = 'field_data_field_type_of_theme';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['field'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Type of Theme */
  $handler->display->display_options['fields']['field_type_of_theme']['id'] = 'field_type_of_theme';
  $handler->display->display_options['fields']['field_type_of_theme']['table'] = 'field_data_field_type_of_theme';
  $handler->display->display_options['fields']['field_type_of_theme']['field'] = 'field_type_of_theme';
  $handler->display->display_options['fields']['field_type_of_theme']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_theme']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_theme']['settings'] = array(
    'link' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3 class="title-block"> [title] </h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'title-block-content ';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Theme Photo */
  $handler->display->display_options['fields']['field_theme_photo']['id'] = 'field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['table'] = 'field_data_field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['field'] = 'field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['label'] = '';
  $handler->display->display_options['fields']['field_theme_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_theme_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Researcher Bio */
  $handler->display->display_options['fields']['field_researcher_bio']['id'] = 'field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['table'] = 'field_data_field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['field'] = 'field_researcher_bio';
  $handler->display->display_options['fields']['field_researcher_bio']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_researcher_bio']['alter']['text'] = '<div class="res-container"><a href="researcher_list" class="res_button">Meet Our Researchers</a></div>';
  $handler->display->display_options['fields']['field_researcher_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'themes' => 'themes',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'theme';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['pane_title'] = 'Research Publications';

  /* Display: Research Publications list */
  $handler = $view->new_display('panel_pane', 'Research Publications list', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
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
    'tree_document' => 'tree_document',
  );
  $handler->display->display_options['pane_title'] = 'Research Links';

  /* Display: Meet Our Researchers */
  $handler = $view->new_display('panel_pane', 'Meet Our Researchers', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="res-container"><a href="researcher_list" class="res_button">Meet Our Researchers</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Photo Researcher */
  $handler->display->display_options['fields']['field_researcher_pic']['id'] = 'field_researcher_pic';
  $handler->display->display_options['fields']['field_researcher_pic']['table'] = 'field_data_field_researcher_pic';
  $handler->display->display_options['fields']['field_researcher_pic']['field'] = 'field_researcher_pic';
  $handler->display->display_options['fields']['field_researcher_pic']['label'] = '';
  $handler->display->display_options['fields']['field_researcher_pic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_researcher_pic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_researcher_pic']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
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
    'tree_researchers' => 'tree_researchers',
  );
  $handler->display->display_options['pane_title'] = 'Meet Our Researchers';
  $translatables['research'] = array(
    t('Master'),
    t('Resources Page'),
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
    t('Research'),
    t('Taxonomy term entity referenced from field_type_of_theme'),
    t('<h3 class="title-block">[title]</h3> '),
    t('<div class="res-container"><a href="researcher_list" class="res_button">Meet Our Researchers</a></div>'),
    t('[nothing]'),
    t('More Research'),
    t('<h3 class="title-block"> [title] </h3>'),
    t('Research Publications'),
    t('View panes'),
    t('Research Publications list'),
    t('Latest Publications'),
    t('Research Links'),
    t('Meet Our Researchers'),
  );
  $export['research'] = $view;

  $view = new view();
  $view->name = 'resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'test-events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['id'] = 'field_type_of_news_target_id';
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['field'] = 'field_type_of_news_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_event_photo' => 'field_event_photo',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type of News */
  $handler->display->display_options['fields']['field_type_of_news_1']['id'] = 'field_type_of_news_1';
  $handler->display->display_options['fields']['field_type_of_news_1']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['fields']['field_type_of_news_1']['field'] = 'field_type_of_news';
  $handler->display->display_options['fields']['field_type_of_news_1']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_news_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_news_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_news_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Document Type */
  $handler->display->display_options['fields']['field_document_type_1']['id'] = 'field_document_type_1';
  $handler->display->display_options['fields']['field_document_type_1']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type_1']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type_1']['label'] = '';
  $handler->display->display_options['fields']['field_document_type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_type_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Document Type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['label'] = '';
  $handler->display->display_options['fields']['field_document_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['path'] = '/[field_document_type_1]/list';
  $handler->display->display_options['fields']['field_document_type']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_type']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_document_type']['element_wrapper_class'] = 'content_types';
  $handler->display->display_options['fields']['field_document_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_document_type']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Type of News */
  $handler->display->display_options['fields']['field_type_of_news']['id'] = 'field_type_of_news';
  $handler->display->display_options['fields']['field_type_of_news']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['fields']['field_type_of_news']['field'] = 'field_type_of_news';
  $handler->display->display_options['fields']['field_type_of_news']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_news']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_news']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_news']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_news']['alter']['path'] = '/[field_type_of_news]/list';
  $handler->display->display_options['fields']['field_type_of_news']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_type_of_news']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_news']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_type_of_news']['element_wrapper_class'] = 'content_type';
  $handler->display->display_options['fields']['field_type_of_news']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_news']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Document_photo */
  $handler->display->display_options['fields']['field_document_photo']['id'] = 'field_document_photo';
  $handler->display->display_options['fields']['field_document_photo']['table'] = 'field_data_field_document_photo';
  $handler->display->display_options['fields']['field_document_photo']['field'] = 'field_document_photo';
  $handler->display->display_options['fields']['field_document_photo']['label'] = '';
  $handler->display->display_options['fields']['field_document_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document_photo']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3 class="title-block">[field_document_type]</h3>
<h3 class="title-block">[field_type_of_news]</h3>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'title-block-content';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
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
    'tree_document' => 'tree_document',
    'tree_news' => 'tree_news',
  );
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  $handler->display->display_options['path'] = 'uw_resources';

  /* Display: Resource Links */
  $handler = $view->new_display('panel_pane', 'Resource Links', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Resource Links';
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type of News */
  $handler->display->display_options['fields']['field_type_of_news_1']['id'] = 'field_type_of_news_1';
  $handler->display->display_options['fields']['field_type_of_news_1']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['fields']['field_type_of_news_1']['field'] = 'field_type_of_news';
  $handler->display->display_options['fields']['field_type_of_news_1']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_news_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_news_1']['alter']['path'] = '/[field_type_of_news]/list';
  $handler->display->display_options['fields']['field_type_of_news_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_news_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Document Type */
  $handler->display->display_options['fields']['field_document_type']['id'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['table'] = 'field_data_field_document_type';
  $handler->display->display_options['fields']['field_document_type']['field'] = 'field_document_type';
  $handler->display->display_options['fields']['field_document_type']['label'] = '';
  $handler->display->display_options['fields']['field_document_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_document_type']['alter']['path'] = '/[field_document_type]/list';
  $handler->display->display_options['fields']['field_document_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_type']['settings'] = array(
    'link' => 0,
  );
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
    'tree_document' => 'tree_document',
    'tree_news' => 'tree_news',
  );
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  $handler->display->display_options['pane_title'] = 'Resources Links';
  $translatables['resources'] = array(
    t('Master'),
    t('test-events'),
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
    t('Taxonomy term entity referenced from field_type_of_news'),
    t('Page'),
    t('Resources'),
    t('<h3 class="title-block">[field_document_type]</h3>
<h3 class="title-block">[field_type_of_news]</h3>
'),
    t('Resource Links'),
    t('Resources Links'),
    t('View panes'),
  );
  $export['resources'] = $view;

  $view = new view();
  $view->name = 'treatment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'treatment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'tree_event' => 'tree_event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Treatment';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_event_photo' => 'field_event_photo',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['id'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['table'] = 'field_data_field_type_of_theme';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['field'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['relationships']['field_type_of_theme_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h3 class="title-block">[title]</h3> ';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'title-block-content';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Content: Theme Photo */
  $handler->display->display_options['fields']['field_theme_photo']['id'] = 'field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['table'] = 'field_data_field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['field'] = 'field_theme_photo';
  $handler->display->display_options['fields']['field_theme_photo']['label'] = '';
  $handler->display->display_options['fields']['field_theme_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_theme_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_theme_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="res-container"><a href="Event" class="res_button">Browse Events</a></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[nothing]';
  $handler->display->display_options['fields']['body']['element_type'] = 'h3';
  $handler->display->display_options['fields']['body']['element_class'] = 'res-block_title ';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'res-block_content';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '5',
  );
  /* Field: Content: event photo */
  $handler->display->display_options['fields']['field_event_photo']['id'] = 'field_event_photo';
  $handler->display->display_options['fields']['field_event_photo']['table'] = 'field_data_field_event_photo';
  $handler->display->display_options['fields']['field_event_photo']['field'] = 'field_event_photo';
  $handler->display->display_options['fields']['field_event_photo']['label'] = '';
  $handler->display->display_options['fields']['field_event_photo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_photo']['alter']['path'] = 'Event';
  $handler->display->display_options['fields']['field_event_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
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
    'tree_event' => 'tree_event',
    'tree_page' => 'tree_page',
    'themes' => 'themes',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_type_of_theme_target_id';
  $handler->display->display_options['filters']['name']['value'] = 'Treatment';
  $handler->display->display_options['path'] = 'uw_treatment';

  /* Display: Success Stories */
  $handler = $view->new_display('panel_pane', 'Success Stories', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Success Stories';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['id'] = 'field_type_of_news_target_id';
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['field'] = 'field_type_of_news_target_id';
  $handler->display->display_options['relationships']['field_type_of_news_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3 class="title-block">[title]</h3>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'title-block-content';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
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
    'tree_news' => 'tree_news',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '11',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'news_category';
  $handler->display->display_options['pane_title'] = 'Success Stories';

  /* Display: Latest News and Events */
  $handler = $view->new_display('panel_pane', 'Latest News and Events', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News and Events';
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
    'tree_event' => 'tree_event',
    'tree_news' => 'tree_news',
  );
  $handler->display->display_options['pane_title'] = 'Latest news and events';
  $translatables['treatment'] = array(
    t('Master'),
    t('Resources Page'),
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
    t('Treatment'),
    t('Taxonomy term entity referenced from field_type_of_theme'),
    t('<h3 class="title-block">[title]</h3> '),
    t('<div class="res-container"><a href="Event" class="res_button">Browse Events</a></div>'),
    t('[nothing]'),
    t('Success Stories'),
    t('Taxonomy term entity referenced from field_type_of_news'),
    t('<h3 class="title-block">[title]</h3>'),
    t('View panes'),
    t('Latest News and Events'),
    t('Latest news and events'),
  );
  $export['treatment'] = $view;

  $view = new view();
  $view->name = 'tree';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tree';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['row_plugin'] = 'fields';
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
    'tree_event' => 'tree_event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_event_photo' => 'field_event_photo',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_type_of_space_target_id']['id'] = 'field_type_of_space_target_id';
  $handler->display->display_options['relationships']['field_type_of_space_target_id']['table'] = 'field_data_field_type_of_space';
  $handler->display->display_options['relationships']['field_type_of_space_target_id']['field'] = 'field_type_of_space_target_id';
  $handler->display->display_options['relationships']['field_type_of_space_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_home_page_target_id']['id'] = 'field_home_page_target_id';
  $handler->display->display_options['relationships']['field_home_page_target_id']['table'] = 'field_data_field_home_page';
  $handler->display->display_options['relationships']['field_home_page_target_id']['field'] = 'field_home_page_target_id';
  $handler->display->display_options['relationships']['field_home_page_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_class'] = 'isotope_title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'pack-header';
  /* Field: Content: Type of space */
  $handler->display->display_options['fields']['field_type_of_space']['id'] = 'field_type_of_space';
  $handler->display->display_options['fields']['field_type_of_space']['table'] = 'field_data_field_type_of_space';
  $handler->display->display_options['fields']['field_type_of_space']['field'] = 'field_type_of_space';
  $handler->display->display_options['fields']['field_type_of_space']['label'] = '';
  $handler->display->display_options['fields']['field_type_of_space']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_type_of_space']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_type_of_space']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Information */
  $handler->display->display_options['fields']['field_information']['id'] = 'field_information';
  $handler->display->display_options['fields']['field_information']['table'] = 'field_data_field_information';
  $handler->display->display_options['fields']['field_information']['field'] = 'field_information';
  $handler->display->display_options['fields']['field_information']['label'] = '';
  $handler->display->display_options['fields']['field_information']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_information']['alter']['path'] = '/[field_type_of_space]';
  $handler->display->display_options['fields']['field_information']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_information']['element_class'] = '.isotope_title';
  $handler->display->display_options['fields']['field_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_information']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_information']['element_wrapper_class'] = '.isotope_desc';
  $handler->display->display_options['fields']['field_information']['element_default_classes'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_photo']['id'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['table'] = 'field_data_field_photo';
  $handler->display->display_options['fields']['field_photo']['field'] = 'field_photo';
  $handler->display->display_options['fields']['field_photo']['label'] = '';
  $handler->display->display_options['fields']['field_photo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_photo']['alter']['path'] = '/[field_type_of_space]';
  $handler->display->display_options['fields']['field_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Content fields (field_content_fields) */
  $handler->display->display_options['sorts']['field_content_fields_value']['id'] = 'field_content_fields_value';
  $handler->display->display_options['sorts']['field_content_fields_value']['table'] = 'field_data_field_content_fields';
  $handler->display->display_options['sorts']['field_content_fields_value']['field'] = 'field_content_fields_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Home Page (field_home_page) */
  $handler->display->display_options['filters']['field_home_page_target_id']['id'] = 'field_home_page_target_id';
  $handler->display->display_options['filters']['field_home_page_target_id']['table'] = 'field_data_field_home_page';
  $handler->display->display_options['filters']['field_home_page_target_id']['field'] = 'field_home_page_target_id';
  $handler->display->display_options['filters']['field_home_page_target_id']['value'] = array(
    25 => '25',
  );
  $handler->display->display_options['path'] = 'tree';
  $translatables['tree'] = array(
    t('Master'),
    t('Resources Page'),
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
    t('Taxonomy term entity referenced from field_type_of_space'),
    t('Taxonomy term entity referenced from field_home_page'),
  );
  $export['tree'] = $view;

  return $export;
}
