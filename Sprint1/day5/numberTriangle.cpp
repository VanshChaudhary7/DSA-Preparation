#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    int n;
    cout<<"N=";
    cin>>n;
    int count =1;
    for(int i=1;i<=n;i++){
      int j;
      for( j=count;j<i+count;j++){
        cout<<j<<" ";
      }
      cout<<endl;
      count=j;
    }
  
    return 0;
}