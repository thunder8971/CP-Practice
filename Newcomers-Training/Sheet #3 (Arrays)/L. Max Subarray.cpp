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
    for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
        int mx=arr[i];
        for(int k=i;k<=j;k++){
          mx=max(mx,arr[k]);
        }
        cout<<mx<<" ";
      }
    }
    cout<<ln;
  }
  return 0;
}