#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    // h = ( q + floor(13(m+1)/5) + K + floor(K/4) + floor(J/4) + 5J ) mod 7
    int d, m, y;
    cout << "Day=";
    cin >> d;
    cout << "Month=";
    cin >> m;
    cout << "Year=";
    cin >> y;
    if(d<1||m<0||m>12||y<0){
        cout<<"Invalid Date\n";
        return 0;
    }
    if(m==1||m==2){
        m+=12;
        y--;
    }
    int k=(y % 100);
    int j=(y / 100);
    int h = (d + (13 * (m + 1) )/ 5 + k + (k/4)+(j/4) + 5 *j) % 7;
    vector<string> ans = {"Saturday",  "Sunday",   "Monday", "Tuesday",
                          "Wednesday", "Thursday", "Friday"};
    cout << ans[h] << endl;

    return 0;
}