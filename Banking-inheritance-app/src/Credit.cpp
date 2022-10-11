#include "Credit.h"

Credit::Credit()
{
    //ctor
}


Credit::Credit(double balance,int pin,string name,double interest){
    this->name = name;
    this->pin = pin;
    this->balance = balance;
    this->interestRate = interest;
}

void Credit::takeLoan(double b){
    double calcA = this->balance + b;
    if(this->balance>0.0){
        this->balance = b;
    }else if(calcA>limit){
        cout<<"Limit reached take out loan of "<<(limit-calcA)<<endl;
    }else if(this->balance < limit){
        this->balance+=b;
    }else{
        cout<<"Limit reached"<<endl;

    }
}
void Credit::calculateInterest(){
    //function that rebases the loan
}
void Credit::payLoan(double payment){
    if(payment > this->balance){

    }else{
        this->balance -= payment;
        cout<<""<<endl;
    }
}
Credit::~Credit()
{
    //dtor
}
