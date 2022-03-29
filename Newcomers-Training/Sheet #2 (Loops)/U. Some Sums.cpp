#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n,a,b;
  cin>>n>>a>>b;
  int ans=0;
  for(int i=1;i<=n;i++){
    string s=to_string(i);
    int sum=0;
    for(auto e:s){
      sum+=e-'0';
    }
    if(a<=sum && sum<=b){
      ans+=i;
    }
  }
  cout<<ans<<ln;
  return 0;
}