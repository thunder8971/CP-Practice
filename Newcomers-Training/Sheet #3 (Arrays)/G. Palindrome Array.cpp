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
  bool palindrome=true;
  for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-i-1]){
      palindrome=false;
      break;
    }
  }
  if(palindrome){
    cout<<"YES"<<ln;
  }
  else{
    cout<<"NO"<<ln;
  }
  return 0;
}