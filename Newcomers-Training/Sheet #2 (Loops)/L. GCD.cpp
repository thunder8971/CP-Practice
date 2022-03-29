#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int a,b;
  cin>>a>>b;
  int ans=0;
  for(int i=1;i<=max(a,b);i++){
    if(a%i==0 && b%i==0){
      ans=i;
    }
  }
  cout<<ans<<ln;
  return 0;
}