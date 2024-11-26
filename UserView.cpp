#include "UserView.h"

void UserView::displayUser(const User& user) {
    std::cout << "User: " << user.getName() << "\nRole: " << user.getRole() << "\n";
}

void UserView::displayAllUsers(const std::vector<User>& users) {
    for (const auto& user : users) {
        displayUser(user);
    }
}

void UserView::displayMenu() {
    std::cout << "\n--- User Management System ---\n";
    std::cout << "1. Add User\n";
    std::cout << "2. Update User Role\n";
    std::cout << "3. Display User\n";
    std::cout << "4. List All Users\n";
    std::cout << "5. Remove User\n";
    std::cout << "6. Exit\n";
    std::cout << "Choose an option: ";
}

void UserView::displayMessage(const std::string& message) {
    std::cout << message << std::endl;
}

void UserView::promptForInput(const std::string& prompt, std::string& input) {
    std::cout << prompt;
    std::getline(std::cin, input);
}


