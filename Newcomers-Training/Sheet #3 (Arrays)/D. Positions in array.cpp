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
    if(arr[i]<=10){
      cout<<"A["<<i<<"] = "<<arr[i]<<ln;
    }
  }
  return 0;
}