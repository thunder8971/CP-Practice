#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n,m;
  cin>>n>>m;
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  int x;
  cin>>x;
  bool flag=false;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      flag=flag|arr[i][j]==x;
    }
  }
  if(flag){
    cout<<"will not take number"<<ln;
  }else{
    cout<<"will take number"<<ln;
  }
  return 0;
}