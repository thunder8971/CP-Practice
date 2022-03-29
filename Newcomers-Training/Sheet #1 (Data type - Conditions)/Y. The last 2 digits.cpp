#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  a=a%100;
  b=b%100;
  c=c%100;
  d=d%100;
  int ans=(a*b*c*d)%100;
  if(ans<=9){
    cout<<"0"<<ans<<ln;
  }else{
    cout<<ans<<ln;
  }
  return 0;
}