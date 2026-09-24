#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int v, k = 0;
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int nextValue() {
    if (v == 1)
        return ++k;
    if (v == 2)
        return 2 * (++k);
    do {
        k++;
    } while (!isPrime(k));
    return k;
}
int main() {
    int n;
    cout << "N=";
    cin >> n;
    cout << "Varient= ";
    cin >> v;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++)
            cout << ((j) ? " " : "") << nextValue();
        cout << endl;
    }

    return 0;
}