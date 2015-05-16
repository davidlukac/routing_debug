<?php
/**
 * @file
 * RoutingInfo class.
 *
 * Helper class to hold some routing information about a menu path.
 */

/**
 * Class RoutingInfo.
 */
class RoutingInfo {

  /* @var $path string */
  private $path;
  /* @var $callback string */
  private $callback;
  /* @var $module string */
  private $module;
  /* @var $file string */
  private $file;
  /* @var $line string */
  private $line;

  /**
   * Path getter.
   *
   * @return string
   *   Path.
   */
  public function getPath() {
    return $this->path;
  }

  /**
   * Path settter.
   *
   * @param string $path
   *   Path.
   */
  public function setPath($path) {
    $this->path = $path;
  }

  /**
   * Callback getter.
   *
   * @return string
   *   Callback function name.
   */
  public function getCallback() {
    return $this->callback;
  }

  /**
   * Callback setter.
   *
   * @param string $callback
   *   Callback function name.
   */
  public function setCallback($callback) {
    $this->callback = $callback;
  }

  /**
   * Module name getter.
   *
   * @return string
   *   Module name.
   */
  public function getModule() {
    return $this->module;
  }

  /**
   * Module name setter.
   *
   * @param string $module
   *   Module name.
   */
  public function setModule($module) {
    $this->module = $module;
  }

  /**
   * File name getter.
   *
   * @return string
   *   File name.
   */
  public function getFile() {
    return $this->file;
  }

  /**
   * File name setter.
   *
   * @param string $file
   *   File name.
   */
  public function setFile($file) {
    $this->file = $file;
  }

  /**
   * Line number getter.
   *
   * @return string
   *   Line number.
   */
  public function getLine() {
    return $this->line;
  }

  /**
   * Line number setter.
   *
   * @param string $line
   *   Line number.
   */
  public function setLine($line) {
    $this->line = $line;
  }

}
