#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  int n;
  cin>>n;
  bool primes[n+1];
  memset(primes, true, sizeof(primes));
  primes[0]=0;
  primes[1]=0;
  for(int p=2; p*p<=n; p++){
    if(primes[p]==true){
      for(int i=p*2; i<=n; i+=p){
        primes[i]=false;
      }
    }
  }
  for(int i=0; i<=n; i++){
    if(primes[i]==true){
      cout<<i<<" ";
    }
  }
  return 0;
}