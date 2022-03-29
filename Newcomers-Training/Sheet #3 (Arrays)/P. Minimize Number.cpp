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
  for(int i=0;i<n;i++){
    int aux=0;
    while(arr[i]%2==0){
      aux++;
      arr[i]/=2;
    }
    arr[i]=aux;
  }
  int ans=arr[0];
  for(int i=0;i<n;i++){
    ans=min(ans,arr[i]);
  }
  cout<<ans<<ln;
  return 0;
}