#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    //finding the factorial using the for loop
    int n,fac=1;
    cout<<"N=";
    cin>>n;
    for(int i=1;i<=n;i++){
      fac*=i;
    }
    cout<<fac<<endl;
    // part 2 smallest factor greater than 1
    int i=2,factor=-1;
    while(i<=n){
      if(n%i==0){
        factor=i;
        break;
      }
      i++;
    }
    cout<<"Smallest factor is "<<factor;
    if(n==factor)cout<<" - this number is Prime"<<endl;
    return 0;
}