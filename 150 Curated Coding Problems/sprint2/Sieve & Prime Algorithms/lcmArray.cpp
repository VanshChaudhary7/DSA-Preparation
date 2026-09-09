#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int Gcd(int a, int b) {
    if (b == 0)
        return a;
    return Gcd(b, a % b);
}
int main() {
    int n;
    cout << "Enter the number of elements ";
    cin >> n;
    if (n < 2) {
        cout << "Insufficient number of elements\n";
        return 0;
    }
    cout << "Enter the Array elements  ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long ans = (1LL*arr[0]*arr[1])/Gcd(arr[0], arr[1]);
    for (int i = 2; i < n; i++) {
        ans = (1LL*arr[i])/Gcd(ans, arr[i]);
    }
    cout<<"GCD="<<abs(ans)<<endl;

    return 0;
}