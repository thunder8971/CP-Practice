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
  int x;
  cin>>x;
  for(int i=0;i<n;i++){
    if(arr[i]==x){
      cout<<i<<ln;
      return 0;
    }
  }
  cout<<"-1"<<ln;
  return 0;
}