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
int main() {
    int n, sum = 0;
    cout << "Enter the Number of Elements in the array ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    for (int x : arr) {
        if (isPrime(x)) {
            cout << x << " ";
            sum += x;
        }
    }
    cout << endl;
    cout << "Sum=" << sum << endl;
    return 0;
}