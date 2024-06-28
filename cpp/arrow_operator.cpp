#include<iostream>
using namespace std;
class complex
{
private: 
    int real,imaginary;
public:
    void setdata(int r, int i)
    {
        real=r;
        imaginary=i;
    }
    void getdata()
    {
        cout<<"The real part is: "<<real<<endl;
        cout<<"The complex part is: "<<imaginary<<endl;
    }
};
int main()
{
    complex object;
    complex *ptr=&object;
    (*ptr).setdata(1,2);
    (*ptr).getdata();
    ptr->setdata(3,4);
    ptr->getdata();
    complex *point=new complex[3];
    point->setdata(5,6);
    point->getdata();
return 0;
}