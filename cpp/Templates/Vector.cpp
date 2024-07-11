/*--------------------------Modifiers---------------------------------
assign -->	Assign vector content (public member function)
push_back -->	Add element at the end (public member function)
pop_back -->	Delete last element (public member function)
insert -->	Insert elements (public member function)
erase -->	Erase elements (public member function)
swap -->	Swap content (public member function)
clear -->	Clear content (public member function)
emplace -->	Construct and insert element (public member function)
emplace_back -->	Construct and insert element at the end (public member function
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include <vector>
template <class T>
void display(vector<T> v)
{
    for(int i =0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";//alternate of above statement
    }
}
int main()
{
    // vector<int> vec1;//zero length integer vector
    // int element,size;
    // cout<<"Enter the size of the vector: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter the element to insert in the vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,345);
    // cout<<endl;
    // display(vec1);
    // cout<<endl;
    //Creating vector
    vector<char> vec2(4);
    vec2.push_back('5');
    display(vec2);
    cout<<endl;
    vector<char> vec3(vec2);
    display(vec3);
    cout<<endl;
    vector<int> vec4(6,3);
    display(vec4);
return 0;
}