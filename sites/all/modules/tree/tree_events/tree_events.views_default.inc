<?php
/**
 * @file
 * tree_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tree_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Isotope Example';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'isotope_example_color' => 'isotope_example_color',
    'isotope_example_shape' => 'isotope_example_shape',
    'isotope_example_size' => 'isotope_example_size',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Color */
  $handler->display->display_options['fields']['isotope_example_color']['id'] = 'isotope_example_color';
  $handler->display->display_options['fields']['isotope_example_color']['table'] = 'field_data_isotope_example_color';
  $handler->display->display_options['fields']['isotope_example_color']['field'] = 'isotope_example_color';
  /* Field: Content: Shape */
  $handler->display->display_options['fields']['isotope_example_shape']['id'] = 'isotope_example_shape';
  $handler->display->display_options['fields']['isotope_example_shape']['table'] = 'field_data_isotope_example_shape';
  $handler->display->display_options['fields']['isotope_example_shape']['field'] = 'isotope_example_shape';
  /* Field: Content: Size */
  $handler->display->display_options['fields']['isotope_example_size']['id'] = 'isotope_example_size';
  $handler->display->display_options['fields']['isotope_example_size']['table'] = 'field_data_isotope_example_size';
  $handler->display->display_options['fields']['isotope_example_size']['field'] = 'isotope_example_size';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'isotope_example' => 'isotope_example',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_grid';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'isotope_example_color' => 'isotope_example_color',
    'isotope_example_shape' => 'isotope_example_shape',
    'isotope_example_size' => 'isotope_example_size',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_event_photo' => 'field_event_photo',
  );
  $handler->display->display_options['row_options']['layout'] = 'twocol_bricks';
  $handler->display->display_options['row_options']['regions'] = array(
    'title' => 'left',
    'isotope_example_color' => 'left',
    'isotope_example_shape' => 'left',
    'isotope_example_size' => 'left',
    'field_event_photo' => 'left',
    'title_1' => 'left',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Description */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Description';
  $handler->display->display_options['header']['area']['content'] = 'You can explore this example for yourself at <strong>/admin/structure/views/view/isotope_example/edit/</strong>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Header: Color Filter */
  $handler->display->display_options['header']['view_1']['id'] = 'view_1';
  $handler->display->display_options['header']['view_1']['table'] = 'views';
  $handler->display->display_options['header']['view_1']['field'] = 'view';
  $handler->display->display_options['header']['view_1']['ui_name'] = 'Color Filter';
  $handler->display->display_options['header']['view_1']['view_to_insert'] = 'isotope_example:color_filter';
  /* Header: Shape Filter */
  $handler->display->display_options['header']['view_2']['id'] = 'view_2';
  $handler->display->display_options['header']['view_2']['table'] = 'views';
  $handler->display->display_options['header']['view_2']['field'] = 'view';
  $handler->display->display_options['header']['view_2']['ui_name'] = 'Shape Filter';
  $handler->display->display_options['header']['view_2']['view_to_insert'] = 'isotope_example:shape_filter';
  /* Header: Size Filter */
  $handler->display->display_options['header']['view_3']['id'] = 'view_3';
  $handler->display->display_options['header']['view_3']['table'] = 'views';
  $handler->display->display_options['header']['view_3']['field'] = 'view';
  $handler->display->display_options['header']['view_3']['ui_name'] = 'Size Filter';
  $handler->display->display_options['header']['view_3']['view_to_insert'] = 'isotope_example:size_filter';
  /* Header: Sorter */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['ui_name'] = 'Sorter';
  $handler->display->display_options['header']['view']['label'] = 'Sorter';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'isotope_example:sorter';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Color */
  $handler->display->display_options['fields']['isotope_example_color']['id'] = 'isotope_example_color';
  $handler->display->display_options['fields']['isotope_example_color']['table'] = 'field_data_isotope_example_color';
  $handler->display->display_options['fields']['isotope_example_color']['field'] = 'isotope_example_color';
  /* Field: Content: Shape */
  $handler->display->display_options['fields']['isotope_example_shape']['id'] = 'isotope_example_shape';
  $handler->display->display_options['fields']['isotope_example_shape']['table'] = 'field_data_isotope_example_shape';
  $handler->display->display_options['fields']['isotope_example_shape']['field'] = 'isotope_example_shape';
  /* Field: Content: Size */
  $handler->display->display_options['fields']['isotope_example_size']['id'] = 'isotope_example_size';
  $handler->display->display_options['fields']['isotope_example_size']['table'] = 'field_data_isotope_example_size';
  $handler->display->display_options['fields']['isotope_example_size']['field'] = 'isotope_example_size';
  $handler->display->display_options['fields']['isotope_example_size']['element_label_colon'] = FALSE;
  /* Field: Content: event photo */
  $handler->display->display_options['fields']['field_event_photo']['id'] = 'field_event_photo';
  $handler->display->display_options['fields']['field_event_photo']['table'] = 'field_data_field_event_photo';
  $handler->display->display_options['fields']['field_event_photo']['field'] = 'field_event_photo';
  $handler->display->display_options['fields']['field_event_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tree_event' => 'tree_event',
  );
  $handler->display->display_options['path'] = 'isotope-example/events';

  /* Display: Sorter */
  $handler = $view->new_display('block', 'Sorter', 'sorter');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_sorter';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'isotope_example_color' => 'isotope_example_color',
    'isotope_example_shape' => 'isotope_example_shape',
    'isotope_example_size' => 'isotope_example_size',
    'title' => 0,
  );
  $handler->display->display_options['style_options']['original'] = 'Original';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Color Filter */
  $handler = $view->new_display('block', 'Color Filter', 'color_filter');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_filter';
  $handler->display->display_options['style_options']['filter_group'] = 'Color';
  $handler->display->display_options['style_options']['data_fields'] = 'isotope_example_color';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Color */
  $handler->display->display_options['fields']['isotope_example_color']['id'] = 'isotope_example_color';
  $handler->display->display_options['fields']['isotope_example_color']['table'] = 'field_data_isotope_example_color';
  $handler->display->display_options['fields']['isotope_example_color']['field'] = 'isotope_example_color';
  $handler->display->display_options['fields']['isotope_example_color']['label'] = '';
  $handler->display->display_options['fields']['isotope_example_color']['element_label_colon'] = FALSE;

  /* Display: Size Filter */
  $handler = $view->new_display('block', 'Size Filter', 'size_filter');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_filter';
  $handler->display->display_options['style_options']['filter_group'] = 'Size';
  $handler->display->display_options['style_options']['data_fields'] = 'isotope_example_size';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Size */
  $handler->display->display_options['fields']['isotope_example_size']['id'] = 'isotope_example_size';
  $handler->display->display_options['fields']['isotope_example_size']['table'] = 'field_data_isotope_example_size';
  $handler->display->display_options['fields']['isotope_example_size']['field'] = 'isotope_example_size';
  $handler->display->display_options['fields']['isotope_example_size']['label'] = '';
  $handler->display->display_options['fields']['isotope_example_size']['element_label_colon'] = FALSE;

  /* Display: Shape Filter */
  $handler = $view->new_display('block', 'Shape Filter', 'shape_filter');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_filter';
  $handler->display->display_options['style_options']['filter_group'] = 'Shape';
  $handler->display->display_options['style_options']['data_fields'] = 'isotope_example_shape';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Shape */
  $handler->display->display_options['fields']['isotope_example_shape']['id'] = 'isotope_example_shape';
  $handler->display->display_options['fields']['isotope_example_shape']['table'] = 'field_data_isotope_example_shape';
  $handler->display->display_options['fields']['isotope_example_shape']['field'] = 'isotope_example_shape';
  $handler->display->display_options['fields']['isotope_example_shape']['label'] = '';
  $handler->display->display_options['fields']['isotope_example_shape']['element_label_colon'] = FALSE;
  $translatables['events'] = array(
    t('Master'),
    t('Isotope Example'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Color'),
    t('Shape'),
    t('Size'),
    t('Page'),
    t('You can explore this example for yourself at <strong>/admin/structure/views/view/isotope_example/edit/</strong>'),
    t('Sorter'),
    t('event photo'),
    t('Color Filter'),
    t('Size Filter'),
    t('Shape Filter'),
  );
  $export['events'] = $view;

  $view = new view();
  $view->name = 'test_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events Page';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h6';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'pack-header';
  /* Field: Content: event photo */
  $handler->display->display_options['fields']['field_event_photo']['id'] = 'field_event_photo';
  $handler->display->display_options['fields']['field_event_photo']['table'] = 'field_data_field_event_photo';
  $handler->display->display_options['fields']['field_event_photo']['field'] = 'field_event_photo';
  $handler->display->display_options['fields']['field_event_photo']['label'] = '';
  $handler->display->display_options['fields']['field_event_photo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['path'] = 'Events';
  $translatables['test_events'] = array(
    t('Master'),
    t('Events Page'),
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
  );
  $export['test_events'] = $view;

  $view = new view();
  $view->name = 'tree_events';
  $view->description = '';
  $view->tag = 'Documents';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'sort' => array(
      'bef_format' => 'bef_toggle_links',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_rewrite' => 'Relevance Asc|Most relevant
Relevance Desc|Least relevant',
        'reset' => 0,
        'reset_label' => '',
        'is_secondary' => 0,
      ),
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no results';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Indexed Node: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Contact Email */
  $handler->display->display_options['fields']['field_event_email']['id'] = 'field_event_email';
  $handler->display->display_options['fields']['field_event_email']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_event_email']['field'] = 'field_event_email';
  $handler->display->display_options['fields']['field_event_email']['label'] = '';
  $handler->display->display_options['fields']['field_event_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_email']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_event_telephone']['id'] = 'field_event_telephone';
  $handler->display->display_options['fields']['field_event_telephone']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_event_telephone']['field'] = 'field_event_telephone';
  $handler->display->display_options['fields']['field_event_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_event_telephone']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[title_field]<br />
[field_event_date]<br />
[field_address]<br />
[field_event_telephone]<br />
[field_event_email]<br />';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Contextual filter: Indexed Node: Groups audience */
  $handler->display->display_options['arguments']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['arguments']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['arguments']['og_group_ref']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['og_group_ref']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref']['not'] = 0;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tree_event' => 'tree_event',
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search Events';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
  );

  /* Display: List */
  $handler = $view->new_display('panel_pane', 'List', 'list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['mefibs'] = array(
    'blocks' => array(
      0 => array(
        'name' => 'Sorts',
        'machine_name' => 'sorts',
      ),
    ),
    'extras' => array(
      'sort' => NULL,
      'items_per_page' => NULL,
    ),
    'list' => array(
      'sort_block' => 'sorts',
      'filter' => array(),
    ),
  );
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'og_group_ref' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indexed Node: Groups audience',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Calendar */
  $handler = $view->new_display('panel_pane', 'Calendar', 'calendar');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['editable'] = TRUE;
  $handler->display->display_options['style_options']['times']['date'] = array(
    'year' => '2014',
    'month' => '1',
    'day' => '1',
  );
  $handler->display->display_options['style_options']['fields']['title_field'] = 'title_field';
  $handler->display->display_options['style_options']['fields']['title'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'og_group_ref' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indexed Node: Groups audience',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: iCal */
  $handler = $view->new_display('feed', 'iCal', 'ical');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['style_options']['cal_name'] = '';
  $handler->display->display_options['row_plugin'] = 'date_ical_fields';
  $handler->display->display_options['row_options']['date_field'] = 'first_available';
  $handler->display->display_options['row_options']['title_field'] = 'title_field';
  $handler->display->display_options['row_options']['additional_settings'] = array(
    'skip_blank_dates' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Contact Email */
  $handler->display->display_options['fields']['field_event_email']['id'] = 'field_event_email';
  $handler->display->display_options['fields']['field_event_email']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_event_email']['field'] = 'field_event_email';
  $handler->display->display_options['fields']['field_event_email']['label'] = '';
  $handler->display->display_options['fields']['field_event_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_email']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_event_telephone']['id'] = 'field_event_telephone';
  $handler->display->display_options['fields']['field_event_telephone']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_event_telephone']['field'] = 'field_event_telephone';
  $handler->display->display_options['fields']['field_event_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_event_telephone']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[title_field]<br />
[field_event_date]<br />
[field_address]<br />
[field_event_telephone]<br />
[field_event_email]<br />';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/events/ical';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'list' => 0,
    'calendar' => 0,
  );
  $translatables['tree_events'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('There are no results'),
    t('[title_field]<br />
[field_event_date]<br />
[field_address]<br />
[field_event_telephone]<br />
[field_event_email]<br />'),
    t('Relevance'),
    t('All'),
    t('Search Events'),
    t('List'),
    t('Events'),
    t('Calendar'),
    t('iCal'),
  );
  $export['tree_events'] = $view;

  $view = new view();
  $view->name = 'tree_events_panes';
  $view->description = '';
  $view->tag = 'Documents';
  $view->base_table = 'node';
  $view->human_name = 'Events Panes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['arguments']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['og_group_ref_target_id']['summary_options']['items_per_page'] = '25';
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

  /* Display: Upcoming */
  $handler = $view->new_display('panel_pane', 'Upcoming', 'upcoming');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Groups audience (og_group_ref) */
  $handler->display->display_options['filters']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator_id'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['label'] = 'Space';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['operator'] = 'og_group_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['identifier'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_bundles_target_id']['id'] = 'field_bundles_target_id';
  $handler->display->display_options['filters']['field_bundles_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['field_bundles_target_id']['field'] = 'field_bundles_target_id';
  $handler->display->display_options['filters']['field_bundles_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_bundles_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bundles_target_id']['expose']['operator_id'] = 'field_bundles_target_id_op';
  $handler->display->display_options['filters']['field_bundles_target_id']['expose']['label'] = 'Clusters/Sectors';
  $handler->display->display_options['filters']['field_bundles_target_id']['expose']['operator'] = 'field_bundles_target_id_op';
  $handler->display->display_options['filters']['field_bundles_target_id']['expose']['identifier'] = 'field_bundles_target_id';
  $handler->display->display_options['filters']['field_bundles_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_coordination_hubs_target_id']['id'] = 'field_coordination_hubs_target_id';
  $handler->display->display_options['filters']['field_coordination_hubs_target_id']['table'] = 'field_data_field_coordination_hubs';
  $handler->display->display_options['filters']['field_coordination_hubs_target_id']['field'] = 'field_coordination_hubs_target_id';
  $handler->display->display_options['filters']['field_coordination_hubs_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_coordination_hubs_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_coordination_hubs_target_id']['expose']['operator_id'] = 'field_coordination_hubs_target_id_op';
  $handler->display->display_options['filters']['field_coordination_hubs_target_id']['expose']['label'] = 'Coordination hubs';
  $handler->display->display_options['filters']['field_coordination_hubs_target_id']['expose']['operator'] = 'field_coordination_hubs_target_id_op';
  $handler->display->display_options['filters']['field_coordination_hubs_target_id']['expose']['identifier'] = 'field_coordination_hubs_target_id';
  $handler->display->display_options['filters']['field_coordination_hubs_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_disasters_target_id']['id'] = 'field_disasters_target_id';
  $handler->display->display_options['filters']['field_disasters_target_id']['table'] = 'field_data_field_disasters';
  $handler->display->display_options['filters']['field_disasters_target_id']['field'] = 'field_disasters_target_id';
  $handler->display->display_options['filters']['field_disasters_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_disasters_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_disasters_target_id']['expose']['operator_id'] = 'field_disasters_target_id_op';
  $handler->display->display_options['filters']['field_disasters_target_id']['expose']['label'] = 'Disasters';
  $handler->display->display_options['filters']['field_disasters_target_id']['expose']['operator'] = 'field_disasters_target_id_op';
  $handler->display->display_options['filters']['field_disasters_target_id']['expose']['identifier'] = 'field_disasters_target_id';
  $handler->display->display_options['filters']['field_disasters_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Content: Locations (field_locations) */
  $handler->display->display_options['filters']['field_locations_target_id']['id'] = 'field_locations_target_id';
  $handler->display->display_options['filters']['field_locations_target_id']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_target_id']['field'] = 'field_locations_target_id';
  $handler->display->display_options['filters']['field_locations_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_target_id']['expose']['operator_id'] = 'field_locations_target_id_op';
  $handler->display->display_options['filters']['field_locations_target_id']['expose']['label'] = 'Locations';
  $handler->display->display_options['filters']['field_locations_target_id']['expose']['operator'] = 'field_locations_target_id_op';
  $handler->display->display_options['filters']['field_locations_target_id']['expose']['identifier'] = 'field_locations_target_id';
  $handler->display->display_options['filters']['field_locations_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_themes_target_id']['id'] = 'field_themes_target_id';
  $handler->display->display_options['filters']['field_themes_target_id']['table'] = 'field_data_field_themes';
  $handler->display->display_options['filters']['field_themes_target_id']['field'] = 'field_themes_target_id';
  $handler->display->display_options['filters']['field_themes_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_themes_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_themes_target_id']['expose']['operator_id'] = 'field_themes_target_id_op';
  $handler->display->display_options['filters']['field_themes_target_id']['expose']['label'] = 'Themes';
  $handler->display->display_options['filters']['field_themes_target_id']['expose']['operator'] = 'field_themes_target_id_op';
  $handler->display->display_options['filters']['field_themes_target_id']['expose']['identifier'] = 'field_themes_target_id';
  $handler->display->display_options['filters']['field_themes_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Content: Event Category (field_event_category) */
  $handler->display->display_options['filters']['field_event_category_target_id']['id'] = 'field_event_category_target_id';
  $handler->display->display_options['filters']['field_event_category_target_id']['table'] = 'field_data_field_event_category';
  $handler->display->display_options['filters']['field_event_category_target_id']['field'] = 'field_event_category_target_id';
  $handler->display->display_options['filters']['field_event_category_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_event_category_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_category_target_id']['expose']['operator_id'] = 'field_event_category_target_id_op';
  $handler->display->display_options['filters']['field_event_category_target_id']['expose']['label'] = 'Event Category';
  $handler->display->display_options['filters']['field_event_category_target_id']['expose']['operator'] = 'field_event_category_target_id_op';
  $handler->display->display_options['filters']['field_event_category_target_id']['expose']['identifier'] = 'field_event_category_target_id';
  $handler->display->display_options['filters']['field_event_category_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['pane_title'] = 'Upcoming Events';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'og_group_ref_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Group',
    ),
  );
  $translatables['tree_events_panes'] = array(
    t('Master'),
    t('Upcoming Events'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Upcoming'),
    t('Space'),
    t('Clusters/Sectors'),
    t('Coordination hubs'),
    t('Disasters'),
    t('Locations'),
    t('Themes'),
    t('Event Category'),
    t('Events'),
  );
  $export['tree_events_panes'] = $view;

  return $export;
}
