#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    int a,b;
    cout<<"A=";cin>>a;
    cout<<"B=";cin>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"A="<<a<<", B="<<b<<endl;
  
    return 0;
}