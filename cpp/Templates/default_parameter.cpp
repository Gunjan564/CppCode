#include<iostream>
using namespace std;

template <class T1 =int,class T2 =float, class T3=char>
class display  
{
private: 
    T1 a;
    T2 b;
    T3 c;
public:
    display(T1 a,T2 b, T3 c){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl<<endl;
    }
};

int main()
{
    display <int , float, char>obj(2,1.3,'a');
    display <>object(2,1.3,'a');
    display <float, char, int>things(1.4,'r',8);    
return 0;
}