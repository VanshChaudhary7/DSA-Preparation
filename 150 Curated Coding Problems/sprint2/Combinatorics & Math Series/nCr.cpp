#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
 
    long long n,r;
    cout<<"n=";cin>>n;
    cout<<"r=";cin>>r;
    if(r<0||n<0){
      cout<<"Invalid constraint\n";
      return 0;
    }
    if(n<r){
      cout<<"0\n";
      return 0;
    }
    if(r>n-r){
      r=n-r;
    }
    long long result=1;
    for(long long i=0;i<r;i++){
      result*=(n-i);
      result/=(i+1);
      
    }
    cout<<"result="<<result<<endl;
    return 0;
}