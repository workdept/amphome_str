<?php
/**
 * @file
 * amphome_str.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function amphome_str_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'frontlayout';
  $layout->admin_title = 'frontlayout';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'bootstrap';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'container',
        'contains' => 'row',
        'children' => array(
          0 => 12,
          1 => 11,
          2 => 1,
          3 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'row',
        'children' => array(
          0 => 'main-column',
          1 => 4,
        ),
        'parent' => 'canvas',
        'wrapper' => 'section',
        'element_id' => '',
        'class' => '',
      ),
      'main-column' => array(
        'type' => 'column',
        'contains' => 'row',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12   col-xs-12   col-xs-4   col-xs-4   col-xs-4',
          'sm' => 'col-sm-12   col-sm-12   col-sm-4   col-sm-4   col-sm-4',
          'md' => 'col-md-9',
          'lg' => 'col-lg-9',
        ),
        'children' => array(
          0 => 5,
          1 => 6,
        ),
        'parent' => 'main',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'canvas',
        'wrapper' => 'section',
        'element_id' => '',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'parent' => '1',
        'children' => array(
          0 => 'left_side_thingie',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-6',
          'lg' => 'col-lg-6',
        ),
      ),
      3 => array(
        'type' => 'column',
        'parent' => '1',
        'children' => array(
          0 => 'right_side_thingie',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'sm' => 'col-sm-12',
          'md' => 'col-md-6',
          'lg' => 'col-lg-6',
        ),
      ),
      'left_side_thingie' => array(
        'type' => 'region',
        'title' => 'left side thingie',
        'parent' => '2',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      'right_side_thingie' => array(
        'type' => 'region',
        'title' => 'right side thingie',
        'parent' => '3',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      4 => array(
        'type' => 'column',
        'parent' => 'main',
        'children' => array(
          0 => 'sidebar',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-3',
          'lg' => 'col-lg-3',
        ),
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 7,
        ),
        'parent' => 'main-column',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 8,
          1 => 9,
          2 => 10,
        ),
        'parent' => 'main-column',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
      ),
      7 => array(
        'type' => 'column',
        'parent' => '5',
        'children' => array(
          0 => 'flexible_graphic_area',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
      ),
      8 => array(
        'type' => 'column',
        'parent' => '6',
        'children' => array(
          0 => 'store_item_1',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-4',
          'sm' => 'col-sm-4',
          'lg' => 'col-lg-4',
          'md' => 'col-md-4',
        ),
      ),
      9 => array(
        'type' => 'column',
        'parent' => '6',
        'children' => array(
          0 => 'store_item_2',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-4',
          'sm' => 'col-sm-4',
          'lg' => 'col-lg-4',
          'md' => 'col-md-4',
        ),
      ),
      10 => array(
        'type' => 'column',
        'parent' => '6',
        'children' => array(
          0 => 'store_item_3',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-4',
          'sm' => 'col-sm-4',
          'lg' => 'col-lg-4',
          'md' => 'col-md-4',
        ),
      ),
      'flexible_graphic_area' => array(
        'type' => 'region',
        'title' => 'Flexible graphic area',
        'parent' => '7',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      'store_item_1' => array(
        'type' => 'region',
        'title' => 'Store item 1',
        'parent' => '8',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      'store_item_2' => array(
        'type' => 'region',
        'title' => 'Store Item 2',
        'parent' => '9',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      'store_item_3' => array(
        'type' => 'region',
        'title' => 'Store item 3',
        'parent' => '10',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'parent' => '4',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 14,
          1 => 15,
        ),
        'parent' => 'canvas',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 13,
        ),
        'parent' => 'canvas',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
      ),
      13 => array(
        'type' => 'column',
        'parent' => '12',
        'children' => array(
          0 => 'big_top',
        ),
        'wrapper' => 'div',
        'element_id' => 'bigtop',
        'class' => '',
        'contains' => 'region',
      ),
      'big_top' => array(
        'type' => 'region',
        'title' => 'big top',
        'parent' => '13',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 1,
        'container_full_class_add' => 1,
      ),
      14 => array(
        'type' => 'column',
        'parent' => '11',
        'children' => array(
          0 => 'main_',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'md' => 'col-md-9',
          'lg' => 'col-lg-9',
        ),
      ),
      15 => array(
        'type' => 'column',
        'parent' => '11',
        'children' => array(
          0 => 'sidebar_',
        ),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'lg' => 'col-lg-3',
          'md' => 'col-md-3',
        ),
      ),
      'sidebar_' => array(
        'type' => 'region',
        'title' => 'sidebar',
        'parent' => '15',
        'wrapper' => 'aside',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'main',
        'parent' => '14',
        'wrapper' => 'section',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
    ),
  );
  $export['frontlayout'] = $layout;

  return $export;
}
