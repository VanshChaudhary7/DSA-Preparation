#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    string encoded;
    cout << "encoded=";
    cin >> encoded;
    for (int i = 1; i <= 26; i++) {
        string decoder = "";
        for (char ch : encoded) {
          if(ch>='A'&&ch<='Z')
            decoder += char((ch - 'A' - i + 26) % 26 + 'A');
            else if(ch>='a'&&ch<='z'){
                decoder += char((ch - 'a' - i + 26) % 26 + 'a');
            }
            else decoder+=ch;
        }
        cout << "Shift " << i << ": " << decoder << endl;
    }

    return 0;
}