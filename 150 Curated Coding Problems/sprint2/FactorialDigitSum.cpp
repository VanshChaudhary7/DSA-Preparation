#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    if (n < 0) {
        cout << "Invalid n\n";
        return 0;
    }
    vector<int> arr = {1};
    for (int k = 2; k <= n; k++) {
        int carry = 0;
        for (int j = 0; j < arr.size(); j++) {
            int product = arr[j] * k + carry;
            arr[j] = product % 10;
            carry = product / 10;
        }
        while (carry > 0) {
            arr.push_back(carry % 10);
            carry /= 10;
        }
    }
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Factorial=";
    for (int i = arr.size() - 1; i >= 0; i--)
        cout << arr[i];
    cout << ", Digit Sum=" << sum << endl;

    return 0;
}