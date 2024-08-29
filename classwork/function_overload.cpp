#include<iostream>
using namespace std;
class hello
{
private: 
    int alpha;
    int beta;
    int gamma;
public:
    void set_values(int a,int b)
    {
        alpha=a;
        beta=b;
    }
    void set_values(int c)
    {
        gamma=c;
    }
    void display()
    {
        cout<<"a = "<<alpha<<endl;
        cout<<"b = "<<beta<<endl;
        cout<<"c = "<<gamma<<endl;
    }

};
int main()
{
    hello object;
    object.set_values(11,22);
    object.set_values(33);
    object.display();
return 0;
}