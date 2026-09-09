#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int Method1(int n) {
    int count = 0;
    while (n) {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    return count;
}
int Method2(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main() {
    int n;
    cout << "N=";
    cin >> n;
    if(n<0){
      cout<<"Enter a positive number\n";
      return 0;
    }
    cout << "This is the setBits count using the method 1-> " << Method1(n) << endl;
    cout << "This is the setBits count using the method 2-> " << Method2(n) << endl;

    return 0;
}