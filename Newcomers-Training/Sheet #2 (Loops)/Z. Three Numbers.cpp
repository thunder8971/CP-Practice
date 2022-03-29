#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  long long k,s;
  cin>>k>>s;
  int ans=0;
  for(long long x=0;x<=k;x++){
    for(long long y=0;y<=k;y++){
      if(s-x-y>=0&&s-x-y<=k){
        ans++;
      }
    }
  }
  cout<<ans<<ln;
  return 0;
}