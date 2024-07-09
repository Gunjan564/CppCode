#include <iostream>
using namespace std;
template <class T>
class display
{
private:
    T a;
    public : T dis;
    display()
    {
        dis = a;
        cout<<"constructor is invoked"<<endl;
    }
    void class_function();
};
template <class T>
void display<T>::class_function()
{
    cout << "Class function is invoked" << endl;
}
template <class TF>
void individual_func(TF a)
{
    cout<<"Individual function in invoked: a"<<endl;
}
int main()
{
    display <int>obj;
    obj.class_function();
    individual_func<char>('c');
    return 0;
}