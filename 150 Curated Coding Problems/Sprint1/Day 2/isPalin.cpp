#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int rev(int n){
  int reverse=0;
  while(n){
        reverse=reverse*10+(n%10);
        n/=10;
    }
    return reverse;
}
int main() {
    int n;
    cout<<"N=";
    cin>>n;
    if(n==rev(n))cout<<"Palindrom"<<endl;
    else{
      cout<<"Not Palindrome"<<endl;
    }
  
    return 0;
    
}