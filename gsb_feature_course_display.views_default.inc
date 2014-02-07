<?php
/**
 * @file
 * gsb_feature_course_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_course_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gsb_course_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'GSB Course Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Degree Courses';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Code */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_code']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_course_subject']['id'] = 'field_course_subject';
  $handler->display->display_options['fields']['field_course_subject']['table'] = 'field_data_field_course_subject';
  $handler->display->display_options['fields']['field_course_subject']['field'] = 'field_course_subject';
  $handler->display->display_options['fields']['field_course_subject']['label'] = '';
  $handler->display->display_options['fields']['field_course_subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_subject']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: End Academic Year */
  $handler->display->display_options['fields']['field_course_end_acad_year']['id'] = 'field_course_end_acad_year';
  $handler->display->display_options['fields']['field_course_end_acad_year']['table'] = 'field_data_field_course_end_acad_year';
  $handler->display->display_options['fields']['field_course_end_acad_year']['field'] = 'field_course_end_acad_year';
  $handler->display->display_options['fields']['field_course_end_acad_year']['label'] = '';
  $handler->display->display_options['fields']['field_course_end_acad_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_end_acad_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_end_acad_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Starting Academic Year */
  $handler->display->display_options['fields']['field_course_start_acad_year']['id'] = 'field_course_start_acad_year';
  $handler->display->display_options['fields']['field_course_start_acad_year']['table'] = 'field_data_field_course_start_acad_year';
  $handler->display->display_options['fields']['field_course_start_acad_year']['field'] = 'field_course_start_acad_year';
  $handler->display->display_options['fields']['field_course_start_acad_year']['label'] = '';
  $handler->display->display_options['fields']['field_course_start_acad_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_start_acad_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_start_acad_year']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: End Two Digits */
  $handler->display->display_options['fields']['field_course_end_acad_year_1']['id'] = 'field_course_end_acad_year_1';
  $handler->display->display_options['fields']['field_course_end_acad_year_1']['table'] = 'field_data_field_course_end_acad_year';
  $handler->display->display_options['fields']['field_course_end_acad_year_1']['field'] = 'field_course_end_acad_year';
  $handler->display->display_options['fields']['field_course_end_acad_year_1']['ui_name'] = 'End Two Digits';
  $handler->display->display_options['fields']['field_course_end_acad_year_1']['label'] = '';
  $handler->display->display_options['fields']['field_course_end_acad_year_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_end_acad_year_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_end_acad_year_1']['settings'] = array(
    'format_type' => 'two_digit_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Year Group Field */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Year Group Field';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_course_start_acad_year]-[field_course_end_acad_year_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[field_course_subject] [field_course_code]: [title_1] ';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'http://explorecourses.stanford.edu/search?q=[field_course_subject]+[field_course_code]&academicYear=[field_course_start_acad_year][field_course_end_acad_year]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Starting Academic Year (field_course_start_acad_year) */
  $handler->display->display_options['sorts']['field_course_start_acad_year_value']['id'] = 'field_course_start_acad_year_value';
  $handler->display->display_options['sorts']['field_course_start_acad_year_value']['table'] = 'field_data_field_course_start_acad_year';
  $handler->display->display_options['sorts']['field_course_start_acad_year_value']['field'] = 'field_course_start_acad_year_value';
  $handler->display->display_options['sorts']['field_course_start_acad_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Subject (field_course_subject) */
  $handler->display->display_options['sorts']['field_course_subject_value']['id'] = 'field_course_subject_value';
  $handler->display->display_options['sorts']['field_course_subject_value']['table'] = 'field_data_field_course_subject';
  $handler->display->display_options['sorts']['field_course_subject_value']['field'] = 'field_course_subject_value';
  /* Sort criterion: Content: Code (field_course_code) */
  $handler->display->display_options['sorts']['field_course_code_value']['id'] = 'field_course_code_value';
  $handler->display->display_options['sorts']['field_course_code_value']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['sorts']['field_course_code_value']['field'] = 'field_course_code_value';
  /* Contextual filter: Content: Faculty Advisors (field_person_fac_ref) */
  $handler->display->display_options['arguments']['field_person_fac_ref_target_id']['id'] = 'field_person_fac_ref_target_id';
  $handler->display->display_options['arguments']['field_person_fac_ref_target_id']['table'] = 'field_data_field_person_fac_ref';
  $handler->display->display_options['arguments']['field_person_fac_ref_target_id']['field'] = 'field_person_fac_ref_target_id';
  $handler->display->display_options['arguments']['field_person_fac_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_person_fac_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_person_fac_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_person_fac_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_person_fac_ref_target_id']['summary_options']['items_per_page'] = '25';
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
    'course' => 'course',
  );
  /* Filter criterion: Content: Starting Academic Year (field_course_start_acad_year) */
  $handler->display->display_options['filters']['field_course_start_acad_year_value']['id'] = 'field_course_start_acad_year_value';
  $handler->display->display_options['filters']['field_course_start_acad_year_value']['table'] = 'field_data_field_course_start_acad_year';
  $handler->display->display_options['filters']['field_course_start_acad_year_value']['field'] = 'field_course_start_acad_year_value';
  $handler->display->display_options['filters']['field_course_start_acad_year_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_course_start_acad_year_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_course_start_acad_year_value']['default_date'] = 'now -5 year';
  $handler->display->display_options['filters']['field_course_start_acad_year_value']['year_range'] = '-4:+1';

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'faculty',
  );
  $handler->display->display_options['show_title'] = 1;
  $export['gsb_course_listing'] = $view;

  return $export;
}
