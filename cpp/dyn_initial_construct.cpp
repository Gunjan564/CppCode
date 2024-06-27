//Default Constructor is necessary when an empty object is made and there is a parameterizwd constructor already exists
//But if the constructor is called individually, then there is no need of default constructor
//if the object is made with passing arguments simultaneously then there is no need of default constructor
#include <iostream>
#include<math.h>
using namespace std;
class BankDeposit
{
private:
    int p, r, t,n;

public:
    BankDeposit(){};
    BankDeposit(int p, int t, int r,int n);
    BankDeposit(int p, int t, float r,int n);
    BankDeposit(int x);
    void hello(void){
        cout<<"Hello"<<endl;
    }
};
    BankDeposit::BankDeposit(int p,int t,float r,int n)
    {
        float CompundInterest;
        CompundInterest=(p*(pow(1+(r/n),(n*t))))-p;
        cout<<"Compount Interest : "<<CompundInterest<<endl;
    };
    BankDeposit::BankDeposit(int p,int t,int r,int n)
    {
        float CompundInterest;
        CompundInterest=(p*(pow(1+(r/n),(n*t))))-p;
        cout<<"Compount Interest : "<<CompundInterest<<endl;        
    };
    BankDeposit::BankDeposit(int x)
    {
        int a=x;
        cout<<"Hello: "<<a;
    }

int main()
{  
    BankDeposit obj1; 
    obj1.hello();
    BankDeposit(10000,2,4,1);
    obj1=BankDeposit(4);
    return 0;
}