#include<iostream>
using namespace std;
class student
{
private: 
public:
    int Roll_Number;
    void setRoll_No(int id)
    {
        Roll_Number=id;
    }
};
class marks:public student
{
    public: 
    int maths,physics;
    void setmarks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
};
class result:public marks
{
    public:
    void display_Result(void){
        cout<<"Your Percentage is: "<<(maths+physics)/2;
    }
};
int main()
{
    result harry;
    harry.setRoll_No(1);
    cout<<"Roll No.: "<<harry.Roll_Number<<endl;
    harry.setmarks(90,90);
    cout<<"Marks in Maths: "<<harry.maths<<endl;
    cout<<"Marks in Physics: "<<harry.physics<<endl;
    harry.display_Result();
    return 0;
}