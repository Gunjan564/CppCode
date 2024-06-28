#include<iostream>
using namespace std;
class shop
{
private: 
    int id;
    float price;
public:
    void setdata(int i,float p)
    {
        id = i;
        price = p;
    }
    void getdata()
    {
        cout<<"id : "<<id<<endl;
        cout<<"Price : "<<price<<endl;
    }
};
int main()
{
    int size=3;
    int id;
    float price;
    shop *ptr=new shop[size];
    shop *pointer=ptr;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the id : ";
        cin>>id;
        cout<<"Enter the price : ";
        cin>>price;
        ptr->setdata(id,price);
        ptr++;
    }
    for(int i=0;i<size;i++)
    {
        pointer->getdata();
        pointer++;
    }


return 0;
}