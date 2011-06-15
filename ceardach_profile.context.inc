<?php
/**
 * @file
 * ceardach_profile.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function ceardach_profile_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profile_blog_author';
  $context->description = '';
  $context->tag = 'blog';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-profile_blog-block' => array(
          'module' => 'views',
          'delta' => 'profile_blog-block',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog');
  $export['profile_blog_author'] = $context;

  return $export;
}
