Feature: Installation

  Scenario: Module is present
    Given that I am an admin
    And I am on modules page
    Then 'routing_debug' modules has to be present on the list.

  Scenario: Module is enabled
    Given I am an admin
    And I am on modules page
    And I select 'routing_debug' module
    And I click Submit button
    Then 'routing_debug' module has to be enabled.

  Scenario: Module is active
    Given I am an admin
    Then I can visit 'routing_debug' pages

Feature: Configuration

    Scenario: Enable debug mode
      Given I am an admin
      And 'routing_debug_debug_mode' variable is set to FALSE or does not exist
      And I am on 'routing_debug' settings page
      And I check 'debug mode' checkbox
      And I submit the settings form
      Then the 'routing_debug_debug_mode' variable will be set to TRUE.

    Scenario: Disable debug mode
      Given I am an admin
      And 'routing_debug_debug_mode' variable is set to TRUE
      And I am on 'routing_debug' settings page
      And I uncheck the 'debug mode' checkbox
      And I submit the settings form
      Then the 'routing_debug_debug_mode' variable will be set to FALSE.

Feature: Functionality

      Scenario: Module works - provides it's own route
        Given I am an admin
        And I am on the main 'routing_debug' page
        Then I can see the routes originating from routing debug module.

      Scenario: Module works - system routes
        Given I am an admin
        And I am on the main 'routing_debug' page
        Then I can see the system routes that are always present.

Feature: Uninstallation

   Scenario: Uninstall the module
     Given I am an admin
     And I am on the modules page
     And I can see 'routing_debug' module enabled
     And I uncheck it
     And I submit the form
     Then module will not be enabled
     And variable 'routing_debug_debug_mode' will not exist.