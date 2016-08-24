<?php
/**
 * @file
 * tree_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tree_layout_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tree_layout_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function tree_layout_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['F  d'] = 'F  d';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function tree_layout_date_format_types() {
  $format_types = array();
  // Exported date format type: events
  $format_types['events'] = 'Events';
  return $format_types;
}

/**
 * Implements hook_image_default_styles().
 */
function tree_layout_image_default_styles() {
  $styles = array();

  // Exported image style: themes.
  $styles['themes'] = array(
    'name' => 'themes',
    'label' => 'Themes',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tree_layout_node_info() {
  $items = array(
    'simplenews' => array(
      'name' => t('Simplenews newsletter'),
      'base' => 'node_content',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
