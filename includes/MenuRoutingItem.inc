<?php
/**
 * @file
 * File MenuRoutingItem.inc contains class MenuRoutingItem.
 */

/**
 * Class MenuRoutingItem.
 */
class MenuRoutingItem {

  private $routerItem;

  /**
   * Class constructor.
   *
   * @param array $router_item
   *   Array which is output of either menu_get_item() or ...
   */
  public function __construct(array $router_item) {
    $this->routerItem = $router_item;
  }

  /**
   * Returns page callback function name for this router/menu item.
   *
   * @return string
   *   Page callback function name.
   */
  public function getPageCallbackName() {
    $page_callback = '';

    if (isset($this->routerItem['page callback'])) {
      $page_callback = $this->routerItem['page callback'];
    }
    elseif (isset($this->routerItem['page_callback'])) {
      $page_callback = $this->routerItem['page_callback'];
    }

    return $page_callback;
  }

}
