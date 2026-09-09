#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

  int n;
  cout << "N=";
  cin >> n;
  if (n <= 0)
  {
    return 0;
  }
  if (n == 1)
  {
    cout << "0";
    return 0;
  }
  int first = 0, second = 1;
  for (int i = 3; i <= n; i++)
  {
    cout << first << " ";
    int next = second + first;
    first = second;
    second = next;
  }
  cout << first << " " << second;

  return 0;
}