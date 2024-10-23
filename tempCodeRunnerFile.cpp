//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string postToInfix(string exp)
    {
        int i = 0;
        stack<string> st;
        while (i < exp.size())
        {
            char c = exp[i];
            if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9'){
                st.push(string(1, c));
            }
            else if (c == '('){
                st.push(")");
            }
            else if (c == ')'){
                st.push("(");
            }
            else{
                string right = st.top();
                st.pop();
                string left = st.top();
                st.pop();
                stringstream temp;
                temp << "(" << left << c << right << ")";
                st.push(temp.str());
            }
            i++;
        }
        return st.top();
    }
};

//{ Driver Code Starts.

int main()
{
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--)
    {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends