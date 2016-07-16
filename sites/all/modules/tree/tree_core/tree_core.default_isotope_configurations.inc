<?php
/**
 * @file
 * tree_core.default_isotope_configurations.inc
 */

/**
 * Implements hook_default_isotope_configuration().
 */
function tree_core_default_isotope_configuration() {
  $export = array();

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->name = 'default_two';
  $config->admin_title = 'Default config two';
  $config->layoutMode = 'packery';
  $config->plugins = array(
    'imagesLoaded' => 'imagesLoaded',
  );
  $config->transitionDuration = '0';
  $config->urlFilters = TRUE;
  $config->isFitWidth = TRUE;
  $config->isHorizontal = FALSE;
  $config->stamp = '.stamp';
  $config->horizontalAlignment = '1';
  $config->verticalAlignment = '1';
  $config->isOriginLeft = TRUE;
  $export['default_two'] = $config;

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->name = 'vertical';
  $config->admin_title = 'verticals';
  $config->layoutMode = 'packery';
  $config->plugins = array(
    'imagesLoaded' => 'imagesLoaded',
  );
  $config->transitionDuration = '0';
  $config->urlFilters = FALSE;
  $config->isFitWidth = FALSE;
  $config->isHorizontal = FALSE;
  $config->stamp = '';
  $config->horizontalAlignment = '';
  $config->verticalAlignment = '1';
  $config->isOriginLeft = TRUE;
  $export['vertical'] = $config;

  return $export;
}
