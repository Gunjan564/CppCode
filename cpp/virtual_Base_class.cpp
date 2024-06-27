#include<iostream>
using namespace std;
/*
--------------Multiple Inheritance Path------------
student---->test
student---->sports
test,sports------>name
*/
class student
{
protected: 
    int Roll_Number;
public:
    void setRoll_Number(int roll)
    {
        Roll_Number=roll;
    }
};
class test:virtual public student
{
protected: 
    float maths,physics;
public:
    void setMarks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
};
class sports:virtual public student
{
protected: 
    float score;
public:
    void setscore(int sc)
    {
        score=sc;
    }
};
class name:public test,public sports
{
    protected:
    float result;
    public:
    void display_final_result()
    {
        cout<<"Roll Number: "<<Roll_Number<<endl;
        cout<<"Maths Marks: "<<maths<<endl;
        cout<<"Physics Marks: "<<physics<<endl;
        cout<<"Your PT score: "<<score<<endl;
        cout<<"Your final result: "<<maths + physics +score;
    }
};
int main()
{
    name Harry;
    Harry.setRoll_Number(1);
    Harry.setMarks(91,93);
    Harry.setscore(5);
    Harry.display_final_result();   
return 0;
}