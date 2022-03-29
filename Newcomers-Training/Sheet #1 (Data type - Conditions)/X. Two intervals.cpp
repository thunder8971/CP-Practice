#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
 
int main(){
  int l1,r1,l2,r2;
  cin>>l1>>r1>>l2>>r2;
  int l3=max(l1,l2),r3=min(r1,r2);
  if(l3<=r3){
    cout<<l3<<" "<<r3<<ln;
  }else{
    cout<<"-1"<<ln;
  }
  return 0;
}