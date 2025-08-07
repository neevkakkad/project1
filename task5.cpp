#include <iostream>
using namespace std;

class Login {
private:
    string username;
    string password;

public:
    
    Login() {
        username = "Neev";
        password = "2287";
    }

    void login(string iUser, string iPass) {
        if (iUser == username) {
           
            if (iPass == password) {
                cout << "Login successful! Welcome, " << iUser << "!\n";
            } else {
                cout << "Incorrect password!\n";
            }
        } else {
            cout << "Username not found!\n";
        }
    }
};

int main() {
    Login system; 

    string enteredUser, enteredPass;

    cout << "=== Login System ===\n";
    cout << "Enter username: ";
    cin >> enteredUser;
    cout << "Enter password: ";
    cin >> enteredPass;

    
    system.login(enteredUser, enteredPass);

    return 0;
}
