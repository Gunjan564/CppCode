#include <iostream>
using namespace std;
class Y; 
class X
{
private:
    int val1;
public:
    friend void swap(X &a, Y &b);
    void display(X a,Y b);
    void set(int a)
    {
        val1 = a;
    }
};
class Y
{
private:
    int val2;
public:
    friend void swap(X &a, Y &b);
    friend void display(X a,Y b);
    void set(int b)
    {
        val2 = b;
    }
};
void swap(X &a, Y &b)
{
    int temp;
    temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
}
// void display(X a,Y b)
// {
//     cout << "a = " << a.val1 << endl;
//     cout << "b = " << b.val2 << endl;
// }
int main()
{
    X first;
    Y second;
    first.set(12);
    second.set(34);
    display(first,second);
    swap(first, second);
    display(first,second);
    return 0;
}