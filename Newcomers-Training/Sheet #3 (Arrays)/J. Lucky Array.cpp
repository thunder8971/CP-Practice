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
    m=min(m,arr[i]);
  }
  int counter=0;
  for(auto e:arr){
    if(e==m){
      counter++;
    }
  }
  if(counter%2==1){
    cout<<"Lucky"<<ln;
  }else{
    cout<<"Unlucky"<<ln;
  }
  return 0;
}