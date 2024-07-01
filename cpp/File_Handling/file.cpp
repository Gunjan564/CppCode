/*
The useful classes for working with files in c++
1. fstreambase
2. ifstreambse -> derived from fstreambase
3. ofstreambase -> derived from fstreambase
*/
// In order to work with files you need to open. Primarily, there are 2 ways to open a file:
//1. Using a constructor
//2.Using the member function open() of the class
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s="Hello! This is not file Handling";
    // Opening the file using constructor to write in it
    // ofstream out("sample_file_2.txt");
    // out<<s;
    // Opening the file using constructor to read from it
    string str;
    // ifstream in("sample_file.txt");
    // in>>str;//just input one word
    // // cout<<str<<endl;
    // getline(in,str);//inputs the whole line in string s
    // cout<<str<<endl;
    // ofstream hout("sample_file_2.txt");
    // hout<<s;
    // hout.close();
    ifstream hin("sample_file.txt");
    //hin>>str;
    getline(hin,str);
    getline(hin,str);
    
    cout<<str;
    hin.close();
return 0;
}