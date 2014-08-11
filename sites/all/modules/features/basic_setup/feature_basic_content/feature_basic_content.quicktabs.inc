<?php
/**
 * @file
 * feature_basic_content.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function feature_basic_content_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'draggable_views_home_left_sideba';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Draggable Views Home Left Sidebar';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'basic_blocks_displays',
      'display' => 'block_6',
      'args' => '',
      'title' => 'Display',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'basic_blocks_sort',
      'display' => 'block_6',
      'args' => '',
      'title' => 'Sort/Edit',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Draggable Views Home Left Sidebar');
  t('Sort/Edit');

  $export['draggable_views_home_left_sideba'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'draggable_views_home_main_conten';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Draggable Views Home Main Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'basic_blocks_displays',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Display',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'basic_blocks_sort',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Sort/Edit',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Draggable Views Home Main Content');
  t('Sort/Edit');

  $export['draggable_views_home_main_conten'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'draggable_views_home_postscript';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Draggable Views Home Postscript';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'basic_blocks_displays',
      'display' => 'block_9',
      'args' => '',
      'title' => 'Display',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'basic_blocks_sort',
      'display' => 'block_9',
      'args' => '',
      'title' => 'Sort/Edit',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Draggable Views Home Postscript');
  t('Sort/Edit');

  $export['draggable_views_home_postscript'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'draggable_views_home_preface';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Draggable Views Home Preface';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'basic_blocks_displays',
      'display' => 'block_8',
      'args' => '',
      'title' => 'Display',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'basic_blocks_sort',
      'display' => 'block_8',
      'args' => '',
      'title' => 'Sort/Edit',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Draggable Views Home Preface');
  t('Sort/Edit');

  $export['draggable_views_home_preface'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'draggable_views_home_right_sideb';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Draggable Views Home Right Sidebar';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'basic_blocks_displays',
      'display' => 'block_7',
      'args' => '',
      'title' => 'Display',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'basic_blocks_sort',
      'display' => 'block_7',
      'args' => '',
      'title' => 'Sort/Edit',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Draggable Views Home Right Sidebar');
  t('Sort/Edit');

  $export['draggable_views_home_right_sideb'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'draggable_views_left_sidebar';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Draggable Views Left Sidebar';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'basic_blocks_displays',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Display',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'basic_blocks_sort',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Sort/Edit',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Draggable Views Left Sidebar');
  t('Sort/Edit');

  $export['draggable_views_left_sidebar'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'draggable_views_main_content';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Draggable Views Main Content';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'basic_blocks_displays',
      'display' => 'block',
      'args' => '',
      'title' => 'Display',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'basic_blocks_sort',
      'display' => 'block',
      'args' => '',
      'title' => 'Sort/Edit',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Draggable Views Main Content');
  t('Sort/Edit');

  $export['draggable_views_main_content'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'draggable_views_postscript';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Draggable Views Postscript';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'basic_blocks_displays',
      'display' => 'block_4',
      'args' => '',
      'title' => 'Display',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'basic_blocks_sort',
      'display' => 'block_4',
      'args' => '',
      'title' => 'Sort/Edit',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Draggable Views Postscript');
  t('Sort/Edit');

  $export['draggable_views_postscript'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'draggable_views_preface';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Draggable Views Preface';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'basic_blocks_displays',
      'display' => 'block_3',
      'args' => '',
      'title' => 'Display',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'basic_blocks_sort',
      'display' => 'block_3',
      'args' => '',
      'title' => 'Sort/Edit',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Draggable Views Preface');
  t('Sort/Edit');

  $export['draggable_views_preface'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'draggable_views_right_sidebar';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Draggable Views Right Sidebar';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'basic_blocks_displays',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Display',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'basic_blocks_sort',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Sort/Edit',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Zen';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Display');
  t('Draggable Views Right Sidebar');
  t('Sort/Edit');

  $export['draggable_views_right_sidebar'] = $quicktabs;

  return $export;
}
