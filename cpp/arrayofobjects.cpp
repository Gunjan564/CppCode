#include <iostream>
using namespace std;

   class data
   {
   private:
      int id;
      string colour;
   public:
      void SetData(void){
         cout<<"Enter the student's id: ";
         cin>>id;
         cout<<"Enter your colour: ";
         cin>>colour;
      };
      void DisplayData(void){
         cout<<"Student's id: "<<id<<endl;
         cout<<"Student's colour: "<<colour<<endl;
      };
   };   
   
   int main()
   {
      data students[4];
      for(int i=0;i<3;i++){
         students[i].SetData();
      }
      for(int i=0;i<3;i++){
         students[i].DisplayData();         
      }   
      return 0;
   }
