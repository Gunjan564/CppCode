#include<iostream>
using namespace std;
class base1
{
protected: 
    int basedata1;
public:
    base1(int a)
    {
        basedata1=a;
        cout<<"Constructor of base1 is called"<<endl;
    }
    void display_base_data1()
    {
        cout<<"The value of base 1"<<endl;
    }
};
class base2
{
protected: 
    int basedata2;
public:
    base2(int a)
    {
        basedata2=a;
        cout<<"Constructor of base2 is called"<<endl;
    }
    void display_base_data2()
    {
        cout<<"The value of base 2"<<endl;
    }
};
class derived: public base1,public base2
{
    protected:
    int derived_int;
    public:
    derived(int a):base1(1),base2(2)
    {
        derived_int=a;
        cout<<"derived class constructor is called"<<endl;
    }
    void display_derived_int()
    {
        cout<<"The value of derived class data: "<<derived_int;
    }
};
int main()
{   
    derived object(1);
    object.display_base_data1();
    object.display_base_data2();
    object.display_derived_int();
return 0;
}