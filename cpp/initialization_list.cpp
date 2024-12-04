#include<iostream>
using namespace std;
class Test
{
private: 
int a;
int b;
public:
    Test(int i,int j):b(j),a(i)
    //Test(int i,int j):a(i+2),b(2+j)
    // Test(int i,int j):a(5),b(6)
    // Test(int i,int j):a(i),b(a+j)
    //Test(int i,int j):a(i+b),b(j)----->a is giving garbage value because value of b is declared after a
    //Test(int i,int j):b(j+a),a(i)
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main()
{
    Test object(1,2);
return 0;
}