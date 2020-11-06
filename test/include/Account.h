#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include<iostream>
using namespace std;

class Account
{

    public:
    std::string name;
    int xp;
    Account(std::string c,int cp)
    :name{c},xp{cp}{}
    Account()
    :Account{"NU",23}{}
    Account(const Account &sursa)
    :name{"None"},xp{sursa.xp}{}
    void get_name(){cout<<name<<endl;}
    string talk(std::string s){return name+" "+"says"+" "+s;}
    void set_name(std::string c);
    Account create_account(){
        Account an_account{"Mama",22};
        return an_account;}
    ~Account(){cout<<"Destructor initialised for "+name+" class"<<endl;}
};

#endif // ACCOUNT_H
