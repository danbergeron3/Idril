#include "../libs/simplePasswordManager.hpp"

int main(int argc, char* argv[]){

    cout << "PasswordManager Driver: Will move to test later \n";
    string test1 = "12345";
    Password password1(test1);

    
    string temp = "test1";
    SimplePasswordManager manager(temp);
    manager.loadPasswords();
    manager.inportPasswordManager();
    manager.getAllPasswords();
    manager.AddPassword();
    manager.getPassword();
    manager.exportPasswordManager();
    manager.RemovePassword();
    return 0;
}