#include<bits/stdc++.h>
using namespace std;
int F(int n){
  if(n==1||n==2){
    return 1;
  }
  else
  return F(n-1)+F(n-2);
}
int main()
{
  int n;
  cout<<F(n);
}