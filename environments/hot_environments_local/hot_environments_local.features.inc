<?php
/**
 * @file
 * hot_environments_local.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hot_environments_local_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
