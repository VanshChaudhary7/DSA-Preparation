#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int digitSum(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {

    cout<<"N=";
    int n;
    cin>>n;
    if(n%digitSum(n)==0)
    {
        cout<<"Harshad\n";
    }
    else{
        cout<<"Not Harshad\n";
    }
  
    return 0;
}