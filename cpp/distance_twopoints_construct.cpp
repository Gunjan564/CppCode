#include <iostream>
#include <math.h>
using namespace std;
class X
{
private:
   int x, y;

public:
   friend void distance(X a, X b);
   void setdata(int a, int b)
   {
      x = a;
      y = b;
   }
   void display(int x, int y)
   {
      cout << "point = ( " << x << "," << y << ")";
   }
};

void distance(X a, X b)
{
   float distance;
   distance = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
   cout << "Distance between a and b is: "<< distance<<" sq.units";
}
int main()
{
   int x, y;
   X a, b;

   cout << "Enter the x coordinate of point A: ";
   cin >> x;
   cout << "Enter the y coordinate of point A: ";
   cin >> y;
   a.setdata(x, y);
   cout << "Enter the x coordinate of point B: ";
   cin >> x;
   cout << "Enter the y coordinate of point B: ";
   cin >> y;
   b.setdata(x, y);
   distance(a, b);
   return 0;
}