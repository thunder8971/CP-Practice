#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n,q;
  cin>>n>>q;
  long long arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  long long sum[n+1];
  sum[0]=0;
  for(int i=0;i<n;i++){
    sum[i+1]=sum[i]+arr[i];
  }
  for(int i=0;i<q;i++){
    int l,r;
    cin>>l>>r;
    cout<<sum[r]-sum[l-1]<<ln;
  }
  return 0;
}