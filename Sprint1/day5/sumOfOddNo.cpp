#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

  int a, b, sum = 0;
  cout << "A=";
  cin >> a;
  cout << "B=";
  cin >> b;
  a = (a % 2 == 0) ? a + 1 : a;
  for (int i = a; i <= b; i = i + 2)
  {
    sum += i;
  }
  cout << sum << endl;
  return 0;
}