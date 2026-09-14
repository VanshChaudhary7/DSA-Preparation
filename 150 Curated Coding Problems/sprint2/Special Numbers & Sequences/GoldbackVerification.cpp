#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1)
        return false;
    bool flag = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}
int main() {
 
    int n;
    cout<<"N=";
    cin>>n;
    if(n<=2){
      cout<<"Enter a Valid input\n";
      return 1;
    }
    if(n%2!=0){
      cout<<"Enter the even number\n";
      return 1;
    }
    int num=n;
    for(int i=2;2*i<=num;i++){
      if(isPrime(i)&&isPrime(num-i)){
        cout<<i<<"+"<<num-i<<endl;
        return 0;
      }
    }
    cout<<"Verification Failed\n";
    
    return 0;
}