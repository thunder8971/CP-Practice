#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n,q;
  cin>>n>>q;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  for(int i=0;i<q;i++){
    int x;
    cin>>x;
    int l=0,r=n-1;
    bool flag=false;
    while(l<=r){
      int mid=(l+r)/2;
      if(arr[mid]==x){
        flag=true;
        break;
      }
      else if(arr[mid]<x){
        l=mid+1;
      }
      else{
        r=mid-1;
      }
    }
    if(flag){
      cout<<"found"<<ln;
    }
    else{
      cout<<"not found"<<ln;
    }
  }
  return 0;
}