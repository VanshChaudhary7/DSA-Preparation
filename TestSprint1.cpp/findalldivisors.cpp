#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N=";
    cin >> n;
    vector<int> arr;
    if(n<0)n=-1*n;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0 && i == n / i) {
            arr.push_back(i);
            continue;
        }
        if (n % i == 0) {
            arr.push_back(i);
            arr.push_back(n / i);
        }
    }
    sort(arr.begin(), arr.end());
    for (int i : arr)
        cout << i << " ";

    return 0;
}