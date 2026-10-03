#include <bits/stdc++.h>

#include <iostream>
using namespace std;
long long memoised(long long n, vector<long long>& memo) {
    if (n < 2)
        return n;
    if (memo[n] != -1)
        return memo[n];
    return memo[n] = memoised(n - 1, memo) + memoised(n - 2, memo);
}
long long naive(long long n) {
    if (n < 2)
        return n;
    return naive(n - 1) + naive(n - 2);
}
int main() {
    long long n;
    cin >> n;
    vector<long long> memo(n + 1, -1);
    long long a = 0, b = 1;
    for (long long i = 1; i <= n; i++) {
        long long newB = a + b;
        a = b;
        b = newB;
    }
    cout<<"Iterative: "<<a<<endl;
    cout<<"Naive recursive: ";
    if(n>30)cout<<"skipped (would make "<<2*b-1<<" calls"<<")\n";
    else cout<<naive(n)<<"("<<2*b-1<<" calls)\n";
    cout<<"Memoised: "<<memoised(n,memo)<<endl;
    return 0;
}