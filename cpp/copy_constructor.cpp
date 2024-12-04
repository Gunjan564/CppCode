// compliler provides its own copy constructor
#include <iostream>
using namespace std;
class Number
{
private:
   int a;

public:
   Number()
   {
      // a = 0;
      // cout << "Default constructor is called: " << a << endl;
   }
   // Number(int n)
   // {
   //    a = n;
   //    cout << "Parameterized constructor is called: " << a << endl;
   // }
   // void display()
   // {
   //    cout << "Display function is called: " << a << endl;
   // }
   Number(Number &obj)
   {
      cout << "Copy constructor is called" << endl;
      // a = obj.a;
   }
};
int main()
{
   // Number z, z1, z2, z3(4), z4(z3); // copy constructor is invoked for z4
   Number a,a1(a);
   // z.display();
   // z3.display();
   // z4.display();
   // z = z1;         // copy constructor is not invoked
   // Number z5 = z2; // copy constructor is invoked
   return 0;
}