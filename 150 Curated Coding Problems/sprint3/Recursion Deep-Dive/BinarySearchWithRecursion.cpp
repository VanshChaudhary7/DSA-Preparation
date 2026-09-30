#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int binarySearch(vector<int>& arr, int low, int high, int target) {
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
        return mid;
    if (arr[mid] > target)
        return binarySearch(arr, low, mid-1, target);
    return binarySearch(arr, mid + 1, high, target);
}
int main() {
    int n, target;
    cin >> n;
    vector<int> arr(n);
    for (auto& value : arr)
        cin >> value;
    cin >> target;
    cout << binarySearch(arr, 0, n - 1, target) << endl;

    return 0;
}