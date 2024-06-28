#include<iostream>
using namespace std;
class Base
{
private: 
    int var_base;
public:
    void set_var_base(int a)
    {
        var_base=a;
    }
    virtual void display()
    {
        cout<<"value of base variable: "<<var_base<<endl;
    }
    void base_edited(int var_base)
    {
        cout<<"Edited base variable: "<<var_base+2<<endl;
    }
};
class Derived : public Base
{
private: 
    int var_derived;    
public:
    void set_var_derived(int a)
    {
        var_derived=a;
    }
    void display()
    {
        cout<<"value of derived variable: "<<var_derived<<endl;
    }
    void derived_edited(int var_derived)
    {
        cout<<"Edited derived variable: "<<var_derived+2<<endl;
    }
    void print()
    {
        cout<<"hello"<<endl;
    }
};
int main()
{
    Derived derived_object;
    Base base_object;
    Derived *derived_ptr;
    Base *base_ptr;
    base_ptr=&derived_object;
    base_ptr->set_var_base(87);
    //base_ptr->set_var_derived(43);throwing error
    base_ptr->display();//will invoke derived class display function because display function of base class is virtually invoked
return 0;
}