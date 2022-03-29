#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  vector<int> v;
  int n,a,b;
  cin>>n>>a>>b;
  for(int i=1;i<=n;i++){
    string s=to_string(i);
    int sum=0;
    for(int j=0;j<s.size();j++){
      sum+=s[j]-'0';
    }
    if(sum>=a && sum<=b){
      v.push_back(i);
    }
  }
  int ans=0;
  for(auto e:v){
    ans+=e;
  }
  cout<<ans<<ln;
  return 0;
}