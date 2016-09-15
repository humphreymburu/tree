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
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
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

  // Exported image style: home.
  $styles['home'] = array(
    'name' => 'home',
    'label' => 'home',
    'effects' => array(
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 634,
          'height' => 379,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: home_two.
  $styles['home_two'] = array(
    'name' => 'home_two',
    'label' => 'home_two',
    'effects' => array(
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

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
