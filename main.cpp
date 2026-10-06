#include "src/password.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    std::string company, login;
    std::cout << "Write company name: ";
    std::getline(std::cin, company);
    std::cout << "Write login: ";
    std::getline(std::cin, login);

    std::string password = PasswordManager::generateRandomPassword(12);
    if (PasswordManager::saveToFile(company, login, password)) {
        std::cout << "Saved. Password: " << password << std::endl;
    } else {
        std::cout << "Could not save to file." << std::endl;
    }
    return 0;
}