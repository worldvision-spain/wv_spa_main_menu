<?php
/**
 * @file
 * wv_spa_main_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function wv_spa_main_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: wv-main-menu.
  $menus['wv-main-menu'] = array(
    'menu_name' => 'wv-main-menu',
    'title' => 'World Vision Spain Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('World Vision Spain Main menu');

  return $menus;
}
