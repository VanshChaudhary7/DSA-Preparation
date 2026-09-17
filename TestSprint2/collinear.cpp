#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cout << "P1=";
    cin >> x1 >> y1;
    cout << "P2=";
    cin >> x2 >> y2;
    cout << "P3=";;
    cin >> x3 >> y3;
    // Area = | x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2) | / 2
    int area = abs((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2))) / 2;
    if (area == 0)
        cout << "collinear, ";
    else
        cout << "Not collinear, ";
    cout << "area=" << area << endl;
    return 0;
}