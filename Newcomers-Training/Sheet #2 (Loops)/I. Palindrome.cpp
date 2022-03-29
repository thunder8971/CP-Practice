#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  int n2;
  string aux=to_string(n);
  reverse(aux.begin(),aux.end());
  n2=stoi(aux);
  cout<<n2<<ln;
  if(n==n2){
    cout<<"YES"<<ln;
  }else{
    cout<<"NO"<<ln;
  }
  return 0;
}