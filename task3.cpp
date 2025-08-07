#include <iostream>
using namespace std;

class ATM {
private:
    double balance;
    string pin;

public:
    ATM() {
        balance = 0.0;
        pin = "9624825085"; 
    }

    
    void setPin(string newPin) {
        pin = newPin;
    }

    string getPin() {
        return pin;
    }

  
    void setBalance(double newBalance) {
        balance = newBalance;
    }

    double getBalance() {
        return balance;
    }


    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }


    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "invalid amount!" << endl;
        }
    }

  
    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    ATM userAccount;
    int choice;
    double amount;
    string enteredPin;
    bool exit = false;

    
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != userAccount.getPin()) {
        cout << "Incorrect PIN. Access Denied.\n";
        return 0;
    }
    int i;
    ATM b1;
    for(i=1;i<=3;i++)
    {
        int choice,amount;
        cout << "\n==== ATM Menu ====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            userAccount.showBalance();
            break;
        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            userAccount.deposit(amount);
            break;
        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            userAccount.withdraw(amount);
            break;
        case 4:
            cout << "Thank you for using the ATM!\n";
            exit = true;
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
