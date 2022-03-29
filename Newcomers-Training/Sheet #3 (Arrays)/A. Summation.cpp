#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  long long ans=0;
  for(auto e:arr){
    ans+=e;
  }
  cout<<abs(ans)<<ln;
  return 0;
}