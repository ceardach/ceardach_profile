<?php
/**
 * @file
 * ceardach_profile.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function ceardach_profile_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'profile_blog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'profile_blog';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About the Author';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_body' => 'field_body',
    'uid' => 'uid',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = 0;
  /* Field: Profile: About Me */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_body']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_body']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_body']['field_api_classes'] = 0;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['text'] = 'Read more';
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Profile: Profile ID */
  $handler->display->display_options['sorts']['pid']['id'] = 'pid';
  $handler->display->display_options['sorts']['pid']['table'] = 'profile';
  $handler->display->display_options['sorts']['pid']['field'] = 'pid';
  $handler->display->display_options['sorts']['pid']['relationship'] = 'profile';
  $handler->display->display_options['sorts']['pid']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'About the Author';
  $export['profile_blog'] = $view;

  return $export;
}
