<?php
/**
 * @file
 * feature_basic_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_basic_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_block_assignment|node|basic_block|form';
  $field_group->group_name = 'group_basic_block_assignment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Block Assignment',
    'weight' => '1',
    'children' => array(
      0 => 'field_basic_block_block_sections',
      1 => 'field_basic_block_front_page',
      2 => 'field_basic_block_region',
      3 => 'field_basic_individual_page',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic-block-assignment field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic_block_assignment|node|basic_block|form'] = $field_group;

  return $export;
}
