#include <bits/stdc++.h>

#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int n;
    cout << "N=";
    cin >> n;
    if(n<2){
      cout<<"Invalid input\n";
      return 1;
    }
    if(isPrime(n)){
      cout<<"Enter a composite number\n";
      return 1;
    }
    int SumOfDigit = digitSum(n);
    int factorDigitSum = 0;
    for (int i = 1; i*i  <= n; i++) {
        while (n % i == 0 ) {
            factorDigitSum += digitSum(i);
            n /= i;
        }
    }
    if(n>1)factorDigitSum+=digitSum(n);
    if (factorDigitSum == SumOfDigit)
        cout << "Smith Number\n";
    else
        cout << "Not Smith Number\n";
    return 0;
}