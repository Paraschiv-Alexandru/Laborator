#include <iostream>
#include "Account.h"
#include<string>
using namespace std;

void display(Account x){
    cout<<x.name<<endl<<x.xp<<endl;
    }

int main()
{

    Account Tata;
    cout<<Tata.name<<endl<<Tata.xp<<endl;
    Account Mama{Tata};
    cout<<Mama.name<<endl<<Mama.xp<<endl;
    return 0;
}
