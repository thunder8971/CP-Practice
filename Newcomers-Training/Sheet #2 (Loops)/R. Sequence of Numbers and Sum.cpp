#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n,m;
  while(cin>>n>>m&&n>0&&m>0){
    if(m<n){
      swap(n,m);
    }
    for(int i=n;i<=m;i++){
      cout<<i<<" ";
    }
    cout<<"sum ="<<(m*(m+1)/2-n*(n-1)/2)<<ln;
  }
  return 0;
}