<?php

/**
 * Implements template_preprocess_html().
 *
 */
//function tree_preprocess_html(&$variables) {
//  // Add conditional CSS for IE. To use uncomment below and add IE css file
//  drupal_add_css(path_to_theme() . '/css/ie.css', array('weight' => CSS_THEME, 'browsers' => array('!IE' => FALSE), 'preprocess' => FALSE));
//
//  // Need legacy support for IE downgrade to Foundation 2 or use JS file below
//  // drupal_add_js('http://ie7-js.googlecode.com/svn/version/2.1(beta4)/IE7.js', 'external');
//}

/**
 * Implements template_preprocess_page
 *
 */
//function tree_preprocess_page(&$variables) {
//}

/**
 * Implements template_preprocess_node
 *
 */
//function tree_preprocess_node(&$variables) {
//}

/**
 * Implements hook_preprocess_block()
 */
//function tree_preprocess_block(&$variables) {
//  // Add wrapping div with global class to all block content sections.
//  $variables['content_attributes_array']['class'][] = 'block-content';
//
//  // Convenience variable for classes based on block ID
//  $block_id = $variables['block']->module . '-' . $variables['block']->delta;
//
//  // Add classes based on a specific block
//  switch ($block_id) {
//    // System Navigation block
//    case 'system-navigation':
//      // Custom class for entire block
//      $variables['classes_array'][] = 'system-nav';
//      // Custom class for block title
//      $variables['title_attributes_array']['class'][] = 'system-nav-title';
//      // Wrapping div with custom class for block content
//      $variables['content_attributes_array']['class'] = 'system-nav-content';
//      break;
//
//    // User Login block
//    case 'user-login':
//      // Hide title
//      $variables['title_attributes_array']['class'][] = 'element-invisible';
//      break;
//
//    // Example of adding Foundation classes
//    case 'block-foo': // Target the block ID
//      // Set grid column or mobile classes or anything else you want.
//      $variables['classes_array'][] = 'six columns';
//      break;
//  }
//
//  // Add template suggestions for blocks from specific modules.
//  switch($variables['elements']['#block']->module) {
//    case 'menu':
//      $variables['theme_hook_suggestions'][] = 'block__nav';
//    break;
//  }
//}


function tree_preprocess_block(&$vars) {
  /* Set shortcut variables. Hooray for less typing! */
  $block_id = $vars['block']->module . '-' . $vars['block']->delta;
  $classes = &$vars['classes_array'];
  $title_classes = &$vars['title_attributes_array']['class'];
  $content_classes = &$vars['content_attributes_array']['class'];
 
  /* Add global classes to all blocks */
  $title_classes[] = 'block-title';
  $content_classes[] = 'block-content';
 
  /* Uncomment the line below to see variables you can use to target a field */
  #print $block_id . '<br/>';
 
  /* Add classes based on the block delta. */
  switch ($block_id) {
    /* System Navigation block */
    case 'tree_layout_login':
      $classes[] = 'block-rounded';
      $title_classes[] = 'block-fancy-title';
      $content_classes[] = 'block-fancy-content';
      break;
    /* Main Menu block */
    case 'system-main-menu':
    /* User Login block */
    case 'user-login':
      $title_classes[] = 'element-invisible';
      break;
  }
}

