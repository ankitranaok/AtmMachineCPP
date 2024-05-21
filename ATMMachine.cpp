#include <iostream>
using namespace std;

class ATM {
    float balance;
    int PIN = 1234;

public:
    void checkPin() {
        cout << "Enter your pin: ";
        int enter_pin;
        cin >> enter_pin;
        if (enter_pin == PIN) {
            menu();
        } else {
            cout << "Enter a valid pin" << endl;
            //menu();
        }
    }

    void menu() {
        cout << "Enter your choice" << endl;
        cout << "1. Check A/C balance" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Deposit money" << endl;
        cout << "4. Exit" << endl;

        int opt;
        cin >> opt;

        if (opt == 1) {
            checkBalance();
        } else if (opt == 2) {
            withdrawMoney();
        } else if (opt == 3) {
            depositMoney();
        } else if (opt == 4) {
            return;
        } else {
            cout << "Enter a valid number" << endl;
        }
    }

    void checkBalance() {
        cout << "Balance: " << balance << endl;
        menu();
    }

    void withdrawMoney() {
        cout << "Enter money to withdraw: ";
        float amount;
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance = balance - amount;
            cout << "Money withdraw successful" << endl;
        }
        menu();
    }

    void depositMoney() {
        cout << "Enter the amount: ";
        float amount;
        cin >> amount;
        balance = balance + amount;
        cout << "Money Deposited successfully" << endl;
        menu();
    }
};

int main() {
    ATM obj;
    obj.checkPin();
    return 0;
}
