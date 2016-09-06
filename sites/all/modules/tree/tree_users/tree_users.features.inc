<?php
/**
 * @file
 * tree_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tree_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tree_users_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function tree_users_image_default_styles() {
  $styles = array();

  // Exported image style: staff.
  $styles['staff'] = array(
    'name' => 'staff',
    'label' => 'staff',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 318,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: staff_one.
  $styles['staff_one'] = array(
    'name' => 'staff_one',
    'label' => 'staff_one',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_profile2_type().
 */
function tree_users_default_profile2_type() {
  $items = array();
  $items['tree_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "tree_profile",
    "label" : "Tree Profile",
    "weight" : "0",
    "data" : { "registration" : 0, "roles" : { "2" : "2" }, "use_page" : 0 }
  }');
  return $items;
}
