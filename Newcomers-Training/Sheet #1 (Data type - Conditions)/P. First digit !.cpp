#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int x;
  cin>>x;
  x=x/1000;
  if(x%2==1){
    cout<<"ODD"<<ln;
  }else{
    cout<<"EVEN"<<ln;
  }
  return 0;
}