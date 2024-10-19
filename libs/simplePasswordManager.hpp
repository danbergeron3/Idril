
#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>
#include <filesystem>

// namespaces
namespace fs = std::filesystem;

// specific library functions
using std::unordered_map;
using std::string;
using std::cout;
using std::cin;

// classes
// (TODO:) Add a more robust way of handling passwords 
class Password {
 public:
   Password(string& _password) : password(_password) {}

 private:
   string password;
};

class SimplePasswordManager {
 public:

   SimplePasswordManager(Password &password, string &managerName);
   SimplePasswordManager(Password &password, string &managerName, 
                  std::fstream passwordManagerSrc, fs::path passwordManagerPath);

   // loads passwords into code
   void loadPasswords();

   
   // setters 
   void AddPassword();
   void RemovePassword();

   // getters 
   void getPassword();
   void getAllPasswords();

   // export passwords
   void exportPasswordManager();

   // inport passwords
   void inportPasswordManager();

   // displays DELETE me
   void dsiplayPassword();

   // destructor
   ~SimplePasswordManager() {
      cout << "Destructor was called\n";
   }

 private:
   
   string managerName;
   unordered_map<string, Password> passwordDictionary;
   
   // pointer to file src
   std::fstream passwordManagerSrc;
   
   // path to file for assertion
   fs::path passwordManagerPath;
   
};