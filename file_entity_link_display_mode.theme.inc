<?php 
/**
 * Implements theme_file_link().
 */
function theme_file_entity_file_entity_link($variables) {
  $file = $variables['file'];
  $icon_directory = $variables['icon_directory'];

  $icon = theme('file_icon', array('file' => $file, 'icon_directory' => $icon_directory));

  return "<span class='file'>{$icon} <a href='/file/{$file->fid}'>{$file->filename}</a></span>";
}