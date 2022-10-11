#include <iostream>
#include "Savings.h"
using namespace std;

int main()
{
    Savings *obj1 = new Savings();
    Savings *obj2 = new Savings(123456,"Tshiamo", 12.3);
    cout<<"Object created"<<endl;
    return 0;
}
