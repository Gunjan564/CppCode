#include<iostream>
using namespace std;
int main()
{
    int a=10;//stores value in stack memory
    /*---------Values assigned below are stored in heap--------*/
    int *p=new int(10);
    cout<<"The value at address p : "<<*p<<endl;
    delete[] p;
    cout<<"The value at address p after deleting : "<<*p<<endl;
    p=new int(20);
    cout<<"The value at address p : "<<*p<<endl;
    delete[] p;
    cout<<"The value at address p after deleting : "<<*p<<endl;
    float *q=new float(30);
    cout<<"The value at address q : "<<*q<<endl;
    delete[] q;
    cout<<"The value at address q : "<<*q<<endl;
    int *arr= new int[3];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    cout<<"arr[0] = "<<arr[0]<<endl;
    cout<<"arr[1] = "<<arr[1]<<endl;
    cout<<"arr[2] = "<<arr[2]<<endl;
    delete[] arr;
    cout<<"arr[0] = "<<arr[0]<<endl;
    cout<<"arr[1] = "<<arr[1]<<endl;
    cout<<"arr[2] = "<<arr[2]<<endl;
return 0;
}