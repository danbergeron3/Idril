#include "../libs/simplePasswordManager.hpp"

SimplePasswordManager::SimplePasswordManager(Password &password, string &managerName) {
    cout << "Constructor 1\n";
}

SimplePasswordManager::SimplePasswordManager(Password &password, string &managerName, 
                std::fstream passwordManagerSrc, fs::path passwordManagerPath) {
    cout << "Constructor 2\n";
}

   // loads passwords into code
void SimplePasswordManager::loadPasswords(){
    cout << "loading Password\n";
}


// setters 
void SimplePasswordManager::AddPassword(){
    cout << "Adding password\n";
}


void SimplePasswordManager::RemovePassword(){
    cout << "removing password\n";
}

// getters 
void SimplePasswordManager::getPassword(){
    cout << "getting password\n";
}

void SimplePasswordManager::getAllPasswords(){
    cout << "getting all passwords\n";
}

// export passwords
void SimplePasswordManager::exportPasswordManager(){
    cout << "exporting passwords\n";
}

// inport passwords
void SimplePasswordManager::inportPasswordManager(){
    cout << "Inporting passwords\n";
}

// displays DELETE me
void SimplePasswordManager::dsiplayPassword(){
    cout << "dsiplay Passwords";
}
