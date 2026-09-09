#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int GCD(int a,int b){
  if(b==0)return a;
  return GCD(b,a%b);
}
int main() {
 
    cout<<"Enter the number of element in the array\n";
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int greatestCommonDivisor=GCD(arr[0],arr[1]);
    int lcm=(arr[0]*arr[1])/greatestCommonDivisor;
    for(int i=2;i<n;i++){
      lcm=(lcm*arr[i])/GCD(lcm,arr[i]);

    }
    cout<<"Lcm is "<<lcm<<endl;
  
    return 0;
}