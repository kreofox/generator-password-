#ifndef PASSWORD_H
#define PASSWORD_H

#include <string>

class PasswordManager {
    public:
        static std::string generateRandomPassword(int length = 8);
        static bool saveToFile(const std::string& company, const std::string& login, const std::string& password);
    private:
        static const std::string characters;
};

#endif // PASSWORD_H