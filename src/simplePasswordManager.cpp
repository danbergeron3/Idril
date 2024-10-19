#include "../libs/simplePasswordManager.hpp"

SimplePasswordManager::SimplePasswordManager(string &_managerName) {
    cout << "Constructor 1\n";
    // take in manager name
    managerName = _managerName;
    
    // make password dir
    fs::path dirPath = vaultFolder;

    if(!fs::exists(dirPath) && !fs::create_directory(dirPath)) {
        throw::std::runtime_error("Failed to create directory: ");
    }

    // create password file dir

    string fileName = managerName + ".txt";
    fs::path fullManagerPath = dirPath / fileName;
    passwordManagerSrc.open(fullManagerPath, std::ios::in | std::ios::out | std::ios::app);
    if(!passwordManagerSrc) {
        throw::std::runtime_error("Failed to open vault: " + static_cast<string>(fullManagerPath));
    }
    

    // get path
    fs::path currentPath = std::filesystem::current_path();
    passwordManagerPath = currentPath / fullManagerPath;
}

SimplePasswordManager::SimplePasswordManager(Password &password, string &managerName, 
                std::fstream &passwordManagerSrc, fs::path passwordManagerPath) {
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

SimplePasswordManager::~SimplePasswordManager(){
    cout << "Destructor was called\n";
    passwordManagerSrc.close();
}