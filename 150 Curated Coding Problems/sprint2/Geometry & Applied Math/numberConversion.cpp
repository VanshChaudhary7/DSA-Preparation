#include <bits/stdc++.h>

#include <iostream>
using namespace std;
string DecimalToBase(int n, int b) {
  if(n==0)return 0;
    string newB = "";
    if (b != 16) {
        while (n) {
            newB = to_string(n % b) + newB;
            n /= b;
        }
    } else {
        char hexarray[] = "0123456789ABCDEF";
        while (n) {
            newB = hexarray[n % b] + newB;
            n /= b;
        }
    }
    return newB;
}
long long baseToDecimal(string str, int b) {
    long long ans = 0;
    long long p = 1;
    for (int i = str.size() - 1; i >= 0; i--) {
      char c=toupper(str[i]);
        if (c >= 'A' && c <= 'F') {
            ans += (c - 'A'+10) * p;
        } else {
            ans += (c - '0') * p;
        }
        p*=b;
    }
    return ans;
}
int main() {
    int n, b;
    cout << "For Decimal to Base conversion N=";
    cin >> n;
    cout << "B=";
    cin >> b;
    string str;;
    cout <<"Decimal to Base conversion "<< DecimalToBase(n, b) << endl;
    cout<<"For Base to Decimal Conversion N=";
    cin>>str;
    cout<<"Base to Decimal Conversion "<<baseToDecimal(str,b)<<endl;
    return 0;
}