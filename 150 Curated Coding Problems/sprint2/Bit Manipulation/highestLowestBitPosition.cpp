#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int highestBit(int n) {
    int count = -1;
    while (n) {  // 1100
        count++;
        n = n >> 1;
    }
    return count;
}
int lowestBit(int n) {
    int negN = -1 * n, count = -1;
    int lowestBitValue = n & negN;
    while (lowestBitValue) {  // 4->2->1->0
        count++;
        lowestBitValue /= 2;
    }
    return count;
}

int main() {
    int n;
    cout << "N=";
    cin >> n;
    if (n < 0) {
        cout << "Enter a Positive number\n";
        return 0;
    }
    cout << "Highest set bit = " << highestBit(n) << ", Lowest set bit = " << lowestBit(n) << endl;

    return 0;
}
