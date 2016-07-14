<?php
/**
 * @file
 * tree_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tree_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "isotope" && $api == "default_isotope_configurations") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
