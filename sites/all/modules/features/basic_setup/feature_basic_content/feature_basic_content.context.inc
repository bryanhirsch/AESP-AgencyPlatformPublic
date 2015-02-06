<?php
/**
 * @file
 * feature_basic_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_basic_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'basic_content_blocks';
  $context->description = '';
  $context->tag = 'Basic Setup';
  $context->conditions = array(
    'admin_theme' => array(
      'values' => array(
        'non_admin' => 'non_admin',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slideshow_blocks-block' => array(
          'module' => 'views',
          'delta' => 'slideshow_blocks-block',
          'region' => 'header_second',
          'weight' => '0',
        ),
        'quicktabs-draggable_views_preface' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_preface',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'quicktabs-draggable_views_left_sidebar' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_left_sidebar',
          'region' => 'sidebar_first',
          'weight' => '5',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'quicktabs-draggable_views_main_content' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_main_content',
          'region' => 'content',
          'weight' => '5',
        ),
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'quicktabs-draggable_views_right_sidebar' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_right_sidebar',
          'region' => 'sidebar_second',
          'weight' => '5',
        ),
        'quicktabs-draggable_views_postscript' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_postscript',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Setup');
  $export['basic_content_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'basic_content_home_blocks';
  $context->description = '';
  $context->tag = 'Basic Setup';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slideshow_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'slideshow_blocks-block_1',
          'region' => 'header_second',
          'weight' => '0',
        ),
        'quicktabs-draggable_views_home_preface' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_home_preface',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'quicktabs-draggable_views_home_left_sideba' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_home_left_sideba',
          'region' => 'sidebar_first',
          'weight' => '10',
        ),
        'quicktabs-draggable_views_home_main_conten' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_home_main_conten',
          'region' => 'content',
          'weight' => '10',
        ),
        'quicktabs-draggable_views_home_right_sideb' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_home_right_sideb',
          'region' => 'sidebar_second',
          'weight' => '10',
        ),
        'quicktabs-draggable_views_home_postscript' => array(
          'module' => 'quicktabs',
          'delta' => 'draggable_views_home_postscript',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Setup');
  $export['basic_content_home_blocks'] = $context;

  return $export;
}
