// #include<iostream>
// using namespace std;

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     vector<long long> lcmAndGcd(long long A , long long B) {
//         // code here
//         vector<long long> vec;
//         int factor,lcm,Gcd;
//         if(A>B){
//             factor=B;
//             for(;factor!=0;){
//             if(B%factor==0&&A%factor==0){
//                 Gcd=factor;
//                 break;
//             }
//             factor--;
//             }
//         }
//         else if(B>A){
//             factor=A;
//             for(;factor!=0;){
//             if(B%factor==0&&A%factor==0){
//                 Gcd=factor;
//                 break;
//             }
//             factor--;
//             }
//         }
//         lcm=(A*B)/Gcd;
//         vec[0]=lcm;
//         vec[1]=Gcd;
//         cout<<vec[0]<<"A"<<vec[1];
//         return vec;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long A,B;

//         cin>>A>>B;

//         Solution ob;
//         vector<long long> ans = ob.lcmAndGcd(A,B);
//         cout<<ans[0]<<" "<<ans[1]<<endl;
//     }
//     return 0;
// }
// // } Driver Code Ends
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<long long> lcm(long long A, long long B)
    {
        vector<long long> vec;

        return vec;
    }
};
int main()
{

    return 0;
}