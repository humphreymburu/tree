<?php
/**
 * @file
 * tree_layout.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tree_layout_default_fe_block_boxes() {
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
UNITID Building<br/> Ground Floor<br/>Nairobi, &nbsp;<br/> Kenya</p></li>
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
<li><a href="?q=mission-and-values">Our Mission</a></li>
<li><a href="?q=researcher_list">Our Researchers</a></li>
<li><a href="#">Staff</a></li>
<li><a href="?q=get-involved">Get Involved</a></li>
<li><a href="#">Donate</a></li>
<li><a href="?q=contact_us">Contact Us</a></li>
<ul/>


';

  $export['other_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Map of Tree Location';
  $fe_block_boxes->format = 'gmap_macro';
  $fe_block_boxes->machine_name = 'tree_location';
  $fe_block_boxes->body = '[gmap markers=green::-1.2997069999999946,36.805728999999914 |zoom=15 |center=-1.2997069999999946,36.805728999999914 |width=100% |height=200px |control=Small |type=Map]
';

  $export['tree_location'] = $fe_block_boxes;

  return $export;
}
