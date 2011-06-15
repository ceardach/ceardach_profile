<?php
/**
 * @file
 * ceardach_profile.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function ceardach_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '[user:profile-blog-profile:field-name]';
  $export['realname_pattern'] = $strongarm;

  return $export;
}
