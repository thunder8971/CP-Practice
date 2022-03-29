#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  int a[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  int md=0,sd=0;
  for(int i=0;i<n;i++){
    md+=a[i][i];
    sd+=a[i][n-i-1];
  }
  cout<<abs(md-sd)<<ln;  
  return 0;
}