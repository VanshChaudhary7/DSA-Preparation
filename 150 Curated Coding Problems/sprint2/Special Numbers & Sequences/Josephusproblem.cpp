#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int elimination(int n, int k) {
    if (n == 1)
        return 0;
    return (elimination(n - 1, k) + k) % n;
}

int main() {
    int n, k;
    cout << "N=";
    cin >> n;
    cout << "K=";
    cin >> k;
    cout << elimination(n, k) + 1 << endl;

    return 0;
}