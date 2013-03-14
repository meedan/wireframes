<?php
/**
 * @file
 * wireframes_feature_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wireframes_feature_core_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'pages';
  $view->description = '';
  $view->tag = 'wireframes';
  $view->base_table = 'node';
  $view->human_name = 'Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reorder pages';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'current_status-[field_current_status]';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'changed' => 'changed',
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'This project has no pages yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 1;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Content: Current status */
  $handler->display->display_options['fields']['field_current_status']['id'] = 'field_current_status';
  $handler->display->display_options['fields']['field_current_status']['table'] = 'field_data_field_current_status';
  $handler->display->display_options['fields']['field_current_status']['field'] = 'field_current_status';
  $handler->display->display_options['fields']['field_current_status']['label'] = '';
  $handler->display->display_options['fields']['field_current_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_current_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_current_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_current_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_current_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_current_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_current_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_current_status']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_current_status']['field_api_classes'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Updated [changed] by [name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Asset collection */
  $handler->display->display_options['fields']['field_asset_collection']['id'] = 'field_asset_collection';
  $handler->display->display_options['fields']['field_asset_collection']['table'] = 'field_data_field_asset_collection';
  $handler->display->display_options['fields']['field_asset_collection']['field'] = 'field_asset_collection';
  $handler->display->display_options['fields']['field_asset_collection']['label'] = '';
  $handler->display->display_options['fields']['field_asset_collection']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asset_collection']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asset_collection']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asset_collection']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_asset_collection']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_asset_collection']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_asset_collection']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_asset_collection']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_asset_collection']['field_api_classes'] = 0;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'pages:page_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 1;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Current status (field_current_status) */
  $handler->display->display_options['filters']['field_current_status_value']['id'] = 'field_current_status_value';
  $handler->display->display_options['filters']['field_current_status_value']['table'] = 'field_data_field_current_status';
  $handler->display->display_options['filters']['field_current_status_value']['field'] = 'field_current_status_value';
  $handler->display->display_options['filters']['field_current_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_current_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_current_status_value']['expose']['operator_id'] = 'field_current_status_value_op';
  $handler->display->display_options['filters']['field_current_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_current_status_value']['expose']['operator'] = 'field_current_status_value_op';
  $handler->display->display_options['filters']['field_current_status_value']['expose']['identifier'] = 'field_current_status_value';
  $handler->display->display_options['filters']['field_current_status_value']['expose']['reduce'] = 0;
  /* Filter criterion: Field: Archived (field_archived) */
  $handler->display->display_options['filters']['field_archived_value']['id'] = 'field_archived_value';
  $handler->display->display_options['filters']['field_archived_value']['table'] = 'field_data_field_archived';
  $handler->display->display_options['filters']['field_archived_value']['field'] = 'field_archived_value';
  $handler->display->display_options['filters']['field_archived_value']['operator'] = 'not in';
  $handler->display->display_options['filters']['field_archived_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_archived_value']['group'] = 2;
  /* Filter criterion: Field: Archived (field_archived) */
  $handler->display->display_options['filters']['field_archived_value_1']['id'] = 'field_archived_value_1';
  $handler->display->display_options['filters']['field_archived_value_1']['table'] = 'field_data_field_archived';
  $handler->display->display_options['filters']['field_archived_value_1']['field'] = 'field_archived_value';
  $handler->display->display_options['filters']['field_archived_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_archived_value_1']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Page Reorder */
  $handler = $view->new_display('page', 'Page Reorder', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_current_status' => 'field_current_status',
    'changed' => 'changed',
    'name' => 'name',
    'title' => 'title',
    'field_asset_collection' => 'field_asset_collection',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_current_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asset_collection' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['draggableviews']['hide_empty'] = 0;
  $handler->display->display_options['fields']['draggableviews']['empty_zero'] = 0;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Current status */
  $handler->display->display_options['fields']['field_current_status']['id'] = 'field_current_status';
  $handler->display->display_options['fields']['field_current_status']['table'] = 'field_data_field_current_status';
  $handler->display->display_options['fields']['field_current_status']['field'] = 'field_current_status';
  $handler->display->display_options['fields']['field_current_status']['label'] = '';
  $handler->display->display_options['fields']['field_current_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_current_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_current_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_current_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_current_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_current_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_current_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_current_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_current_status']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_current_status']['field_api_classes'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['name']['alter']['text'] = 'Updated [changed] by [name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Asset collection */
  $handler->display->display_options['fields']['field_asset_collection']['id'] = 'field_asset_collection';
  $handler->display->display_options['fields']['field_asset_collection']['table'] = 'field_data_field_asset_collection';
  $handler->display->display_options['fields']['field_asset_collection']['field'] = 'field_asset_collection';
  $handler->display->display_options['fields']['field_asset_collection']['label'] = '';
  $handler->display->display_options['fields']['field_asset_collection']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asset_collection']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_asset_collection']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_asset_collection']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_asset_collection']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_asset_collection']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_asset_collection']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_asset_collection']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_asset_collection']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_asset_collection']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'taxonomy/term/%/reorder';
  $export['pages'] = $view;

  $view = new view;
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'name_1' => 'name_1',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['tid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['tid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['tid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['tid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['tid']['format_plural'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view']['view'] = 'pages';
  $handler->display->display_options['fields']['view']['display'] = 'page_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!tid]';
  $handler->display->display_options['fields']['view']['query_aggregation'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'project' => 'project',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'projects';
  $export['projects'] = $view;

  return $export;
}
