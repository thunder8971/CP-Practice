#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int t;
  cin>>t;
  while(t--){
    int x,y;
    cin>>x>>y;
    if(x>y){
      swap(x,y);
    }
    cout<<((y)/2)*((y)/2)-((x+1)/2)*((x+1)/2)<<ln;
  }
  return 0;
}