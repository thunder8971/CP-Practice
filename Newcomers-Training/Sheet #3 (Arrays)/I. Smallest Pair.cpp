#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int ans=arr[0]+arr[1]+2-1;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        ans=min(ans,arr[j]+arr[i]+j+1-i-1);
      }
    }
    cout<<ans<<ln;
  }
  return 0;
}