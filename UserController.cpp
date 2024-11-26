#include "UserController.h"
#include <vector>

void UserController::addUser(const std::string& name, const std::string& role) {
    for (const User& user : users) {
        if (user.getName() == name) {
            view.displayMessage("User " + name + " already exists.");
            return;
        }
    }
    users.push_back(User(name, role));
    view.displayMessage("User " + name + " added.");
}

void UserController::updateUserRole(const std::string& name, const std::string& newRole) {
    for (User& user : users) {
        if (user.getName() == name) {
            user.setRole(newRole);
            view.displayMessage("Updated " + name + "'s role to " + newRole + ".");
            return;
        }
    }
    view.displayMessage("User " + name + " not found.");
}

void UserController::displayUser(const std::string& name) {
    for (const User& user : users) {
        if (user.getName() == name) {
            view.displayUser(user);
            return;
        }
    }
    view.displayMessage("User " + name + " not found.");
}

void UserController::listAllUsers() {
    if (users.empty()) {
        view.displayMessage("No users found.");
        return;
    }
    view.displayAllUsers(users);
}

void UserController::removeUser(const std::string& name) {
    
    bool removed = false;
    for (int i = 0; i < users.size(); i++) {
        if (users.at(i).getName() == name) {
            users.erase(users.begin() + i);
            view.displayMessage("User " + name + " removed.");
            removed = true;
            break;
        }
    }
    if (!removed) {
        view.displayMessage("User " + name + " not found.");
    }
}

void UserController::runProgram() {
    char choice;
    do {
        std::string userInput;
        view.displayMenu();
        view.promptForInput("Enter Choice>> ", userInput);

        choice = userInput[0];

        switch (choice) {
        case '1': {
            std::string name, role;
            view.promptForInput("Enter name: ", name);
            view.promptForInput("Enter role: ", role);
            addUser(name, role);
            break;
        }
        case '2': {
            std::string name, newRole;
            view.promptForInput("Enter name of user to update: ", name);
            view.promptForInput("Enter new role: ", newRole);
            updateUserRole(name, newRole);
            break;
        }
        case '3': {
            std::string name;
            view.promptForInput("Enter name of user to display: ", name);
            displayUser(name);
            break;
        }
        case '4':
            listAllUsers();
            break;
        case '5': {
            std::string name;
            view.promptForInput("Enter name of user to remove: ", name);
            removeUser(name);
            break;
        }
        case '6':
            view.displayMessage("Exiting the program.");
            break;
        default:
            view.displayMessage("Invalid choice. Please try again.");
        }
    } while (choice != '6');
}


