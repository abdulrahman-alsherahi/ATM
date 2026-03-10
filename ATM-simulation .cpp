


// ATM 

#include <iostream>
using namespace std;

int password = 1234;
double balance = 1000;
int choice;

void showMenu() {
    cout << "\n========== ATM MENU ==========\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";
    cout << "==============================\n";
}

int main() {

    int inputPassword;
    int attempts = 0;

    while(attempts < 3) {

        cout << "Enter your password: ";
        cin >> inputPassword;

        if(inputPassword == password) {
            cout << "\nLogin Successful!\n";

            while(true) {

                showMenu();
                cout << "Enter your choice: ";
                cin >> choice;

                if(choice == 1) {
                    cout << "Your balance is: $" << balance << endl;
                }

                else if(choice == 2) {
                    double deposit;
                    cout << "Enter amount to deposit: ";
                    cin >> deposit;

                    if(deposit > 0) {
                        balance += deposit;
                        cout << "Deposit successful!\n";
                        cout << "New balance: $" << balance << endl;
                    } else {
                        cout << "Invalid amount!\n";
                    }
                }

                else if(choice == 3) {
                    double withdraw;
                    cout << "Enter amount to withdraw: ";
                    cin >> withdraw;

                    if(withdraw > balance) {
                        cout << "Insufficient balance!\n";
                    }
                    else if(withdraw <= 0) {
                        cout << "Invalid amount!\n";
                    }
                    else {
                        balance -= withdraw;
                        cout << "Withdrawal successful!\n";
                        cout << "New balance: $" << balance << endl;
                    }
                }

                else if(choice == 4) {
                    cout << "Thank you for using the ATM.\n";
                    return 0;
                }

                else {
                    cout << "Invalid choice, try again.\n";
                }
            }
        }

        else {
            attempts++;
            cout << "Wrong password!\n";
        }
    }

    cout << "Too many failed attempts. Account locked.\n";

    return 0;
}
