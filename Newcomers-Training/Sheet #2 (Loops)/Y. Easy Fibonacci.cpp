#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  int a=0,b=0,c=1;
  cout<<0<<" ";
  for(int i=1;i<n;i++){
    cout<<c<<" ";
    a=b;
    b=c;
    c=a+b;
  }
  cout<<ln;
  return 0;
}