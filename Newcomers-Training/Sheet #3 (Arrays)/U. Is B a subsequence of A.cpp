#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n,m;
  cin>>n>>m;
  int a[n],b[m];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<m;i++){
    cin>>b[i];
  }
  bool ans=true;
  int lastidx=0;
  for(int i=0;i<m;i++){
    bool flag=false;
    for(int j=lastidx;j<n;j++){
      if(b[i]==a[j]){
        flag=true;
        lastidx=j+1;
        break;
      }
    }
    ans=ans&flag;
  }
  if(ans){
    cout<<"YES"<<ln;
  }else{
    cout<<"NO"<<ln;
  }
  return 0;
}