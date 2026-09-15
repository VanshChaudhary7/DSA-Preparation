#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int digitSum(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
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
bool isPerfect(int n){
    int perfect=0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            perfect += i;
    }
    if (perfect == n)return true;
    return false;
}
long long digitCount(long long n) {
    int d = 0;
    while (n) {
        n /= 10;
        d++;
    }
    return d;
}
bool ArmCheck(long long n) {
    long long ans = 0, num = n, d = digitCount(n);
    while (num) {
        long long term = 1;
        long long mod = num % 10;
        for (int i = 0; i < d; i++)
            term *= mod;
        num /= 10;
        ans += term;
    }
    if (ans == n)
        return true;
    return false;
}
bool isPalin(int n){
    string s=to_string(n);
    string rev=s;
    reverse(rev.begin(),rev.end());
    return s==rev;
}
bool isHarshad(int num){
    int n=num;
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return (num % sum == 0);
}
bool isSmith(int n){
    if (isPrime(n)) {
        return false;
    }
    int SumOfDigit = digitSum(n);
    int factorDigitSum = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factorDigitSum += digitSum(i);
            n /= i;
        }
    }
    if (n > 1)
        factorDigitSum += digitSum(n);
    return (factorDigitSum == SumOfDigit);
}
int collatzSequence(int n){
    if (n <= 0) {
        return false;
    }
    int count = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        count++;
    }
    return count;
}
int Euler(int n){
    long long result, temp;
    result = temp = n;
    for (long long i = 2; i * i <= temp; i++) {
        if (temp % i == 0) {  // will make sure only the prime number reduces the coprime;
            while (temp % i == 0) {
                temp /= i;  // removing duplicate same number;
            }
            result -= result / i;  // where i is the prime number;
        }
    }
    if (temp > 1)  // this is the prime number then
        result -= result / temp;
    return result;
}
bool isHappy(int n) {
    set<int> seen;
    while (n != 1 && !seen.count(n)) {
        seen.insert(n);
        int sum = 0;
        while (n) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        n = sum;
    }
    return n == 1;
}

int main() {
    int n;
    cin >> n;

    cout << "Prime: " << (isPrime(n) ? "Yes" : "No")
         << " | Perfect: " << (isPerfect(n) ? "Yes" : "No")
         << " | Armstrong: " << (ArmCheck(n) ? "Yes" : "No")
         << " | Palindrome: " << (isPalin(n) ? "Yes" : "No")
         << " | Happy: " << (isHappy(n) ? "Yes" : "No")
         << " | Harshad: " << (isHarshad(n) ? "Yes" : "No")
         << " | Collatz length: " << collatzSequence(n) << " | \u03c6(" << n << ")=" << Euler(n)
         << "\n";

    return 0;
}