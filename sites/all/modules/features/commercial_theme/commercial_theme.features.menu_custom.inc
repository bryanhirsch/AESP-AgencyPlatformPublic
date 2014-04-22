<?php
/**
 * @file
 * commercial_theme.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function commercial_theme_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-sticky-nav.
  $menus['menu-sticky-nav'] = array(
    'menu_name' => 'menu-sticky-nav',
    'title' => 'Sticky Nav',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sticky Nav');


  return $menus;
}
