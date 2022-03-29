#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  float a,b;
  cin>>a>>b;
  cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<ln;
  cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<ln;
  cout<<"round "<<a<<" / "<<b<<" = "<<round(a/b)<<ln;
  return 0;
}