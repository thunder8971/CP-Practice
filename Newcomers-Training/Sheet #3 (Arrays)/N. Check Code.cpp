#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int a,b;
  cin>>a>>b;
  string s;
  cin>>s;
  int cnt1=0;
  for(auto e:s){
    if(e>='0'&&e<='9'){
    }else if(e=='-'){
      cnt1++;
    }else{
      cout<<"No"<<ln;
      return 0;
    }
  }
  if(cnt1==1&&s[a]=='-'){
    cout<<"Yes"<<ln;
  }else{
    cout<<"No"<<ln;
  }
  return 0;
}