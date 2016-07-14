<?php
/**
 * @file
 * tree_themes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tree_themes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
