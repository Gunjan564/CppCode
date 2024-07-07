#include<iostream>
using namespace std;
template<class T>
class Vector
{
public:
    int size;
    T *arr,p=0;
    Vector(int n){
        size=n;
        arr=new T[size];
    }
    int Dot_Product(Vector v){
        for (int i = 0; i < size; i++)
        {
            p+=(this->arr[i])*v.arr[i];
        } 
        return p;       
    }
};
int main()
{
    Vector <int>v1(3);
    v1.arr[0]=1;
    v1.arr[1]=2;
    v1.arr[2]=3;
    Vector <int>v2(3);
    v2.arr[0]=1;
    v2.arr[1]=2;
    v2.arr[2]=3;
    cout<<v1.Dot_Product(v2);
return 0;
}