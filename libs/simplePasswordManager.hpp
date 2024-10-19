
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
  string key = "temp";
};

class SimplePasswordManager {
 public:

  SimplePasswordManager(string &_managerName);
  SimplePasswordManager(Password &_password, string &_managerName, 
                std::fstream& _passwordManagerSrc, fs::path _passwordManagerPath);

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
  ~SimplePasswordManager(); 

 private:
   
  const string vaultFolder = "vault";
  string managerName;
  unordered_map<string, Password> passwordDictionary;
  
  // pointer to file src
  std::fstream passwordManagerSrc;
  
  // path to file for assertion
  fs::path passwordManagerPath;
   
};