#include<iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout<<"Hello"<<endl;
    }
};
class base2
{ 
public:
    void greet()
    {
        cout<<"Hi! How are You"<<endl;
    }
};
class derived:public base1,public base2
{
    public:
    void greet1()
    {
        base1::greet();
        base2::greet();
    }
    void greet()
    {
        cout<<"Hey! how's your day going bro"<<endl;
    }
};
int main()
{
    derived object;
    object.greet1();
    object.base1::greet();
    object.base2::greet();
    object.greet();
return 0;
}