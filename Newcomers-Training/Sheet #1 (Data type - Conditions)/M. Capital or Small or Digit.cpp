#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  char s;
  cin>>s;
  if(s>='A'&&s<='Z'){
    cout<<"ALPHA"<<ln<<"IS CAPITAL"<<ln;
  }else if(s>='a'&&s<='z'){
    cout<<"ALPHA"<<ln<<"IS SMALL"<<ln;
  }else{
    cout<<"IS DIGIT"<<ln;
  }
  return 0;
}