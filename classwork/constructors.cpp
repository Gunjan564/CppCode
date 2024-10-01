#include<iostream>
using namespace std;
class prime
{
private: 
    int value;
public:
    prime()
    {
        cout<<"Enter a number: ";
        cin>>value;
        cout<<endl;
    }~prime(){}
    void prime_number()
    {
        int count=0;
        for(int i=1;i<=value/2;i++)
        {
            if(value%i==0)
            {
                count++;
            }
        }
        if(count>1)
        {
            cout<<"Number is not prime";
        }
        else cout<<"Number is prime"; 
    }
};
int main()
{
    prime number;
    number.prime_number();
return 0;
}