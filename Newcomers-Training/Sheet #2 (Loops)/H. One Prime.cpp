#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  bool prime=true;
  cin>>n;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      prime=false;
      break;
    }
  }
  if(prime){
    cout<<"YES"<<ln;
  }
  else{
    cout<<"NO"<<ln;
  }
  return 0;
}