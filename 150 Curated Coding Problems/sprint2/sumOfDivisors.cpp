#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    /*Find the sum of all divisors of ALL numbers from 1 to N. For each divisor i from 1 to N, it
     * contributes to floor(N/i) different numbers. So total = sum of i × floor(N/i) for i=1 to N.
     * More elegant than computing each number's divisors separately.*/
    int N;
    cout << "N=";
    cin >> N;
    long long  result = 0;
    for (int i = 1; i <= N; i++) {
      result+= i * (N / i);
    }
    cout << result << endl;

    return 0;
}