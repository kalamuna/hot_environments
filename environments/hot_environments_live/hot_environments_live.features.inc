<?php
/**
 * @file
 * hot_environments_live.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hot_environments_live_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
