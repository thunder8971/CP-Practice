#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int a,b;
  char s;
  cin>>a>>s>>b;
  if(s=='+'){
    cout<<a+b<<ln;
  }else if(s=='-'){
    cout<<a-b<<ln;
  }else if(s=='*'){
    cout<<a*b<<ln;
  }else if(s=='/'){
    cout<<a/b<<ln;
  }
  return 0;
}