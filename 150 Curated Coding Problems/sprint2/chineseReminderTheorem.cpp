#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
  int r1,m1,r2,m2,r3,m3;
    cout<<"r1=";
    cin>>r1;
    cout<<"m1=";
    cin>>m1;
    cout<<"r2=";
    cin>>r2;
    cout<<"m2=";
    cin>>m2;
    cout<<"r3=";
    cin>>r3;
    cout<<"m3=";
    cin>>m3;
    int i=1;
    while(1){
      if(i%m1==r1&&i%m2==r2&&i%m3==r3){
        break;
      }
      i++;
    }
    cout<<i<<endl;
  
    return 0;
}