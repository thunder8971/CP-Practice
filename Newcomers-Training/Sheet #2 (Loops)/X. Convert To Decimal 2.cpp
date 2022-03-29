#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int binpow(int a,int b){
  int res=1;
  while(b>0){
    if(b%2==1){
      res*=a;
    }
    a*=a;
    b>>=1;
  }
  return res;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int counter=0;
    while(n>0){
      if(n&1){
        counter++;
      }
      n>>=1;
    }
    cout<<binpow(2,counter)-1<<ln;
  }
  return 0;
}