function tree_preprocess_views_view(&$variables) {

  $view = &$variables['view'];
  // Make sure it's the correct view
 if ($view->name == 'test_events') {
   //add needed javascript
      drupal_add_js(drupal_get_path('theme', 'tree') . '/js/grids/packeries.js', array(
       'type' => 'file',
       'group' => JS_THEME,
      ));

  //drupal_add_js(drupal_get_path('tree',$GLOBALS['tree']) .'/js/grids/packeries.js
  }   
  
  
 
  elseif ($view->name == 'research') {
      drupal_add_js(drupal_get_path('theme', 'tree') . '/js/grids/treatment.js', array(
       'type' => 'file',
       'group' => JS_THEME,
      ));
  } 
  
  
  elseif ($view->name == 'treatment') {
      drupal_add_js(drupal_get_path('theme', 'tree') . '/js/grids/treatment.js', array(
       'type' => 'file',
       'group' => JS_THEME,
      ));
  } 
  
  
  elseif ($view->name == 'education') {
      drupal_add_js(drupal_get_path('theme', 'tree') . '/js/grids/treatment.js', array(
       'type' => 'file',
       'group' => JS_THEME,
      ));
  } 
  
  
  elseif ($view->name == 'tree') {
        drupal_add_js(drupal_get_path('theme', 'tree') . '/js/grids/tree.js', array(
         'type' => 'file',
         'group' => JS_THEME,
        ));
    } 
	
	

  
  elseif ($view->name == 'resources') {
      drupal_add_js(drupal_get_path('theme', 'tree') . '/js/grids/resources.js', array(
       'type' => 'file',
       'group' => JS_THEME,
      ));
  }  

  if ($view->name == 'staff') {
    //add needed javascript
       drupal_add_js(drupal_get_path('theme', 'tree') . '/js/grids/profile.js', array(
        'type' => 'file',
        'group' => JS_THEME,
       ));

   //drupal_add_js(drupal_get_path('tree',$GLOBALS['tree']) .'/js/grids/packeries.js
   }   
  
 
 
  
 
}

/**
 * Assign top level menu list items an ascending class of menu_$number.
 */



/**
 * Put Breadcrumbs in a ul li structure and add descending z-index style to each <a href> tag.
*function tree_breadcrumb($variables) {
  *$count = '100';
  *$breadcrumb = $variables['breadcrumb'];
 *$crumbs = '';
  *if (!empty($breadcrumb)) { 
   * foreach($breadcrumb as $value) {
    *  $count = $count - 1;
     * $style = ' style="z-index:'.$count.';"';
      *$pos = strpos( $value, ">"); 
      *$temp1=substr($value,0,$pos);
      *$temp2=substr($value,$pos,$pos);
      *$crumbs = $value.'/ ';
    *} 
 * }
  *return $crumbs;
*}
*/
/**
 * Add various META tags to HTML head..
 */
function tree_preprocess_html(&$vars){
  global $root;
  $meta_title = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#weight' => 1,
    '#attributes' => array(
      'name' => 'title',
      'content' => theme_get_setting('seo_title')
    )
  );
  $meta_description = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#weight' => 2,
    '#attributes' => array(
      'name' => 'description',
      'content' => theme_get_setting('seo_description')
    )
  );
  $meta_keywords = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#weight' => 3,
    '#attributes' => array(
      'name' => 'keywords',
      'content' => theme_get_setting('seo_keywords')
    )
  );
    
  if (theme_get_setting('seo_title') != "") {
    drupal_add_html_head( $meta_title, 'meta_title' );
  }
   if (theme_get_setting('seo_description') != "") {
    drupal_add_html_head( $meta_description, 'meta_description' );
  }
  if (theme_get_setting('seo_keywords') != "") {
    drupal_add_html_head( $meta_keywords, 'meta_keywords' );
  } 
}





function tree_links__topbar_main_menu($variables) {
  // We need to fetch the links ourselves because we need the entire tree.
  $links = menu_tree_output(menu_tree_all_data(variable_get('menu_main_links_source', 'main-menu')));
  $output = _zurb_foundation_links($links);
  $variables['attributes']['class'][] = 'right';

  $searchFormItem = '<li class="has-form">
        <form method="GET" action="' . $GLOBALS['base_url'] . '/search/content/">
          <div class="row collapse">
            <div class="large-8 small-9 columns"">
              <input type="text" name="keys">
            </div>
            <div class="large-4 small-3 columns">
			<button type="submit" class="js_toggler"><i class="step fi-magnifying-glass size-18"></i>
			  </button>
			  
	
			  
            </div>
          </div>
        </form>
      </li>';

  return '<ul class="right"' . drupal_attributes($variables['attributes']) . '>' . $output . $searchFormItem . '</ul>';
}


