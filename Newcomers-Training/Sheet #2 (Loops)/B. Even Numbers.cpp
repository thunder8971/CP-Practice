#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  if(n==1){
    cout<<"-1"<<ln;
  }else{
    for(int i=1;i<=n;i++){
      if(i%2==0){
        cout<<i<<ln;
      }
    }
  }
  return 0;
}