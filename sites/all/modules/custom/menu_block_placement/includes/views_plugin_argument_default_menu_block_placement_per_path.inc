<?php
/**
 * @file
 * A contectual filter that allows content to show per menu item (not hierarchical)
 */

/**
 * Extending views_plugin_argument_default_node()
 */
class views_plugin_argument_default_menu_block_placement_per_path extends views_plugin_argument_default_node {

/**
 * Provide the mlid
 */
  function get_argument() {
    // Since this is based on the contextual id for a NODE
    // We can get the NID based on the parent class get_argument().
    if ($nid = parent::get_argument()) {

      $mlids = $this->get_menu_item('node/' . $nid);

      return implode('+', $mlids);
    }
  }




/**
 * Retrives the node ids that have been assigned to a specific menu link id.
 */
  function get_menu_item($path) {

    $active_trail = menu_get_active_trail();

    foreach (array_reverse($active_trail) as $trail) {

      if (isset($trail['mlid'])) {

        $parent_items[$path][$trail['mlid']] = $trail['mlid'];

        return $parent_items[$path];
      }
    }

  }
}