<?php
/**
 * @file
 * RoutingInfo class.
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
   *   string
   */
  public function getPath() {
    return $this->path;
  }

  /**
   * @param string $path
   */
  public function setPath($path) {
    $this->path = $path;
  }

  /**
   * @return string
   */
  public function getCallback() {
    return $this->callback;
  }

  /**
   * @param string $callback
   */
  public function setCallback($callback) {
    $this->callback = $callback;
  }

  /**
   * @return string
   */
  public function getModule() {
    return $this->module;
  }

  /**
   * @param string $module
   */
  public function setModule($module) {
    $this->module = $module;
  }

  /**
   * @return string
   */
  public function getFile() {
    return $this->file;
  }

  /**
   * @param string $file
   */
  public function setFile($file) {
    $this->file = $file;
  }

  /**
   * @return string
   */
  public function getLine() {
    return $this->line;
  }

  /**
   * @param string $line
   */
  public function setLine($line) {
    $this->line = $line;
  }

}
