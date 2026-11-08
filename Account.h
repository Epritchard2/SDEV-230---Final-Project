#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    double monthlyIncome;

public:
    Account();
    void setIncome(double income);
    double getIncome();
};

#endif
