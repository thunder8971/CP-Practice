#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n,m;
  cin>>n>>m;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int count[m];
  memset(count,0,sizeof(count));
  for(auto e:arr){
    count[e-1]++;
  }
  for(auto e:count){
    cout<<e<<ln;
  }
  return 0;
}