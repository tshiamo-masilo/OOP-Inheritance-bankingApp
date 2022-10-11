#ifndef CREDIT_H
#define CREDIT_H

#include "Account.h"
#include <iostream>
using namespace std;

class Credit:Account
{
    public:
        Credit();
        Credit(double,int,string,double);
        virtual ~Credit();
        void takeLoan(double);
        void calculateInterest();
        void payLoan(double);

    protected:

    private:
        double interestRate = 0.0;
        double balance;
        double limit=1000000.00;
};

#endif // CREDIT_H
