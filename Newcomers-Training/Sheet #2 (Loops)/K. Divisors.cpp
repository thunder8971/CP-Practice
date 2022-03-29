#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    if(n%i==0){
      cout<<i<<ln;
    }
  }
  return 0;
}