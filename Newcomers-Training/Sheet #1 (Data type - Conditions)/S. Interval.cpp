#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
 
int main(){
  float x;
  cin>>x;
  if(x>=0&&x<=25){
    cout<<"Interval [0,25]"<<ln;
  }else if(x>25&&x<=50){
    cout<<"Interval (25,50]"<<ln;
  }else if(x>50&&x<=75){
    cout<<"Interval (50,75]"<<ln;
  }else if(x>75&&x<=100){
    cout<<"Interval (75,100]"<<ln;
  }else{
    cout<<"Out of Intervals"<<ln;
  }
  return 0;
}