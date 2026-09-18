#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    // ******
    //  ****
    //   **
    //    *
    //   **
    //  ****
    // ******
    int n;
    cin >> n;

  for(int i=1;i<=n;i++)
  {
    for(int spaces=1;spaces<=2*i;i++){
      cout<<" ";
    }
    for(int k=1;k<=2*(n-i)+1;k++){
      cout<<"*";
    }
    cout<<endl;
  }
  for (int i = n; i >=1; i--) {
      for (int spaces = 1; spaces <= 2 * i; i++) {
          cout << " ";
      }
      for (int k = 1; k <= 2 * (n - i) + 1; k++) {
          cout << "*";
      }
      cout << endl;
  }
    return 0;
}