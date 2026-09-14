#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    if(n<0){
      cout<<"Invalid input\n";
      return 1;
    }
    int divisorSumA = 0,divisorSumB=0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            divisorSumA += i;
    }
    for(int i=1;i<divisorSumA;i++){
      if(divisorSumA%i==0)
      divisorSumB+=i;
    }
    if(n==divisorSumB)cout<<"Amicable pair: ("<<n<<", "<<divisorSumA<<")";
    else cout<<"Not amicable pair\n";
    cout << endl;


    return 0;
}