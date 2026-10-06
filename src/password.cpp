#include "password.h"
#include <iostream>
#include <fstream>
#include <string>   
#include <cstdlib>

const std::string PasswordManager::characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@";

std::string PasswordManager::generateRandomPassword(int length) {
    std::string password;
    for (int i = 0; i < length; ++i) {
        password += characters[rand() % characters.size()];
    }
    return password;
}
bool PasswordManager::saveToFile(const std::string& company, const std::string& login, const std::string& password) {
    std::ofstream file("passwords.txt", std::ios::app);
    if (!file.is_open()) {
        return false;
    }
    file << "Company: " << company << ", Login: " << login << ", Password: " << password << std::endl;
    //file.close();
    return true;
}