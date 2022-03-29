#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  long long a=0,b=1,c=0;
  long long n;
  cin>>n;
  for(int i=1;i<n;i++){
    a=b,
    b=c;
    c=a+b;
  }
  cout<<c<<ln;
  return 0;
}