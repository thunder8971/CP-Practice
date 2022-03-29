#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int a,b;
  cin>>a>>b;
  if(a%b==0||b%a==0){
    cout<<"Multiples"<<ln;
  }else{
    cout<<"No Multiples"<<ln;
  }
  return 0;
}