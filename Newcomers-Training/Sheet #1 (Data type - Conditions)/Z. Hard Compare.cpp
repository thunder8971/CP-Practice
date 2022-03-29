#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  double a,b,c,d;
  cin>>a>>b>>c>>d;
  if(b*log2(a)>d*log2(c)){
    cout<<"YES"<<ln;
  }else{
    cout<<"NO"<<ln;
  }
  return 0;
}