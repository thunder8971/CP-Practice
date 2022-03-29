#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int a,b;
  cin>>a>>b;
  vector<int> lucky;
  for(int i=a;i<=b;i++){
    string aux=to_string(i);
    bool flag=true;
    for(auto e:aux){
      if(e!='4' && e!='7'){
        flag=false;
        break;
      }
    }
    if(flag){
      lucky.push_back(i);
    }
  }
  if(lucky.size()==0){
    cout<<"-1"<<ln;
  }else{
    for(auto e:lucky){
      cout<<e<<" ";
    }
  }
  return 0;
}