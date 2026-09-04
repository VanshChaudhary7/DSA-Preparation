#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the Number of Elements in the array1 and array 2 ";
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    cout << "Enter the Elements of the array 1\n";
    for (int i = 0; i < arr1.size(); i++) {
        cin >> arr1[i];
    }
    cout << "Enter the Elements of the array 2\n";
    for (int i = 0; i < arr2.size(); i++) {
        cin >> arr2[i];
    }
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            cout << arr1[i] << " ";
            i++;
        } else {
            cout << arr2[j] << " ";
            j++;
        }
    }
    while (i < n) {
        cout << arr1[i] << " ";
        i++;
    }
    while (j < m) {
        cout << arr2[j] << " ";
        j++;
    }
    cout << endl;

    return 0;
}