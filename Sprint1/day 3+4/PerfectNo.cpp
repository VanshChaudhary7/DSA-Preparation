#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    int n,perfect=0;
    cout<<"N=";
    cin>>n;
    for (int i = 1; i < n; i++)
    {
      if(n%i==0)perfect+=i;
    }
    if(perfect==n)cout<<"Perfect"<<endl;
    else{
      cout<<"Not Perfect"<<endl;
    }
    
  
    return 0;
}