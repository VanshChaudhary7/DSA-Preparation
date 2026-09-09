#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long power(long long  b, long long  e, long long m) {
    if (e == 0)
        return 1;
    if (e % 2 == 0)  // even
    {
        long long val = power(b, e / 2, m) % m;
        return val * val%m;
    } else {
        return b * power(b, e-1, m) % m;
    }
}
int main() {
  long long b,e,m;
  cout<<"B=";
  cin>>b;
  cout<<"E=";
  cin>>e;
  cout<<"M=";
  cin>>m;
  if(e<0){
    cout<<"Invalid power\n";
    return 0;
  }
  
  cout<<power(b,e,m)<<endl;
}