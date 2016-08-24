<!--.page -->
<div role="document" class="page">

  <!--.l-header -->
  <header role="banner" class="l-header">

   <div class="wrapper">
     <div class="top_bar">    
       <div class="row collapse">
         <div class="large-4 columns">
           <ul class="header_icons left">
             <?php if (theme_get_setting('twitter_icon') == '1' ): ?>
             <li>
               <a href="<?php echo theme_get_setting('twitter_url'); ?>" target="_blank">
                 <i class="step fi-social-twitter size-18">
                 </i>
               </a>
             </li>
             <?php endif ?>
             <?php if (theme_get_setting('facebook_icon') == '1' ): ?>
             <li>
               <a href="<?php echo theme_get_setting('facebook_url'); ?>" target="_blank">
                 <i class="step fi-social-facebook size-18">
                 </i>
               </a>
             </li>
             <?php endif ?>
             <?php if (theme_get_setting('google_plus_icon') == '1' ): ?>
             <li>
               <a href="<?php echo theme_get_setting('google_plus_url'); ?>" target="_blank">
                 <i class="step fi-social-google-plus size-18">
                 </i>
               </a>
             </li>
             <?php endif ?>
             <?php if (theme_get_setting('youtube_icon') == '1' ): ?>
             <li>
               <a href="<?php echo theme_get_setting('youtube_url'); ?>" target="_blank">
                 <i class="step fi-social-youtube size-18">
                 </i>
               </a>
             </li>
             <?php endif ?>    
           </ul>
         </div>
	  <?php if (!empty($page['featured'])): ?>
	    <div class="large-5 columns">
	      <?php print render($page['featured']); ?>
	    </div>
	  <!--/.l-featured -->
	  <?php endif; ?>
	  
         <?php if (!empty($page['top_region'])): ?>
         <!--.l-header-region -->
         <div class="large-3 columns">
           <ul class="header_icons">
             <li>
               <?php print render($page['top_region']); ?>
             </li>
           </ul>
         </div>
         <?php endif; ?> 
       </div>
     </div>
   </div>

   <div class="row">
	   <div class="large-3 columns">
       <div class="logo">
         <?php if (theme_get_setting('branding_type') == 'logo'): ?>
         <a href="<?php print base_path();?>">
           <img src="<?php print file_create_url(theme_get_setting('bg_path')); ?>" />
         </a>
         <?php endif; ?>
         <?php if (theme_get_setting('branding_type') == 'text'): ?>
         <a href="<?php print base_path();?>">
           <h1 id="main_title_text">
             <?php print variable_get('site_name'); ?>
           </h1>
           <h2 id="main_title_slogan">
             <?php print variable_get('site_slogan'); ?>
           </h2>
         </a>
         <?php endif; ?>
       </div>
     </div>
	 
	 <div class="large-9 columns">
	     <?php if ($top_bar): ?>
	       <!--.top-bar -->
	       <?php if ($top_bar_classes): ?>
	         <div class="<?php print $top_bar_classes; ?>">
	       <?php endif; ?>
	       <nav class="top-bar"<?php print $top_bar_options; ?>>
	        <ul class="title-area">
	          <li class="name">
	            <h1>
	            </h1>
	          </li>
	          <li class="toggle-topbar menu-icon">
	            <a href="#">
	              <span>
	                <?php print $top_bar_menu_text; ?>
	              </span>
	            </a>
	          </li>
	        </ul>
			 
			 
			 
			 
			 
	         <section class="top-bar-section sacho">
	           <?php if ($top_bar_main_menu) :?>
	             <?php print $top_bar_main_menu; ?>
	           <?php endif; ?>
			             <?php if ($secondary_menu): ?>
			             <nav id="secondary-menu" class="navigation" role="navigation">
			               <?php print theme('links__system_secondary_menu', array(
			   'links' => $secondary_menu,
			   'attributes' => array(
			   'id' => 'secondary-menu-links',
			   'class' => array('links', 'inline', 'clearfix'),
			   ),
			   'heading' => array(
			   'text' => t('Secondary menu'),
			   'level' => 'h2',
			   'class' => array('element-invisible'),
			   ),
			   )); ?>
			             </nav> 
			             <!-- /#secondary-menu -->
			             <?php endif; ?>
	         </section>
	       </nav>
	  
	  
	  
	  
	       <?php if ($top_bar_classes): ?>
	         </div>
	       <?php endif; ?>
	       <!--/.top-bar -->
	     <?php endif; ?>
		 
	 </div>
	 
	 
	 
   </div>


	<?php if (!empty($page['header'])): ?>
	<!--.l-header-region -->
	<div class="slider">
	  <?php print render($page['header']); ?>
	</div>
	<!--/.l-header-region -->
	<?php endif; ?>
	


  </header>
  <!--/.l-header -->



  <?php if ($messages && !$zurb_foundation_messages_modal): ?>
    <!--.l-messages -->
    <section class="l-messages row">
      <div class="large-12 columns">
        <?php if ($messages): print $messages; endif; ?>
      </div>
    </section>
    <!--/.l-messages -->
  <?php endif; ?>

  <?php if (!empty($page['help'])): ?>
    <!--.l-help -->
    <section class="l-help row">
      <div class="large-12 columns">
        <?php print render($page['help']); ?>
      </div>
    </section>
    <!--/.l-help -->
  <?php endif; ?>

  <main role="main" class="row l-main">
    <div class="<?php print $main_grid; ?> main columns">
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlight panel callout">
          <?php print render($page['highlighted']); ?>
        </div>
      <?php endif; ?>

      <a id="main-content"></a>

      <?php if ($breadcrumb): print $breadcrumb; endif; ?>

      <?php if ($title && !$is_front): ?>
        <?php print render($title_prefix); ?>
        <h1 id="page-title" class="title"><?php print $title; ?></h1>
        <?php print render($title_suffix); ?>
      <?php endif; ?>

      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
        <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
      <?php endif; ?>

      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>

      <?php print render($page['content']); ?>
    </div>
    <!--/.l-main region -->

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside role="complementary" class="<?php print $sidebar_first_grid; ?> l-sidebar-first columns sidebar">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside role="complementary" class="<?php print $sidebar_sec_grid; ?> l-sidebar-second columns sidebar">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>
  </main>
  <!--/.l-main-->

