#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    long long n, result, temp;
    cout << "N=";
    cin >> n;
    if (n < 1) {
        cout << "The co prime for this number does not exist enter a valid number\n";
        return 0;
    }
    result = temp = n;
    for (long long i = 2; i * i <= temp; i++) {
        if (temp % i == 0) { // will make sure only the prime number reduces the coprime;
            while (temp % i == 0) {
                temp /= i;  // removing duplicate same number;
            }
            result -= result / i;  // where i is the prime number;
        }
    }
    if (temp > 1)  // this is the prime number then
        result -= result / temp;
    cout << result << endl;

    return 0;
}