#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  char s;
  cin>>s;
  if(s>='A'&&s<='Z'){
    cout<<char(s+32)<<ln;
  }else{
    cout<<char(s-32)<<ln;
  }
  return 0;
}