<?php
/**
 * @file
 * tree_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tree_users_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'SEARCH';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'name' => 0,
    'field_job_categories' => 0,
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  /* Relationship: OG membership: Type */
  $handler->display->display_options['relationships']['type']['id'] = 'type';
  $handler->display->display_options['relationships']['type']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['type']['field'] = 'type';
  $handler->display->display_options['relationships']['type']['relationship'] = 'og_membership_related_node';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff_DELETE';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'tree_profile' => 'tree_profile',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_job_categories_target_id']['id'] = 'field_job_categories_target_id';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['table'] = 'field_data_field_job_categories';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['field'] = 'field_job_categories_target_id';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Profile: Job Category */
  $handler->display->display_options['fields']['field_job_categories']['id'] = 'field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['table'] = 'field_data_field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['field'] = 'field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_job_categories']['label'] = '';
  $handler->display->display_options['fields']['field_job_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_categories']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'profile';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['relationship'] = 'field_job_categories_target_id';
  $handler->display->display_options['filters']['tid']['value'] = array(
    20 => '20',
    21 => '21',
  );
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Type of Profile';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
  );
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'profile_categories';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'staff_FORMS';
  $translatables['staff'] = array(
    t('Master'),
    t('Staff'),
    t('more'),
    t('SEARCH'),
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
    t('og_membership_rel_group'),
    t('OG membership type'),
    t('Page'),
    t('Staff_DELETE'),
    t('Profile'),
    t('Taxonomy term entity referenced from field_job_categories'),
    t('Type of Profile'),
  );
  $export['staff'] = $view;

  $view = new view();
  $view->name = 'staff_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'SEARCH';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'name' => 0,
    'field_job_categories' => 0,
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meet The Team';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_job_categories' => 'field_job_categories',
    'name' => 0,
    'picture' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'staff_list:profile_filter';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'tree_profile' => 'tree_profile',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_job_categories_target_id']['id'] = 'field_job_categories_target_id';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['table'] = 'field_data_field_job_categories';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['field'] = 'field_job_categories_target_id';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['required'] = TRUE;
  /* Relationship: Profile: profile pic (field_profile_pic:fid) */
  $handler->display->display_options['relationships']['field_profile_pic_fid']['id'] = 'field_profile_pic_fid';
  $handler->display->display_options['relationships']['field_profile_pic_fid']['table'] = 'field_data_field_profile_pic';
  $handler->display->display_options['relationships']['field_profile_pic_fid']['field'] = 'field_profile_pic_fid';
  $handler->display->display_options['relationships']['field_profile_pic_fid']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_profile_pic_fid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Job Category */
  $handler->display->display_options['fields']['field_job_categories']['id'] = 'field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['table'] = 'field_data_field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['field'] = 'field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_job_categories']['label'] = '';
  $handler->display->display_options['fields']['field_job_categories']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_categories']['settings'] = array(
    'link' => 0,
  );
  /* Field: Profile: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Profile: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[field_first_name]&nbsp;[field_last_name] ';
  $handler->display->display_options['fields']['name']['alter']['path'] = '[name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Profile: User uid */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'profile';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['relationship'] = 'profile';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['exclude'] = TRUE;
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[name] ';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[user]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h6';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'pack-header';
  /* Field: Profile: profile pic */
  $handler->display->display_options['fields']['field_profile_pic_1']['id'] = 'field_profile_pic_1';
  $handler->display->display_options['fields']['field_profile_pic_1']['table'] = 'field_data_field_profile_pic';
  $handler->display->display_options['fields']['field_profile_pic_1']['field'] = 'field_profile_pic';
  $handler->display->display_options['fields']['field_profile_pic_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_profile_pic_1']['label'] = '';
  $handler->display->display_options['fields']['field_profile_pic_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_pic_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_pic_1']['settings'] = array(
    'image_style' => 'profiles',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Profile: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'profile';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'profile';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'staff';

  /* Display: Select Profile Category */
  $handler = $view->new_display('block', 'Select Profile Category', 'profile_filter');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff Categories';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_filter';
  $handler->display->display_options['style_options']['data_fields'] = 'field_job_categories';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'tree_profile' => 'tree_profile',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_job_categories_target_id']['id'] = 'field_job_categories_target_id';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['table'] = 'field_data_field_job_categories';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['field'] = 'field_job_categories_target_id';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Profile: Job Category */
  $handler->display->display_options['fields']['field_job_categories']['id'] = 'field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['table'] = 'field_data_field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['field'] = 'field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_job_categories']['label'] = '';
  $handler->display->display_options['fields']['field_job_categories']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_job_categories']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_job_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_categories']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_job_categories']['group_columns'] = array(
    'entity_type' => 'entity_type',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['block_description'] = 'categories';

  /* Display: Sorter */
  $handler = $view->new_display('block', 'Sorter', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_sorter';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_job_categories' => 'field_job_categories',
    'name' => 0,
  );
  $handler->display->display_options['style_options']['original'] = 'Original';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'tree_profile' => 'tree_profile',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_job_categories_target_id']['id'] = 'field_job_categories_target_id';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['table'] = 'field_data_field_job_categories';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['field'] = 'field_job_categories_target_id';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_job_categories_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Profile: Job Category */
  $handler->display->display_options['fields']['field_job_categories']['id'] = 'field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['table'] = 'field_data_field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['field'] = 'field_job_categories';
  $handler->display->display_options['fields']['field_job_categories']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_job_categories']['label'] = '';
  $handler->display->display_options['fields']['field_job_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_categories']['settings'] = array(
    'link' => 0,
  );
  $translatables['staff_list'] = array(
    t('Master'),
    t('Staff'),
    t('more'),
    t('SEARCH'),
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
    t('Meet The Team'),
    t('Profile'),
    t('Taxonomy term entity referenced from field_job_categories'),
    t('image from field_profile_pic'),
    t('[field_first_name]&nbsp;[field_last_name] '),
    t('.'),
    t(','),
    t('[name] '),
    t('Select Profile Category'),
    t('Staff Categories'),
    t('categories'),
    t('Sorter'),
  );
  $export['staff_list'] = $view;

  return $export;
}
