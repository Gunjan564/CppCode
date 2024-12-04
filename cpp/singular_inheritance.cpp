//if we make the derived class private then the 
//members of the base class will become private for the derived class. 
#include<iostream>
using namespace std;
class base//++++++++++++++++++++++++++++++++++++++++
{
private: 
    int data1;
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void base::setData()
{
    data1=10;
    data2=20;
}
int base:: getData1()
{
    return data1;
}
int base:: getData2()
{
    return data2;
}
class derived:public base//++++++++++++++++++++++++++++++
{
private:
    int data3;
public:
    void process();  
    void display();  
};
void derived::process(void)
{
    data3=data2*getData1();
}
void derived::display(void)
{
    cout<<"The value of data number 1: "<<getData1()<<endl;
    cout<<"The value of data number 2: "<<data2<<endl;
    cout<<"The value of data number 3: "<<data3<<endl;
}
int main()
{
    base obj;
    derived object;
    object.setData();//object of the derived class will not be 
                     //able to access the member of the base class after declaring the 
    object.process();
    object.display();
return 0;
}