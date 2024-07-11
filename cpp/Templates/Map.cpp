#include<iostream>
#include<map>
using namespace std;
void display(map<string,int> Random_Map){
map<string,int> :: iterator iter;
    for (iter = Random_Map.begin(); iter != Random_Map.end(); iter++)
    {
        cout<<(*iter).first<<" -> "<<(*iter).second<<endl;
    }
}
int main()
{
    map<string,int> Marks_Map;
    Marks_Map["Harry"]=98;
    Marks_Map["Hello"]=65;
    Marks_Map["Sayonara"]=97;
    Marks_Map.insert({{"Bye",43},{"i don't know",87}});
    display(Marks_Map);
    cout<<"The size is: "<<Marks_Map.size()<<endl;
    cout<<"The max size is: "<<Marks_Map.max_size()<<endl;
    return 0;
}