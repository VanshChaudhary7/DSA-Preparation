#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number of Elements in the array ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    map<int, int> freq;
    for (int x : arr)
        freq[x]++;
    for (auto it : freq) {
        cout << it.first << "-" << it.second << endl;
    }
    return 0;
}