/**
 * Implements template_preprocess_panels_pane().
 *
 */
//function tree_preprocess_panels_pane(&$variables) {
//}

/**
 * Implements template_preprocess_views_views_fields().
 *
 */
//function tree_preprocess_views_view_fields(&$variables) {

//}

/**
 * Implements theme_form_element_label()
 * Use foundation tooltips
 */
//function tree_form_element_label($variables) {
//  if (!empty($variables['element']['#title'])) {
//    $variables['element']['#title'] = '<span class="secondary label">' . $variables['element']['#title'] . '</span>';
//  }
//  if (!empty($variables['element']['#description'])) {
//    $variables['element']['#description'] = ' <span data-tooltip="top" class="has-tip tip-top" data-width="250" title="' . $variables['element']['#description'] . '">' . t('More information?') . '</span>';
//  }
//  return theme_form_element_label($variables);
//}

/**
 * Implements hook_preprocess_button().
 */
//function tree_preprocess_button(&$variables) {
//  $variables['element']['#attributes']['class'][] = 'button';
//  if (isset($variables['element']['#parents'][0]) && $variables['element']['#parents'][0] == 'submit') {
//    $variables['element']['#attributes']['class'][] = 'secondary';
//  }
//}

/**
 * Implements hook_form_alter()
 * Example of using foundation sexy buttons
 */
//function tree_form_alter(&$form, &$form_state, $form_id) {
//  // Sexy submit buttons
//  if (!empty($form['actions']) && !empty($form['actions']['submit'])) {
//    $classes = (is_array($form['actions']['submit']['#attributes']['class']))
//      ? $form['actions']['submit']['#attributes']['class']
//      : array();
//    $classes = array_merge($classes, array('secondary', 'button', 'radius'));
//    $form['actions']['submit']['#attributes']['class'] = $classes;
//  }
//}

/**
 * Implements hook_form_FORM_ID_alter()
 * Example of using foundation sexy buttons on comment form
 */
//function tree_form_comment_form_alter(&$form, &$form_state) {
  // Sexy preview buttons
//  $classes = (is_array($form['actions']['preview']['#attributes']['class']))
//    ? $form['actions']['preview']['#attributes']['class']
//    : array();
//  $classes = array_merge($classes, array('secondary', 'button', 'radius'));
//  $form['actions']['preview']['#attributes']['class'] = $classes;
//}


/**
 * Implements template_preprocess_panels_pane().
 */
// function zurb_foundation_preprocess_panels_pane(&$variables) {
// }

/**
* Implements template_preprocess_views_views_fields().
*/
/* Delete me to enable
function THEMENAME_preprocess_views_view_fields(&$variables) {
 if ($variables['view']->name == 'nodequeue_1') {

   // Check if we have both an image and a summary
   if (isset($variables['fields']['field_image'])) {

     // If a combined field has been created, unset it and just show image
     if (isset($variables['fields']['nothing'])) {
       unset($variables['fields']['nothing']);
     }

   } elseif (isset($variables['fields']['title'])) {
     unset ($variables['fields']['title']);
   }

   // Always unset the separate summary if set
   if (isset($variables['fields']['field_summary'])) {
     unset($variables['fields']['field_summary']);
   }
 }
}

// */

/**
 * Implements hook_css_alter().
 */
//function tree_css_alter(&$css) {
//  // Always remove base theme CSS.
//  $theme_path = drupal_get_path('theme', 'zurb_foundation');
//
//  foreach($css as $path => $values) {
//    if(strpos($path, $theme_path) === 0) {
//      unset($css[$path]);
//    }
//  }
//}

/**
 * Implements hook_js_alter().
 */
//function tree_js_alter(&$js) {
//  // Always remove base theme JS.
//  $theme_path = drupal_get_path('theme', 'zurb_foundation');
//
//  foreach($js as $path => $values) {
//    if(strpos($path, $theme_path) === 0) {
//      unset($js[$path]);
//    }
//  }
//}
