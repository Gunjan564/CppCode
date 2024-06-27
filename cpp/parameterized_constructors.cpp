#include <iostream>
using namespace std;

class parameter 
{
    private:
    int a,b;
    public:
    parameter(int a,int b)
    {
        cout<<"a + b = "<<a+b<<endl;
    }
    void hello()
    {
        cout<<"hello";
    }
};
int main() {
    parameter(4,5);
    parameter two(4,5);//parameterized constructors
    
    return 0;
}