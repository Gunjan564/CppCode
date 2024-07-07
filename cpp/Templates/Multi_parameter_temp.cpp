#include<iostream>
using namespace std;
template <class first,class second>
class display  
{
private: 
    first a;
    second b;
public:
    display(first a,second b){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b;
    }
};
int main()
{
    display <int , float>obj(2,1.3);
return 0;
}