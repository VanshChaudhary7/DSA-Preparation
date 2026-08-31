#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    cout<<"N=";
    int n;
    cin>>n;
    int nums=n,count=0,sum=0;
    while(nums){
      sum+=nums%10;
      nums/=10;
      count++;
      
    }
    cout<<"Count="<<count<<", ";
    cout<<"Sum="<<sum<<endl;

  
    return 0;
}