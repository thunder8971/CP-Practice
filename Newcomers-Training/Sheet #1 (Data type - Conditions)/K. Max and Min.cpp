#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  cout<<min(a,min(b,c))<<" "<<max(a,max(b,c))<<ln;
  return 0;
}