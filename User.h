#pragma once
#include <string>

class User {
private:
    std::string name;  
    std::string role; 
    std::string roleList[3] = { "Admin", "User", "Guest" };

public:
    User(const std::string& name, const std::string& role);

    std::string getName() const;
    std::string getRole() const;

    void setName(const std::string& name);
    void setRole(const std::string& role);
};


