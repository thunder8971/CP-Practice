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
    int dp[n][2];
    dp[0][0]=1;
    dp[0][1]=1;
    for(int i=1;i<n;i++){
      if(arr[i]>arr[i-1]){
        dp[i][0]=dp[i-1][0]+dp[i-1][1]+1;
        dp[i][1]=dp[i-1][1]+1;
      }else{
        dp[i][0]=dp[i-1][0]+1;
        dp[i][1]=1;
      }
    }
    cout<<dp[n-1][0]<<ln;
  }
  return 0;
}