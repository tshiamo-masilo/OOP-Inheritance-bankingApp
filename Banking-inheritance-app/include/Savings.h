#ifndef SAVINGS_H
#define SAVINGS_H
#include <iostream>
#include "Account.h"

using namespace std;
class Savings: Account
{
    public:
        Savings();
        Savings(int,string,double);
        void printBalance();
        virtual ~Savings();
        void withdraw(double);
        void transfer(double);
        void deposit(double);

    protected:

    private:
        double interestRAte = 0.0;
};

#endif // SAVINGS_H
