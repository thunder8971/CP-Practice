#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int a,b;
  cin>>a>>b;
  int counter=0;
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
      counter++;
      cout<<i<<" ";
    }
  }
  if(counter==0){
    cout<< -1 <<ln;
  }
  return 0;
}