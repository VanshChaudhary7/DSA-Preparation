#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the array size ";
    cin >> n;
    if(n<=0){
      cout<<"Enter a valid array size\n";
      return 0;
    }
    cout << "Enter the array where every number appears twice\n";
    vector<int> arr(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ans ^= arr[i];
    }
    cout << ans << endl;
    return 0;
}