#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
 
int main(){
  float n;
  cin>>n;
  if(n-(int)n>0){
    cout<<"float "<<(int)n<<" "<<n-(int)n<<ln;
  }else{
    cout<<"int "<<(int)n<<ln;
  }
  return 0;
}