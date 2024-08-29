#include<iostream>
using namespace std;
class item      
{
private: 
    int a;
    float b;
public:
    void getdata(int x,float y)
    {
        a=x;
        b=y;
    }
    void printdata()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main()
{
    item variable;
    variable.getdata(10,20.78);
    variable.printdata();
return 0;
}
