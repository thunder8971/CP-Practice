#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  int arr[3];
  arr[0]=a;
  arr[1]=b;
  arr[2]=c;
  sort(arr,arr+3);
  cout<<arr[0]<<ln<<arr[1]<<ln<<arr[2]<<ln<<ln<<a<<ln<<b<<ln<<c<<ln;
  return 0;
}