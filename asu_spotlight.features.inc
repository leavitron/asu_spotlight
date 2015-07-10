<?php
/**
 * @file
 * asu_spotlight.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function asu_spotlight_image_default_styles() {
  $styles = array();

  // Exported image style: asu_spotlight_image.
  $styles['asu_spotlight_image'] = array(
    'name' => 'asu_spotlight_image',
    'label' => 'asu_spotlight_image',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
