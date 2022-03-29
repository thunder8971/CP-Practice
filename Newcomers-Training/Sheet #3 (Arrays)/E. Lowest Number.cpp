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
  int m=arr[0];
  for(int i=0;i<n;i++){
    m=min(arr[i],m);
  }
  for(int i=0;i<n;i++){
    if(arr[i]==m){
      cout<<m<<" "<<i+1<<ln;
      break;
    }
  }
  return 0;
}