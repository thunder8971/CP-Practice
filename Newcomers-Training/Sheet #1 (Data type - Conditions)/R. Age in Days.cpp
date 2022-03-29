#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  int year = n/365;
  int month = (n%365)/30;
  int day = (n%365)%30;
  cout<<year<<" years"<<ln;
  cout<<month<<" months"<<ln;
  cout<<day<<" days"<<ln;
  return 0;
}