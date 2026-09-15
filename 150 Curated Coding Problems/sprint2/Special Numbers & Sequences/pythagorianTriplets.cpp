#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "N=";
    cin >> N;
    for (int n = 1; n <= N; n++) {
        for (int m = 1; m <= N; m++) {
            if (m <= n)
                continue;
            int a = m * m - n * n, b = 2 * m * n, c = m * m + n * n;
            if(a>b)swap(a,b);
            if (a <= N && b <= N && c <= N)
                cout << "(" << a << "," << b << "," << c << ") ";
        }
    }
    return 0;
}