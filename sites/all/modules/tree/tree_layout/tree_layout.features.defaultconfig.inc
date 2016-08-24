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
      'default_fe_block_boxes' => 'default_fe_block_boxes',
      'file_default_displays' => 'file_default_displays',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_fe_block_boxes().
 */
function tree_layout_defaultconfig_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'About Tree';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'about_us';
  $fe_block_boxes->body = '<p>Treatment, Research, and Expert Education (TREE) is dedicated to addressing the health needs of people living in resource-limited settings through quality medical care, academic research, training and education.<a href="About_us" style="font-size: 13.008px; font-weight: normal; line-height: 1.538em;"> &gt;&gt; More</a></p>';

  $export['about_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contacts';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'contacts';
  $fe_block_boxes->body = '<ul class="contact">
        <li><p><i class="step fi-marker size-18"></i>Kenyatta National Hospital
UNITID Building Ground Floor,Nairobi, Kenya</p></li>
        <li><p><i class="step fi-telephone size-18"></i>(254)/0731112512</p></li>
        <li><p><i class="step fi-mail size-18"></i>info@tree4health.org</p></li>
      </ul>
';

  $export['contacts'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer links';
  $fe_block_boxes->format = 'panopoly_html_text';
  $fe_block_boxes->machine_name = 'other_links';
  $fe_block_boxes->body = '<ul class="footer-links">
<li><a href="#">Donate</a></li>
<li><a href="../get-involved">Get Involved</a></li>
<li><a href="../mission-and-values">Our Mission</a></li>
<li><a href="../researcher_list">Our Researchers</a></li>
<li><a href="../contact_us">Contact Us</a></li>
<li><a href="#">Staff</a></li>
<ul/>



';

  $export['other_links'] = $fe_block_boxes;

  return $export;
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
