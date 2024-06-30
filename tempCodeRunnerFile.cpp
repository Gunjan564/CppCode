// int arr[3];
//         for(int i=0;i<3;i++){
//             cin>>arr[i];
//         }
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
    
    int n; 
    if((a<b&&b<c)||(c<b&&b<a)){
        n=b;
    }
    else if((c<a&&a<b)||(b<a&&a<c)){
        n=a;
    }
    else if((b<c&&c<a)||(a<c&&c<b))
    {
        n=c;
    }
    cout<<n;
    }

}