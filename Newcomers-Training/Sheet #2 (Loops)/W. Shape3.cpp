#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
      cout<<"*";
    }
    cout<<ln;
  }
  for(int i=n;i>=0;i--){
    for(int j=1;j<=n-i;j++){
      cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
      cout<<"*";
    }
    cout<<ln;
  }
  return 0;
}