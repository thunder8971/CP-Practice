#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  int even=0, odd=0, pos=0, neg=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x%2==0){
      even++;
    }else{
      odd++;
    }
    if(x>0){
      pos++;
    }else if(x<0){
      neg++;
    }
  }
  cout<<"Even: "<<even<<ln;
  cout<<"Odd: "<<odd<<ln;
  cout<<"Positive: "<<pos<<ln;
  cout<<"Negative: "<<neg<<ln;
  return 0;
}