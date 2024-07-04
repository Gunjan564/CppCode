#include<iostream>
using namespace std;
class Vector
{
public:
    int size;
    int *arr,p=0;
    Vector(int n){
        size=n;
        arr=new int[size];
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
    Vector v1(3);
    v1.arr[0]=1;
    v1.arr[1]=2;
    v1.arr[2]=3;
    Vector v2(3);
    v2.arr[0]=1;
    v2.arr[1]=2;
    v2.arr[2]=3;
    cout<<v1.Dot_Product(v2);
return 0;
}