#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter A and B for finding the GCD"<<endl;
    cin>>a>>b;
    //Euclidean algorithm gcd(a,b)=gcd(b,a%b) stop when b=0;
    while (b!=0)  
    { //brute force= if(a%i==0&&b%i==0)ans=max(ans,i);
      int newB=a%b;
      a=b;
      b=newB;

    }
    cout<<a;
    
  
    return 0;
}