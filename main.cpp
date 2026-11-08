
#include <iostream>
#include "Account.h"
using namespace std;

void displayBudget(double income) {
    cout << "\n===== Monthly Budget =====\n";
    cout << "Monthly Income: $" << income << "\n";
    cout << "Needs (50%): $" << income * 0.50 << "\n";
    cout << "Wants (30%): $" << income * 0.30 << "\n";
    cout << "Savings (20%): $" << income * 0.20 << "\n";
}

int main() {
    Account account;
    int choice = 0;
    double income;

    while (choice != 3) {
        cout << "\n===== Budget Manager =====\n";
        cout << "1. Set Monthly Income\n";
        cout << "2. View Budget\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter your monthly income after taxes: $";
            cin >> income;

            if (income < 0) {
                cout << "Income cannot be negative.\n";
            }
            else {
                account.setIncome(income);
                cout << "Monthly income updated.\n";
            }
        }
        else if (choice == 2) {
            displayBudget(account.getIncome());
        }
        else if (choice == 3) {
            cout << "Goodbye!\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
