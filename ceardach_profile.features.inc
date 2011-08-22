<?php
/**
 * @file
 * ceardach_profile.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ceardach_profile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implementation of hook_views_api().
 */
function ceardach_profile_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_default_profile2_type().
 */
function ceardach_profile_default_profile2_type() {
  $items = array();
  $items['blog_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "blog_profile",
    "label" : "Blogger Information",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  return $items;
}
