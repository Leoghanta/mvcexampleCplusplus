#pragma once

#include "User.h"
#include <vector>
#include <iostream>
#include <string>

class UserView {
public:
    void displayUser(const User& user);
    void displayAllUsers(const std::vector<User>& users);
    void displayMenu();
    void displayMessage(const std::string& message);
    void promptForInput(const std::string& prompt, std::string& input);
};


