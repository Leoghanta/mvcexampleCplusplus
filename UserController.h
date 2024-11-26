#pragma once

#include "User.h"
#include "UserView.h"
#include <vector>
#include <algorithm> 

class UserController {
private:
    std::vector<User> users;
    UserView view;

public:
    void addUser(const std::string& name, const std::string& role);
    void updateUserRole(const std::string& name, const std::string& newRole);
    void displayUser(const std::string& name);
    void listAllUsers();
    void removeUser(const std::string& name);
    void runProgram(); 
};

