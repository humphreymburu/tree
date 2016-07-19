<?php
/**
 * @file
 * tree_themes.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tree_themes_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:themes_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:21:"panelizer_node:themes";s:23:"allowed_layout_settings";a:48:{s:8:"flexible";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"twocol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:17:"threecol_33_34_33";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:17:"threecol_25_50_25";b:1;s:6:"onecol";b:1;s:12:"radix_whelan";b:1;s:18:"radix_webb_flipped";b:1;s:10:"radix_webb";b:1;s:20:"radix_taylor_flipped";b:1;s:12:"radix_taylor";b:1;s:18:"radix_sutro_double";b:1;s:11:"radix_sutro";b:1;s:19:"radix_selby_flipped";b:1;s:11:"radix_selby";b:1;s:23:"radix_sanderson_flipped";b:1;s:15:"radix_sanderson";b:1;s:11:"radix_rolph";b:1;s:10:"radix_pond";b:1;s:12:"radix_phelan";b:1;s:21:"radix_moscone_flipped";b:1;s:13:"radix_moscone";b:1;s:14:"radix_mccoppin";b:1;s:21:"radix_hewston_flipped";b:1;s:13:"radix_hewston";b:1;s:12:"radix_harris";b:1;s:11:"radix_geary";b:1;s:18:"radix_burr_flipped";b:1;s:10:"radix_burr";b:1;s:20:"radix_bryant_flipped";b:1;s:12:"radix_bryant";b:1;s:11:"radix_brown";b:1;s:21:"radix_brenham_flipped";b:1;s:13:"radix_brenham";b:1;s:12:"radix_boxton";b:1;s:22:"radix_bartlett_flipped";b:1;s:14:"radix_bartlett";b:1;s:21:"foundation_6row_combo";b:1;s:15:"foundation_4col";b:1;s:23:"foundation_3col_stacked";b:1;s:15:"foundation_3col";b:1;s:23:"foundation_2col_stacked";b:1;s:22:"foundation_2col_bricks";b:1;s:15:"foundation_2col";b:1;s:15:"foundation_1col";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:themes_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:themes_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:themes_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:themes_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:themes_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:themes_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panelizer_node:themes_default'] = $strongarm;

  return $export;
}
