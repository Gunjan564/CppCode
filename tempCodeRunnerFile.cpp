#include<iostream>
using namespace std;
class student
{
private: 
    int roll=10;
public:
    int phno=9;
    
    void display(int a)
    {
        cout<<a<<endl<<"single"<<endl;
        
    }
    void display(int a,int b)
    {
        cout<<a<<endl<<b<<endl<<"double"<<endl;
        
    }
};
int main()
{
    student obj;
    // cout<<obj.phno<<endl;
    obj.display(89);
    obj.display(90,110);
return 0;
}