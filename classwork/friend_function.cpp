#include <iostream>
using namespace std;
class Breadth;//Forward declaration
class Length
{
private:
    int l;
    friend void area(Length x,Breadth y);
public:
    void set(int val)
    {
        l=val;
    }
};
class Breadth
{
private:
    int b;
    friend void area(Length x,Breadth y);
public:
    void set(int val)
    {
        b=val;
    }

};
void area(Length x, Breadth y)
{
    int area = x.l * y.b;
    cout << "Area of Rectangle: " << area << " sq.units";
}
int main()
{
    Length x;
    x.set(10);
    Breadth y;
    y.set(20);
    area(x, y);
    return 0;
}