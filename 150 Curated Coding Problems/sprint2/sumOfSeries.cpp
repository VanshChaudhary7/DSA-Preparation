#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
    long long n;
    cout << "N=";
    cin >> n;
    if (n < 0) {
        cout << "Enter a Valid input\n";
        return 0;
    }
    long long sumOfSquare = 0, sumOfCube = 0, alternate = 0;
    for (long long i = 1; i <= n; i++) {
        sumOfSquare += i * i;
        sumOfCube += i * i * i;
        if (i % 2 == 0)
            alternate -= i;
        else
            alternate += i;
    }
    cout << "Sum of square is=" << sumOfSquare << ", Sum of cube is=" << sumOfCube
         << ", Alternating=" << alternate << endl;

    // using formula
    cout << "This output is using the formula\n";
    sumOfSquare = ((1LL * n) * (n + 1) * (2 * n + 1)) / 6;
    sumOfCube = (n * (n + 1) / 2) * (n * (n + 1) / 2);
    cout << "Sum of square is=" << sumOfSquare << ", Sum of cube is=" << sumOfCube << endl;

    return 0;
}