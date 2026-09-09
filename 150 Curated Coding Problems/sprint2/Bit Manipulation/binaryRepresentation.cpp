#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long binaryToDecimal(string &binary){
  long long weight = 1, ans = 0;
    int i = binary.size() - 1;
    while (i >= 0) {
        ans += weight * (binary[i]-'0');
        weight *= 2;
        i--;
    }
    return ans;
}
int main() {
    int n;
    cout << "N=";
    cin >> n;
    if (n < 0) {
        cout << "Enter a Positive Input\n";
        return 0;
    }
    if (n == 0) {
        cout << "0\n";
        return 0;
    }
    string binary;
    while (n) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }

    cout << binary << endl;
    // now binary to decimal
    long long ans=binaryToDecimal(binary);   
    cout << ans << endl;
    return 0;
}