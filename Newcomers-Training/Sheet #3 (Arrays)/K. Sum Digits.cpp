#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    char c;
    cin>>c;
    arr[i]=c-'0';
  }
  int ans=0;
  for(auto e:arr){
    ans+=e;
  }
  cout<<ans<<ln;
  return 0;
}