#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  int a[n],b[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  sort(a,a+n);
  sort(b,b+n);
  bool flag=true;
  for(int i=0;i<n;i++){
    if(a[i]!=b[i]){
      flag=false;
      break;
    }
  }
  if(flag){
    cout<<"yes"<<ln;
  }else{
    cout<<"no"<<ln;
  }
  return 0;
}