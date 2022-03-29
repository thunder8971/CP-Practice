#include <bits/stdc++.h>
using namespace std;
#define ln '\n'

int main(){
  float x,y;
  cin>>x>>y;
  if(x>0&&y>0){
    cout<<"Q1"<<ln;
  }else if(x<0&&y>0){
    cout<<"Q2"<<ln;
  }else if(x<0&&y<0){
    cout<<"Q3"<<ln;
  }else if(x>0&&y<0){
    cout<<"Q4"<<ln;
  }else if(x==0&&y!=0){
    cout<<"Eixo Y"<<ln;
  }else if(x!=0&&y==0){
    cout<<"Eixo X"<<ln;
  }else{
    cout<<"Origem"<<ln;
  }
  return 0;
}