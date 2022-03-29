#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string aux=to_string(n);
    reverse(aux.begin(),aux.end());
    for(auto e:aux){
      cout<<e<<" ";
    }
    cout<<ln;
  }
  return 0;
}