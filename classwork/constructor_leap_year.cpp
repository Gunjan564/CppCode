#include<iostream>
using namespace std;
class leap_year
{
private: 
    int year;
public:
    leap_year()
    {
        cout<<"Enter an year: ";
        cin>>year;
    }
    leap_year(int year)
    {
        if(year%4==0)
        {
            cout<<"LEAP YEAR";
        }
        else{
            cout<<"Not a LEAP YEAR";
        }
    }
};
int main()
{
    leap_year object1;
    leap_year object2(2025);
return 0;
}