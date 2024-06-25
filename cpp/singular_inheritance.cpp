#include<iostream>
using namespace std;
class base
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
class derived:public base
{
private:
    int data3;
public:
    void process();  
    void display();  
};

void derived::process(void)
{

}

derived::~derived()
{
}

int main()
{
    
return 0;
}