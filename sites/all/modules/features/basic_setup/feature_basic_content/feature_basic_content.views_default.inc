<?php
/**
 * @file
 * feature_basic_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_basic_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'basic_blocks_displays';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Basic Blocks Display';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'draggable-views-display';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'basic-block-row';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <div> <br> <span>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks:block_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Block Sections (field_basic_block_block_sections) */
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['id'] = 'field_basic_block_block_sections_mlid';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['table'] = 'field_data_field_basic_block_block_sections';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['field'] = 'field_basic_block_block_sections_mlid';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['default_argument_type'] = 'menu_block_placement_mlid';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['limit'] = '0';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Block Sections (Per Path) */
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['id'] = 'field_basic_block_block_sections_mlid_1';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['table'] = 'field_data_field_basic_block_block_sections';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['field'] = 'field_basic_block_block_sections_mlid';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['ui_name'] = 'Content: Block Sections (Per Path)';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['default_argument_type'] = 'menu_block_placement_mlid_per_node';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['limit'] = '0';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'content' => 'content',
  );
  $handler->display->display_options['filters']['field_basic_block_region_value']['group'] = 1;
  /* Filter criterion: Content: Show only on selected pages (field_basic_individual_page) */
  $handler->display->display_options['filters']['field_basic_individual_page_value']['id'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['table'] = 'field_data_field_basic_individual_page';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['field'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_basic_individual_page_value']['group'] = 1;

  /* Display: Main Content */
  $handler = $view->new_display('block', 'Main Content', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-views';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks_sort:block';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'content' => 'content',
  );
  $handler->display->display_options['filters']['field_basic_block_region_value']['group'] = 1;
  /* Filter criterion: Content: Show only on selected pages (field_basic_individual_page) */
  $handler->display->display_options['filters']['field_basic_individual_page_value']['id'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['table'] = 'field_data_field_basic_individual_page';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['field'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_basic_individual_page_value']['group'] = 1;

  /* Display: Left Sidebar */
  $handler = $view->new_display('block', 'Left Sidebar', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks_sort:block_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'left' => 'left',
  );
  $handler->display->display_options['filters']['field_basic_block_region_value']['group'] = 1;
  /* Filter criterion: Content: Show only on selected pages (field_basic_individual_page) */
  $handler->display->display_options['filters']['field_basic_individual_page_value']['id'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['table'] = 'field_data_field_basic_individual_page';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['field'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_basic_individual_page_value']['group'] = 1;

  /* Display: Right Sidebar */
  $handler = $view->new_display('block', 'Right Sidebar', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks_sort:block_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'right' => 'right',
  );
  $handler->display->display_options['filters']['field_basic_block_region_value']['group'] = 1;
  /* Filter criterion: Content: Show only on selected pages (field_basic_individual_page) */
  $handler->display->display_options['filters']['field_basic_individual_page_value']['id'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['table'] = 'field_data_field_basic_individual_page';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['field'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_basic_individual_page_value']['group'] = 1;

  /* Display: Preface */
  $handler = $view->new_display('block', 'Preface', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks_sort:block_3';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'preface' => 'preface',
  );
  $handler->display->display_options['filters']['field_basic_block_region_value']['group'] = 1;
  /* Filter criterion: Content: Show only on selected pages (field_basic_individual_page) */
  $handler->display->display_options['filters']['field_basic_individual_page_value']['id'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['table'] = 'field_data_field_basic_individual_page';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['field'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_basic_individual_page_value']['group'] = 1;

  /* Display: Postscript */
  $handler = $view->new_display('block', 'Postscript', 'block_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks_sort:block_4';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'postscript' => 'postscript',
  );
  $handler->display->display_options['filters']['field_basic_block_region_value']['group'] = 1;
  /* Filter criterion: Content: Show only on selected pages (field_basic_individual_page) */
  $handler->display->display_options['filters']['field_basic_individual_page_value']['id'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['table'] = 'field_data_field_basic_individual_page';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['field'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_basic_individual_page_value']['group'] = 1;

  /* Display: Home Main Content */
  $handler = $view->new_display('block', 'Home Main Content', 'block_5');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks_sort:block_5';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'content' => 'content',
  );
  /* Filter criterion: Content: Display This Block On The Front Page (field_basic_block_front_page) */
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['id'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['table'] = 'field_data_field_basic_block_front_page';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['field'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['value'] = array(
    1 => '1',
  );

  /* Display: Home Left Sidebar */
  $handler = $view->new_display('block', 'Home Left Sidebar', 'block_6');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks_sort:block_6';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'left' => 'left',
  );
  /* Filter criterion: Content: Display This Block On The Front Page (field_basic_block_front_page) */
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['id'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['table'] = 'field_data_field_basic_block_front_page';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['field'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['value'] = array(
    1 => '1',
  );

  /* Display: Home Right Sidebar */
  $handler = $view->new_display('block', 'Home Right Sidebar', 'block_7');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks_sort:block_7';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'right' => 'right',
  );
  /* Filter criterion: Content: Display This Block On The Front Page (field_basic_block_front_page) */
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['id'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['table'] = 'field_data_field_basic_block_front_page';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['field'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['value'] = array(
    1 => '1',
  );

  /* Display: Home Preface */
  $handler = $view->new_display('block', 'Home Preface', 'block_8');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks_sort:block_8';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'preface' => 'preface',
  );
  /* Filter criterion: Content: Display This Block On The Front Page (field_basic_block_front_page) */
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['id'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['table'] = 'field_data_field_basic_block_front_page';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['field'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['value'] = array(
    1 => '1',
  );

  /* Display: Home Postscript */
  $handler = $view->new_display('block', 'Home Postscript', 'block_9');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks_sort:block_9';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'postscript' => 'postscript',
  );
  /* Filter criterion: Content: Display This Block On The Front Page (field_basic_block_front_page) */
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['id'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['table'] = 'field_data_field_basic_block_front_page';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['field'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['value'] = array(
    1 => '1',
  );
  $export['basic_blocks_displays'] = $view;

  $view = new view();
  $view->name = 'basic_blocks_sort';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Basic Blocks Sort';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'draggable-views-display';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'title',
    'edit_node' => 'title',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <div> <br> <span>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'basic_blocks:block_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Block Sections (field_basic_block_block_sections) */
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['id'] = 'field_basic_block_block_sections_mlid';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['table'] = 'field_data_field_basic_block_block_sections';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['field'] = 'field_basic_block_block_sections_mlid';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['default_argument_type'] = 'menu_block_placement_mlid';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['limit'] = '0';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Block Sections (Per Path) */
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['id'] = 'field_basic_block_block_sections_mlid_1';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['table'] = 'field_data_field_basic_block_block_sections';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['field'] = 'field_basic_block_block_sections_mlid';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['ui_name'] = 'Content: Block Sections (Per Path)';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['default_argument_type'] = 'menu_block_placement_mlid_per_node';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_basic_block_block_sections_mlid_1']['limit'] = '0';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'content' => 'content',
  );
  $handler->display->display_options['filters']['field_basic_block_region_value']['group'] = 1;
  /* Filter criterion: Content: Show only on selected pages (field_basic_individual_page) */
  $handler->display->display_options['filters']['field_basic_individual_page_value']['id'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['table'] = 'field_data_field_basic_individual_page';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['field'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_basic_individual_page_value']['group'] = 1;

  /* Display: Main Content */
  $handler = $view->new_display('block', 'Main Content', 'block');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';

  /* Display: Left Sidebar */
  $handler = $view->new_display('block', 'Left Sidebar', 'block_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'left' => 'left',
  );
  $handler->display->display_options['filters']['field_basic_block_region_value']['group'] = 1;
  /* Filter criterion: Content: Show only on selected pages (field_basic_individual_page) */
  $handler->display->display_options['filters']['field_basic_individual_page_value']['id'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['table'] = 'field_data_field_basic_individual_page';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['field'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_basic_individual_page_value']['group'] = 1;

  /* Display: Right Sidebar */
  $handler = $view->new_display('block', 'Right Sidebar', 'block_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'right' => 'right',
  );
  $handler->display->display_options['filters']['field_basic_block_region_value']['group'] = 1;
  /* Filter criterion: Content: Show only on selected pages (field_basic_individual_page) */
  $handler->display->display_options['filters']['field_basic_individual_page_value']['id'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['table'] = 'field_data_field_basic_individual_page';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['field'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_basic_individual_page_value']['group'] = 1;

  /* Display: Preface */
  $handler = $view->new_display('block', 'Preface', 'block_3');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'preface' => 'preface',
  );
  $handler->display->display_options['filters']['field_basic_block_region_value']['group'] = 1;
  /* Filter criterion: Content: Show only on selected pages (field_basic_individual_page) */
  $handler->display->display_options['filters']['field_basic_individual_page_value']['id'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['table'] = 'field_data_field_basic_individual_page';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['field'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_basic_individual_page_value']['group'] = 1;

  /* Display: Postscript */
  $handler = $view->new_display('block', 'Postscript', 'block_4');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'postscript' => 'postscript',
  );
  $handler->display->display_options['filters']['field_basic_block_region_value']['group'] = 1;
  /* Filter criterion: Content: Show only on selected pages (field_basic_individual_page) */
  $handler->display->display_options['filters']['field_basic_individual_page_value']['id'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['table'] = 'field_data_field_basic_individual_page';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['field'] = 'field_basic_individual_page_value';
  $handler->display->display_options['filters']['field_basic_individual_page_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_basic_individual_page_value']['group'] = 1;

  /* Display: Home Main Content */
  $handler = $view->new_display('block', 'Home Main Content', 'block_5');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'content' => 'content',
  );
  /* Filter criterion: Content: Display This Block On The Front Page (field_basic_block_front_page) */
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['id'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['table'] = 'field_data_field_basic_block_front_page';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['field'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['value'] = array(
    1 => '1',
  );

  /* Display: Home Left Sidebar */
  $handler = $view->new_display('block', 'Home Left Sidebar', 'block_6');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'left' => 'left',
  );
  /* Filter criterion: Content: Display This Block On The Front Page (field_basic_block_front_page) */
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['id'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['table'] = 'field_data_field_basic_block_front_page';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['field'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['value'] = array(
    1 => '1',
  );

  /* Display: Home Right Sidebar */
  $handler = $view->new_display('block', 'Home Right Sidebar', 'block_7');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'right' => 'right',
  );
  /* Filter criterion: Content: Display This Block On The Front Page (field_basic_block_front_page) */
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['id'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['table'] = 'field_data_field_basic_block_front_page';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['field'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['value'] = array(
    1 => '1',
  );

  /* Display: Home Preface */
  $handler = $view->new_display('block', 'Home Preface', 'block_8');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'preface' => 'preface',
  );
  /* Filter criterion: Content: Display This Block On The Front Page (field_basic_block_front_page) */
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['id'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['table'] = 'field_data_field_basic_block_front_page';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['field'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['value'] = array(
    1 => '1',
  );

  /* Display: Home Postscript */
  $handler = $view->new_display('block', 'Home Postscript', 'block_9');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_block' => 'basic_block',
    'enewsletter_subscription' => 'enewsletter_subscription',
  );
  /* Filter criterion: Content: Block Region Display (field_basic_block_region) */
  $handler->display->display_options['filters']['field_basic_block_region_value']['id'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['table'] = 'field_data_field_basic_block_region';
  $handler->display->display_options['filters']['field_basic_block_region_value']['field'] = 'field_basic_block_region_value';
  $handler->display->display_options['filters']['field_basic_block_region_value']['value'] = array(
    'postscript' => 'postscript',
  );
  /* Filter criterion: Content: Display This Block On The Front Page (field_basic_block_front_page) */
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['id'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['table'] = 'field_data_field_basic_block_front_page';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['field'] = 'field_basic_block_front_page_value';
  $handler->display->display_options['filters']['field_basic_block_front_page_value']['value'] = array(
    1 => '1',
  );
  $export['basic_blocks_sort'] = $view;

  $view = new view();
  $view->name = 'slideshow_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'slideshow-content';
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Slideshow Assignment (field_basic_slideshow_assignment) */
  $handler->display->display_options['arguments']['field_basic_slideshow_assignment_mlid']['id'] = 'field_basic_slideshow_assignment_mlid';
  $handler->display->display_options['arguments']['field_basic_slideshow_assignment_mlid']['table'] = 'field_data_field_basic_slideshow_assignment';
  $handler->display->display_options['arguments']['field_basic_slideshow_assignment_mlid']['field'] = 'field_basic_slideshow_assignment_mlid';
  $handler->display->display_options['arguments']['field_basic_slideshow_assignment_mlid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_basic_slideshow_assignment_mlid']['default_argument_type'] = 'menu_block_placement_mlid_per_node';
  $handler->display->display_options['arguments']['field_basic_slideshow_assignment_mlid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_basic_slideshow_assignment_mlid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_basic_slideshow_assignment_mlid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_basic_slideshow_assignment_mlid']['limit'] = '0';
  $handler->display->display_options['arguments']['field_basic_slideshow_assignment_mlid']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_slideshow' => 'basic_slideshow',
  );

  /* Display: Individual Pages Block */
  $handler = $view->new_display('block', 'Individual Pages Block', 'block');

  /* Display: Home Page Block */
  $handler = $view->new_display('block', 'Home Page Block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'basic_slideshow' => 'basic_slideshow',
  );
  /* Filter criterion: Content: Display on Front Page (field_basic_slideshow_front) */
  $handler->display->display_options['filters']['field_basic_slideshow_front_value']['id'] = 'field_basic_slideshow_front_value';
  $handler->display->display_options['filters']['field_basic_slideshow_front_value']['table'] = 'field_data_field_basic_slideshow_front';
  $handler->display->display_options['filters']['field_basic_slideshow_front_value']['field'] = 'field_basic_slideshow_front_value';
  $handler->display->display_options['filters']['field_basic_slideshow_front_value']['value'] = array(
    1 => '1',
  );
  $export['slideshow_blocks'] = $view;

  return $export;
}
