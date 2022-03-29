#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  for(int i=2; i<=n; i++){
    bool ok=true;
    for(int j=2;j*j<=i;j++){
      if(i%j==0){
        ok=false;
        break;
      }
    }
    if(ok){
      cout<<i<<" ";
    }
  }
  return 0;
}