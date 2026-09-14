#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int n, d = 0, count = 0, sum = 0;
    cout << "N=";
    cin >> n;
    int num = n;
   long long power = 1;
    queue<int> q;
    if (n < 10) {
        cout << "Enter a valid number to check\n";
        return 1;
    }
    while (num) {
        num /= 10;
        d++;
    }
    for (int i = 1; i < d; i++) {
        power *= 10;
    }
    num = n;
    while (count < d) {
        q.push(num / power);
        sum += num / power;
        num = num % power;
        power /= 10;
        count++;
    }
    while (sum < n) {
        q.push(sum);
        sum = 2 * sum - q.front();
        q.pop();
    }
    if (sum == n)
        cout << "Keith Number\n";
    else
        cout << "Not keith number\n";

    return 0;
}