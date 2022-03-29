#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int a,b,c;
  char s,q;
  cin>>a>>s>>b>>q>>c;
  if(s=='+'&&c==a+b){
    cout<<"Yes"<<ln;
  }else if(s=='-'&&c==a-b){
    cout<<"Yes"<<ln;
  }else if(s=='*'&&c==a*b){
    cout<<"Yes"<<ln;
  }else{
    if(s=='+'){
      cout<<a+b<<ln;
    }else if(s=='-'){
      cout<<a-b<<ln;
    }else if(s=='*'){
      cout<<a*b<<ln;
    }
  }
  return 0;
}