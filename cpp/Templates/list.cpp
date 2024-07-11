//List stores data in heap but array stores data in stack
#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lis){
    list<int> :: iterator iter;
    for ( iter = lis.begin(); iter != lis.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;    
}
int main()
{
    list<int> list1;//list of 0 length
    list<int> list2(3);//Empty list size 7
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(1);
    list1.push_back(4);
    display(list1);
    //Removing elements from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(1);
    display(list1);
    list<int> list3(4);
    list<int> :: iterator iter;
    iter=list3.begin();
    *iter=74;
    iter++;
    *iter=12;
    iter++;
    *iter=42;
    display(list3);
    list1.sort();
    list3.sort();
    display(list1);
    display(list3);
    list1.merge(list3);
    display(list1);
return 0;
}