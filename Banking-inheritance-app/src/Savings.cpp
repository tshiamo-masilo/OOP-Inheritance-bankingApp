#include "Savings.h"
#include "Account.h"
Savings::Savings()
{

    this->accNumber = 000000;
    this->name = "John Doe";
    this->amount = 0.0;

    cout<<"Test"<<endl;
    cout<<"===========Account created==========\n";
    this->printBalance();
    //ctor
}

Savings::Savings(int number,string Name,double amount){
    this->name = Name;
    this->accNumber = number;
    this->amount = amount;
    cout<<"=====Account created=====\n";
    this->printBalance();

}

void Savings::printBalance(){
    cout<<"===========Acount Summary==========="<<endl;
    cout<<"\t"<<"\t"<<"\t"<<endl;
    cout<<this->name <<"\t"<<this->accNumber<<"\t"<<this->amount<<endl;
}


void Savings::withdraw(double amount){
    if(this->amount<amount){
        cout<<"Insufecient balance :("<<endl;

    }else{

        this->amount -= amount;
        this->printBalance();
    }

}

void Savings::transfer(double amount){
    if(this->amount<amount){
        cout<<"Insufecient balance :("<<endl;

    }else{

        this->amount -= amount;
        this->printBalance();
    }
}

void Savings::deposit(double amount){
    this->amount += amount;
    this->printBalance();
}
Savings::~Savings()
{
    //dtor
}
