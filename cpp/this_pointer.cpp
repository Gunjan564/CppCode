#include<iostream>
using namespace std;
class basic
{
private: 
    int a;
public:
    void setdata(int a)
    {
        this->a=a;//this pointer retrieve the object's a hidden by local variable a 
    }
    void getdata()
    {
        cout<<"value : "<<a;
    }
};
int main()
{
    basic object;
    object.setdata(2);
    object.getdata();
return 0;
}