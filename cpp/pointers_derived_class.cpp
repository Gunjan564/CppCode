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
    void display()
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
};

int main()
{
    Base base_object; 
    Base *base_ptr;
    Derived derived_object;
    Derived *derived_ptr;
    base_ptr=&derived_object;
    base_ptr->set_var_base(23);//base class calling base class function
    base_ptr->display();//base class calling base class function
    derived_ptr->set_var_base(25);//derived class calling base class function
    base_ptr->display();//base class calling base class function 
    derived_ptr->set_var_derived(25);//derived class calling derived class function
    derived_ptr->display();//derived class calling derived class function
    
return 0;
}