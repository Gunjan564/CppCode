#include<iostream>
using namespace std;
class base1
{
protected: 
    int base1int;
public:
    void set_base1int(int a)
    {
        base1int=a;
    }
};
class base2
{
protected: 
    int base2int;
public:
    void set_base2int(int a)
    {
        base2int=a;
    }
};
class derived: public base1, public base2
{
public:
    void display(void)
    {
        cout<<"The value of base 1: "<<base1int<<endl;
        cout<<"The value of base 2: "<<base2int<<endl;
        cout<<"The sum of base 1 and base 2: "<<base1int + base2int<<endl;
    }
};
int main()
{
    derived integer;
    integer.set_base1int(10);
    integer.set_base2int(20);
    integer.display();
return 0;
}