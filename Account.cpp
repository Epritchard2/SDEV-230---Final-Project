#include "Account.h"

Account::Account() {
    monthlyIncome = 0.0;
}

void Account::setIncome(double income) {
    monthlyIncome = income;
}

double Account::getIncome() {
    return monthlyIncome;
}
