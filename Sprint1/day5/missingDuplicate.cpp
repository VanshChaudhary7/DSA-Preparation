#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0,sqrSum=0;
    cout << "Enter the Number of Elements in the array ";
    cin >> n;
    for (int i = 0; i < n; i++) {
      long long num;
      cin>>num;
        sum += num;
        sqrSum+=num*num;
        }

    long long substraction = (1LL * n * (n + 1) / 2) - sum;
    long long addition = (((1LL * n * (n + 1) * (2 * n + 1) / 6)-sqrSum) / substraction);
    long long missing = (substraction + addition) / 2;
    long long duplicate = addition - missing;
    cout << "Missing=" << missing << ", Duplicate=" << duplicate<<endl;

    return 0;
}