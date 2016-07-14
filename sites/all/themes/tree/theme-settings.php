<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */

function tree_form_alter(&$form, &$form_state, $form_id) {
  dsm($form);
   switch ($form_id) {
    case 'system_theme_settings':

      $form['theme_settings_general'] = array(
        '#type' => 'vertical_tabs',
      );

      $form_elements = element_children($form);
      foreach ($form_elements as $element) {

        if ( isset($form[$element]['#type'])
              && $form[$element]['#type'] == 'fieldset'
              && !isset($form['#element']['#group'])) {
          $form[$element]['#group'] = 'theme_settings_general';
          $form[$element]['#attached'] = array(
            'js' => array(drupal_get_path('module', 'themesettings_verticaltabs') . '/themesettings_verticaltabs.js'),
          );
        }
      }

      // extra submit callback
      array_unshift($form['#submit'], '_themesettings_verticaltabs_submit');

      // remove unnecessary CSS class, fixes whitespace problem
      unset($form['logo']['#attributes']['class']);
	  
	  
	  
	  	  
  }
  
 
  
  
  
 
}  


function tree_buttons_form_submit($form, &$form_state){
    $values = $form_state['values'];
}




function tree_form_system_theme_settings_alter(&$form, &$form_state) {
	
    // Default path for image
     $bg_path = theme_get_setting('bg_path');
     if (file_uri_scheme($bg_path) == 'public') {
       $bg_path = file_uri_target($bg_path);
     }
	 
     // Breadcrumbs
     $form['options']['general']['breadcrumbs'] = array(
       '#type' => 'checkbox',
       '#title' => 'Breadcrumbs',
       '#default_value' => theme_get_setting('breadcrumbs'),
     );
        
     // SEO
     $form['options']['general']['seo'] = array(
       '#type' => 'fieldset',
       '#title' => '<div class="plus"></div><h3 class="options_heading">SEO</h3>',
     );
    
       // SEO Title
       $form['options']['general']['seo']['seo_title'] = array(
         '#type' => 'textfield',
         '#title' => 'Title',
         '#default_value' => theme_get_setting('seo_title'),
       );
      
        // SEO Description
       $form['options']['general']['seo']['seo_description'] = array(
         '#type' => 'textarea',
         '#title' => 'Description',
         '#default_value' => theme_get_setting('seo_description'),
       );
      
        // SEO Keywords
       $form['options']['general']['seo']['seo_keywords'] = array(
         '#type' => 'textarea',
         '#title' => 'Keywords',
         '#default_value' => theme_get_setting('seo_keywords'),
       );
        
    
    // Social Icons
  $form['options']['header']['social'] = array(
    '#type' => 'fieldset',
    '#title' => '<div class="plus"></div><h3 class="options_heading">Social Icons</h3>',
  );
  
    // Twitter Icon
    $form['options']['header']['social']['twitter_icon'] = array(
      '#type' => 'checkbox',
      '#title' => 'Twitter Icon',
      '#default_value' => theme_get_setting('twitter_icon'),
    );
    
    // Twitter Icon URL
    $form['options']['header']['social']['twitter_url'] = array(
      '#type' => 'textfield',
      '#title' => 'Twitter URL',
      '#default_value' => theme_get_setting('twitter_url'),
      '#size' => 10,
      '#maxlenght' => 10,
      '#states' => array (
        'invisible' => array(
          'input[name="twitter_icon"]' => array('checked' => FALSE)
        )
      )
    );
    
    // Facebook Icon
    $form['options']['header']['social']['facebook_icon'] = array(
      '#type' => 'checkbox',
      '#title' => 'Facebook Icon',
      '#default_value' => theme_get_setting('facebook_icon'),
    );
    
    // Facebook Icon URL
    $form['options']['header']['social']['facebook_url'] = array(
      '#type' => 'textfield',
      '#title' => 'Facebook URL',
      '#default_value' => theme_get_setting('facebook_url'),
      '#states' => array (
        'invisible' => array(
          'input[name="facebook_icon"]' => array('checked' => FALSE)
        )
      )
    );
    
    // Flickr Icon
    $form['options']['header']['social']['flickr_icon'] = array(
      '#type' => 'checkbox',
      '#title' => 'Flickr Icon',
      '#default_value' => theme_get_setting('flickr_icon'),
    );
    
    // Flickr Icon URL
    $form['options']['header']['social']['flickr_url'] = array(
      '#type' => 'textfield',
      '#title' => 'Flickr URL',
      '#default_value' => theme_get_setting('flickr_url'),
      '#states' => array (
        'invisible' => array(
          'input[name="flickr_icon"]' => array('checked' => FALSE)
        )
      )
    );
    
    // Google Plus Icon
    $form['options']['header']['social']['google_plus_icon'] = array(
      '#type' => 'checkbox',
      '#title' => 'Google+ Icon',
      '#default_value' => theme_get_setting('google_plus_icon'),
    );
    
    // Google Plus URL
    $form['options']['header']['social']['google_plus_url'] = array(
      '#type' => 'textfield',
      '#title' => 'Google+ URL',
      '#default_value' => theme_get_setting('google_plus_url'),
      '#states' => array (
        'invisible' => array(
          'input[name="google_plus_icon"]' => array('checked' => FALSE)
        )
      )
    );
    
     // Pinterest Icon
    $form['options']['header']['social']['pinterest_icon'] = array(
      '#type' => 'checkbox',
      '#title' => 'Pinterest Icon',
      '#default_value' => theme_get_setting('pinterest_icon'),
    );
    
    // Pinterest URL
    $form['options']['header']['social']['pinterest_url'] = array(
      '#type' => 'textfield',
      '#title' => 'Pinterest URL',
      '#default_value' => theme_get_setting('pinterest_url'),
      '#states' => array (
        'invisible' => array(
          'input[name="pinterest_icon"]' => array('checked' => FALSE)
        )
      )
    );
    
     // LinkedIn Icon
    $form['options']['header']['social']['linkedin_icon'] = array(
      '#type' => 'checkbox',
      '#title' => 'LinkedIn Icon',
      '#default_value' => theme_get_setting('linkedin_icon'),
    );
    
    // linkedin URL
    $form['options']['header']['social']['linkedin_url'] = array(
      '#type' => 'textfield',
      '#title' => 'LinkedIn URL',
      '#default_value' => theme_get_setting('linkedin_url'),
      '#states' => array (
        'invisible' => array(
          'input[name="linkedin_icon"]' => array('checked' => FALSE)
        )
      )
    );

    // Youtube Icon
    $form['options']['header']['social']['youtube_icon'] = array(
      '#type' => 'checkbox',
      '#title' => 'Youtube Icon',
      '#default_value' => theme_get_setting('youtube_icon'),
    );
    
    // Youtube URL
    $form['options']['header']['social']['youtube_url'] = array(
      '#type' => 'textfield',
      '#title' => 'Youtube URL',
      '#default_value' => theme_get_setting('youtube_url'),
      '#states' => array (
        'invisible' => array(
          'input[name="youtube_icon"]' => array('checked' => FALSE)
        )
      )
    );
    
    // Vimeo Icon
    $form['options']['header']['social']['vimeo_icon'] = array(
      '#type' => 'checkbox',
      '#title' => 'Vimeo Icon',
      '#default_value' => theme_get_setting('vimeo_icon'),
    );
    
    // Youtube URL
    $form['options']['header']['social']['vimeo_url'] = array(
      '#type' => 'textfield',
      '#title' => 'Vimeo URL',
      '#default_value' => theme_get_setting('vimeo_url'),
      '#states' => array (
        'invisible' => array(
          'input[name="vimeo_icon"]' => array('checked' => FALSE)
        )
      )
    );

    // RSS Icon
    $form['options']['header']['social']['rss_icon'] = array(
      '#type' => 'checkbox',
      '#title' => 'RSS Icon',
      '#default_value' => theme_get_setting('rss_icon'),
    );
    
    // Twitter URL
    $form['options']['header']['social']['rss_url'] = array(
      '#type' => 'textfield',
      '#title' => 'RSS URL',
      '#default_value' => theme_get_setting('rss_url'),
      '#states' => array (
        'invisible' => array(
          'input[name="rss_icon"]' => array('checked' => FALSE)
        )
      )
    );
	
    // Logo Toggle
    $form['options']['header']['branding']['branding_type'] = array(
      '#type' => 'select',
      '#title' => 'Branding Type',
      '#default_value' => theme_get_setting('branding_type'),
      '#options' => array(
        'logo' => 'Logo',
        'text' => 'Text',
      ),
    );

    $form['options']['header']['branding']['bg_path'] = array(
      '#type' => 'textfield',
      '#title' => 'Path to logo',
      '#default_value' => $bg_path,
      '#disabled' => TRUE,
      '#states' => array(
        'visible' => array('#edit-branding-type' => array('value' => 'logo')),
      ), 
    );

    $form['options']['header']['branding']['bg_upload'] = array(
      '#type' => 'file',
      '#title' => 'Upload logo',
      '#description' => 'Upload a new logo image.',
      '#states' => array(
        'visible' => array('#edit-branding-type' => array('value' => 'logo')),
      ), 
    );
	
	  $form['#submit'][] = 'blocks_settings_submit';
	
}

function blocks_settings_submit($form, &$form_state) {
  // Get the previous value
  $previous = 'public://' . $form['options']['header']['branding']['bg_path']['#default_value'] ;
  
  $file = file_save_upload('bg_upload');
  if ($file) {
    $parts = pathinfo($file->filename);
    $destination = 'public://' . $parts['basename'];
    $file->status = FILE_STATUS_PERMANENT;
    
    if(file_copy($file, $destination, FILE_EXISTS_REPLACE)) {
      $_POST['bg_path'] = $form_state['values']['bg_path'] = $destination;
      if ($destination != $previous) {
        return;
      }
    }
  } else {
    // Avoid error when the form is submitted without specifying a new image
    $_POST['bg_path'] = $form_state['values']['bg_path'] = $previous;
  }
  
}
