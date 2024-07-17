#include<iostream>
using namespace std;

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// class Solution {
//   public:
    void lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> vec;
        long long factor,lcm,Gcd,a=A,b=B;
        
        if(A>B){
            long long divisor=0;
            for(;a%b!=0;){
            divisor=a%b;
            a=b;
            b=divisor;
            }
            Gcd=b;
        }
        else if(b>a){
            long long divisor=0;
            for(;b%a!=0;){
            divisor=b%a;
            b=a;
            b=divisor;
            }
            Gcd=a;
        }
        lcm=(A*B)/Gcd;
        vec[0]=lcm;
        vec[1]=Gcd;
        cout<<vec[0]<<"A"<<vec[1];
     }
// };

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    //while (t--) {
        // long long A,B;

        // cin>>A>>B;

        // Solution ob;
        //vector<long long> ans = ob.lcmAndGcd(A,B);
        lcmAndGcd(10,5);
        //cout<<ans[0]<<" "<<ans[1]<<endl;
    //}
    return 0;
}
// } Driver Code Ends
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=56,b=17,vec[2],A=a,B=b;
// int factor,lcm,Gcd;
//         if(A>B){
//             long long divisor=0;
//             for(;A%B!=0;){
//             divisor=A%B;
//             A=B;
//             B=divisor;
//             }
//             Gcd=B;
//         }
//         else if(B>A){
//             long long divisor=0;
//             for(;B%A!=0;){
//             divisor=B%A;
//             B=A;
//             B=divisor;
//             }
//             Gcd=A;
//         }
//         lcm=(a*b)/Gcd;
//         vec[0]=lcm;
//         vec[1]=Gcd;
//         cout<<vec[0]<<" "<<vec[1];
// return 0;
// }