#include <iostream>
using namespace std;

class parameter 
{
    private:
    int a,b;
    public:
    parameter(){
        cout<<"default"<<endl;
    }
    parameter(int b,int a = 0)
    {
        cout<<"a + b = "<<a+b<<endl;
    }
    void hello1()
    {
        cout<<"hello";
    }
    // void hello(parameter kite)
    // {
    //     kite.hello1();
    //     cout<<"hello"<<endl;
    // }
};

int main() {
    parameter two;//parameterized constructors
    // parameter();

    return 0;
}