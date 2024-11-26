#include "User.h"

User::User(const std::string& name, const std::string& role) {
    this->name = name;
    this->role = role;
}

std::string User::getName() const {
    return name;
}

std::string User::getRole() const {
    return role;
}

void User::setName(const std::string& newName) {
    name = newName;
}

void User::setRole(const std::string& newRole) {
    role = newRole;
}

