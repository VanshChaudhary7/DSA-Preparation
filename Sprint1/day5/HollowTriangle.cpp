#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

  int n, m;
  cout << "M=";
  cin >> m;
  cout << "N=";
  cin >> n;
  for (int i = 1; i <= m; i++)
  {
    if (i == 1 || i == m)
    {
      for (int i = 1; i <= n; i++)
      {
        cout << "*";
      }
      cout << endl;
      continue;
    } // for first and the last row
    cout << "*";

    for (int j = 1; j <= n - 2; j++)
    {
      cout << " ";
    }
    cout << "*" << endl;
  }

  return 0;
}