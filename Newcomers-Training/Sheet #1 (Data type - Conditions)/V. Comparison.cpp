#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int a,b;
  char s;
  cin>>a>>s>>b;
  if(s=='<'&&a<b){
    cout<<"Right"<<ln;
  }else if(s=='>'&&a>b){
    cout<<"Right"<<ln;
  }else if(s=='='&&a==b){
    cout<<"Right"<<ln;
  }else{
    cout<<"Wrong"<<ln;
  }
  return 0;
}