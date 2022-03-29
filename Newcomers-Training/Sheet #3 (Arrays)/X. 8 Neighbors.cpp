#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n,m;
  cin>>n>>m;
  char arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  int x,y;
  cin>>x>>y;
  x--;
  y--;
  bool ans=true;
  if(x-1>=0){
    if(arr[x-1][y]!='x'){
      ans=false;
    }
  }
  if(x-1>=0&&y+1<m){
    if(arr[x-1][y+1]!='x'){
      ans=false;
    }
  }
  if(y+1<m){
    if(arr[x][y+1]!='x'){
      ans=false;
    }
  }
  if(x+1<n&&y+1<m){
    if(arr[x+1][y+1]!='x'){
      ans=false;
    }
  }
  if(x+1<n){
    if(arr[x+1][y]!='x'){
      ans=false;
    }
  }
  if(x+1<n&&y-1>=0){
    if(arr[x+1][y-1]!='x'){
      ans=false;
    }
  }
  if(y-1>=0){
    if(arr[x][y-1]!='x'){
      ans=false;
    }
  }
  if(x-1>=0&&y-1>=0){
    if(arr[x-1][y-1]!='x'){
      ans=false;
    }
  }
  if(ans){
    cout<<"yes"<<ln;
  }else{
    cout<<"no"<<ln;
  }

  return 0;
}