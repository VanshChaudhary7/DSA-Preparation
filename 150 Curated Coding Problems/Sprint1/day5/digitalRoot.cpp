#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int repeatedSum(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main() {
    cout<<"N=";
    int num;
    cin>>num;
    int n=num;
    cout<<"Giving the Repeated Sum With the Looping method\n";
    while (n/10)
    {
        n=repeatedSum(n);
    }
    cout<<n<<endl;
    cout<<"Giving the Repeated Sum with the normal method\n";
    if(num%9==0)cout<<"9"<<endl;
    else{
        cout<<num%9<<endl;
    }
    
        
    
  
    return 0;
}