#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    int n;
    cout<<"N=";
    cin>>n;
    vector<int>arr;
    for(int i=1;i*i<=n;i++){
      if(i==n/i){
        arr.push_back(i);
        continue;
      }
      else if(n%i==0)
      {
        arr.push_back(i);
        arr.push_back(n/i);
      }
    }
    sort(arr.begin(),arr.end());
    for(auto x:arr){
      cout<<x<<" ";
    }
    
  
    return 0;
}