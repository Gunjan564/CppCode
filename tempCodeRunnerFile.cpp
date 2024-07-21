#include<iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string new_s;
        string reversed_s;

        for (int i = 0, j = 0; i < s.size(); i++) {
            if ((s[i] >= 65 && s[i] <= 90)) {

                new_s.push_back(s[i]+32);
                
            }
                else if (s[i] >= 97 && s[i] <= 122) {
                    new_s.push_back(s[i]);
                    
                }
            
        }
        reverse(new_s.begin(), new_s.end());
        cout<<new_s<<endl<<reversed_s;
        if (new_s == reversed_s)
            return true;
        else
            return false;
    }
};
int main()
{
    Solution palindrome;
    palindrome.isPalindrome("A man, a plan, a canal: Panama");
return 0;
}