<?php
// $Id: uc_attribute_cck.admin.inc,v 1.1 2010/10/11 15:21:53 trungonly Exp $

/**
 * @file
 * Admin interface for Attributes CCK.
 *
 */


/**
 * Form to associate attributes with products or classes.
 *
 */
function uc_attributes_cck_form($form_state, $product) {

  $nid = $product->nid;
  if (empty($product->title)) {
    drupal_goto('node/'. $nid);
  }
  drupal_set_title(check_plain($product->title));

  // add form
  $form['content_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Content types'),
    '#default_value' => $product->attributes_cck['types'],
    '#options' => array_map('check_plain', node_get_types('names')),
    '#description' => t('Select content types to use CCK fields as attribute for this product.'),
  );

  $form['nid'] = array(
    '#type' => 'value',
    '#value' => $nid,
  );

  $form['submit'] = array('#type' => 'submit', '#value' => t('Save'));

  return $form;
}

/**
 * uc_attributes_cck_form submit handler.
 *
 * @see uc_attributes_cck_form()
 */
function uc_attributes_cck_form_submit(&$form, &$form_state) {
  // Fix up the types array to remove unchecked types.
  $form_state['values']['content_types'] = array_filter($form_state['values']['content_types']);

  $edit = &$form_state['values'];

  db_query("DELETE FROM {uc_attribute_cck_node_types} WHERE nid = %d", $edit['nid']);
  foreach ($edit['content_types'] as $type => $selected) {
    db_query("INSERT INTO {uc_attribute_cck_node_types} (nid, type) VALUES (%d, '%s')", $edit['nid'], $type);
  }

  drupal_set_message(t('Configuration saved.'));
}

