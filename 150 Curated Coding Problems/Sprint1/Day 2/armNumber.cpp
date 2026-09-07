#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    int n;
    cout<<"N=";
    cin>>n;
    int ans=0,num=n;
    while (num)
    {
      int mod=num%10;
      ans+=mod*mod*mod;
      num/=10;
    }
    if(n==ans)cout<<"Armstrong"<<endl;
    else{
      cout<<"Not Armstrong"<<endl;
    }
    
  
    return 0;
}