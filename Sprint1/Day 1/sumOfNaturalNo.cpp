#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

  // 1st way by loop accumulator
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  cout << "This is the first way by for loop " << sum << endl;
  cout << "This is by the Gauss formula " << n * (n + 1) / 2 << endl;
  int i = 1;
  sum = 0;
  while (i <= n)
  {
    sum += i;
    i++;
  }
  cout << "This is by the while loop " << sum << endl;

  return 0;
}