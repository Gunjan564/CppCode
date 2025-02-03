#include<iostream>
using namespace std;

class base 
{ 
protected:
string protect={"protect"};

private:
string privatee={"privatee"};

public:
string publics={"publics"};

};
/*                  Public Derivation      Private Derivation       Protected Derivation
1. Private Member    Not Inherited         Not Inherited            Not Inherited
1. Protected Member  Protected             Private                  Protected
2. Public Member     Public                Private                  Protected
*/ 
class derived : public base
{
    public:
    string derivedvariable={"derivedvariable"};
    string newprotect=protect;//protected members can be accessed by derived class 
    //string newprivate=privatee;//private members cannot be accessed by derived class
};
int main () 
{ 
    derived object;
    cout<<object.derivedvariable<<endl;
    //cout<<object.protect;
    //cout<<object.private;
    cout<<object.publics;
return 0;

}
