<?php
/**
 * @file
 * A contectual filter that allows content to show per menu hierarchy
 */

/**
 * Extending views_plugin_argument_default_node()
 */
class views_plugin_argument_default_menu_block_placement extends views_plugin_argument_default_node {

  /**
   * Provide an imploded list of mlids
   */
  function get_argument() {
    // Since this is based on the contextual id for a NODE
    // We can get the NID based on the parent class get_argument().
    if ($nid = parent::get_argument()) {

      $mlids = $this->get_menu_parents('node/' . $nid);

      return implode('+', $mlids);
    }
  }




  /*
   * Retrives the node ids that have been assigned to a specific menu link id.
   * It checks for parent mlids as well.
   */
  function get_menu_parents($path) {

    $parent_items = &drupal_static(__FUNCTION__);

    if (isset($parent_items[$path])) {
      return $parent_items[$path];
    }

    // Fetch our active trail to determine all MLIDs in the current heiarchy.
    $active_trail = menu_get_active_trail();

    foreach ($active_trail as $trail) {
      if (isset($trail['mlid'])) {
        $parent_items[$path][$trail['mlid']] = $trail['mlid'];
      }
    }

    return $parent_items[$path];
  }
}