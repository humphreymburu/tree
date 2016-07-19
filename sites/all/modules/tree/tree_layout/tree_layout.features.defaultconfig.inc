<?php
/**
 * @file
 * tree_layout.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function tree_layout_defaultconfig_features() {
  return array(
    'tree_layout' => array(
      'file_default_displays' => 'file_default_displays',
    ),
  );
}

/**
 * Implements hook_defaultconfig_file_default_displays().
 */
function tree_layout_defaultconfig_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__full__file_image';
  $file_display->weight = 5;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'large',
  );
  $export['image__full__file_image'] = $file_display;

  return $export;
}
