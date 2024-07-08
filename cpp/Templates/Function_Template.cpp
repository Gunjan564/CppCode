#include<iostream>
using namespace std;
template <class T>
T Func_average(T a,T b){
    return (a+b)/2;
}
template <class T1,class T2,class T3>
T3 Func_Difference(T1 a,T2 b){
    return a-b;
}
int main()
{
    cout<<Func_average<char>(2,3)<<endl;
    cout<<Func_Difference<int ,int,float>(4,5);
return 0;
}