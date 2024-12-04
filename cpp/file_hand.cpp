#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s1="welcome hi";
    string s2;
    ofstream output("text_file.txt");
    output<<s1;
    output.close();  
    ifstream input("text_file.txt");
    getline(input,s2);
    cout<<s2;
    input.close();  
    return 0;
}

