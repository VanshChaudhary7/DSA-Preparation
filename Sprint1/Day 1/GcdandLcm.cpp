#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int GCD(int a,int b){
   while (b!=0)  
    { //brute force= if(a%i==0&&b%i==0)ans=max(ans,i);
      int newB=a%b;
      a=b;
      b=newB;

    }
    return a;
}
int main() {
    int a,b;
    cout<<"Enter A and B for finding the GCD"<<endl;
    cin>>a>>b;
    //Euclidean algorithm gcd(a,b)=gcd(b,a%b) stop when b=0;
    cout<<"The GCD of the given a and b is "<<GCD(a,b)<<endl;
    cout<<"The Lcm of the given a and b is "<<a*b/GCD(a,b)<<endl;
    
  
    return 0;
}