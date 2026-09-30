#include <bits/stdc++.h>

#include <iostream>
using namespace std;
bool first = true;
void TowerOfHanoi(int n, char src, char aux, char dest) {
    if (n == 0)
        return;
    TowerOfHanoi(n - 1, src, dest, aux);

    cout << (first ? (first = false, "") : ", ") << src << "-" << dest;   TowerOfHanoi(n - 1, aux, src, dest);
}
int main() {
    int n;
    cin >> n;
    TowerOfHanoi(n, 'A', 'B', 'C');
    cout << endl;
    cout << "Total moves: " << (1 << n) - 1 << endl;
    return 0;
}