#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    /*
    Function Objects (Functors): Function wrapped in a class 
    so that it available like an object
    */
    int arr[]={1,3,87,2,99,4,100,5};
    sort(arr,arr+8,greater<int>());
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}