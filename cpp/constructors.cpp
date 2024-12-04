/*-------------Characteristics of Constructors------------*/
// It should be declared in public section of the class
// They are automatically invoked whenever the object is created
// They cannot return values and do not have a return type
// We cannot refer to their address 
#include <iostream>
using namespace std;
class hello
{
private:
    int a, b;

public:
    hello()//----Default Constructor = Do not accepts parameters
    {
        a = 1, b = 2;
        cout<<"constructor is invoked"<<endl;
    }
    void print(void)
    {
        cout << "a = " << a << endl
             << "b = " << b;
    }
};
int main()
{
    hello call;
    call.print();
    
    return 0;
}
