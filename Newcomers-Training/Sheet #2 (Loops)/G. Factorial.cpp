#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
 
int main(){
  int t;
  cin>>t;
  for(int tt=1;tt<=t;tt++){
    int n;
    cin>>n;
    long long ans=1;
    for(int i=1;i<=n;i++){
      ans=ans*i;
    }
    cout<<ans<<ln;
  }
  return 0;
}