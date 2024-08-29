// #include<iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t>=1)
//     {
//         int rem=0;
//         int x;
//         cin>>x;
//         int y;
//         cin>>y;
//         if(x>y/2)
//         {
//             rem=y%x;
//         }
//         else if(x<=y/2)
//         {
//             rem=y%((y/2)+1);
//         }
//         cout<<rem;
//     }
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

int gcd(int x,int y){
    int a = max(x,y);
    int b = min(x,y);
    int remainder;
    while(a%b != 0){
        remainder = a%b;
        a = b;
        b = remainder; // b is answer
    }
    return b;
}

int main(){
    int testCases;
    cin >> testCases;
    while(testCases--){
        int x,y;
        cin >> x >> y;
        int diff = abs(x-y);
        int step;
        if(diff == 0) cout << 0 <<" "<< 0 << endl;
        else{
            int step1 = x % diff;         
            int step2 = diff - step1;
            cout << diff << " " << min(step1, step2) << endl;
        }
    }
}

