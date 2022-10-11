#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

using namespace std;
class Account
{
    public:
        Account();
        //Account(int,String,double,double);
        virtual ~Account();

    protected:
        string name;
        double amount;
        int accNumber;
        double dateOpened;
        unsigned short int pin;
    private:

};

#endif // ACCOUNT_H
