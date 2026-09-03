#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int power(int b,int e){
  if(e==0)return 1;
  return b*power(b,e-1);
}

int main() {
  
  int e,b;
  cout<<"B=";
  cin>>b;
  cout<<"E=";
  cin>>e;
  cout<<power(b,e)<<endl;
    
  
    return 0;
}