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
    if(arr[i]<0){
      arr[i]=2;
    }else if(arr[i]>0){
      arr[i]=1;
    }
  }
  for(auto e:arr){
    cout<<e<<" "; 
  }
  return 0;
}