<div class="footer_wrapper">
  <div class"footer_top">
    <?php if (!empty($page['footer_firstcolumn']) || !empty($page['footer_secondcolumn']) || !empty($page['footer_thirdcolumn']) || !empty($page['footer_fourthcolumn'])): ?>
    <!--.footer-columns -->
    <section class="row l-footer-columns">
      <?php if (!empty($page['footer_firstcolumn'])): ?>
      <div class="footer-first large-3 columns">
		  
		  
		  
        <?php print render($page['footer_firstcolumn']); ?>
      </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_secondcolumn'])): ?>
      <div class="footer-second large-3 columns">
        <?php print render($page['footer_secondcolumn']); ?>
      </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_thirdcolumn'])): ?>
      <div class="footer-third large-3 columns">
        <?php print render($page['footer_thirdcolumn']); ?>
      </div>
      <?php endif; ?>
      <?php if (!empty($page['footer_fourthcolumn'])): ?>
      <div class="footer-fourth large-3 columns">
        <?php print render($page['footer_fourthcolumn']); ?>
      </div>
      <?php endif; ?>
    </section>
    <!--/.footer-columns-->
    <?php endif; ?>
  </div>
  <div class="footer_bottom">
    <!--.l-footer-->
    <footer class="l-footer panel row" role="contentinfo">
      <?php if (!empty($page['footer'])): ?>
      <div class="footer large-12 columns">
        <?php print render($page['footer']); ?>
      </div>
      <?php endif; ?>
      <?php if ($site_name) :?>
      <div class="copyright large-12 columns">
        &copy; 
        <?php print date('Y') . ' ' . check_plain($site_name) . ' ' . t('All rights reserved.'); ?>
      </div>
      <?php endif; ?>
    </footer>
  </div>
</div>
<!--/.footer-->
<?php if ($messages && $zurb_foundation_messages_modal): print $messages; endif; ?>
</div>
<!--/.page -->
