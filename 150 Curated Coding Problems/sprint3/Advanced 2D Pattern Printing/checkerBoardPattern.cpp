#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout << "M=";
    cin >> m;
    cout<<"N=";
    cin>>n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ((i+j)%2==0){
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}