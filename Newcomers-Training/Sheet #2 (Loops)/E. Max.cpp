#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
 
int main(){
  int n;
  cin>>n;
  int ans=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x>ans){
      ans=x;
    }
  }
  cout<<ans<<ln;
  return 0;
}