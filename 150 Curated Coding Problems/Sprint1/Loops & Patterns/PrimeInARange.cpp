#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool isPrime(int n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {

      return false;
    }
  }
  return true;
}
int main()
{

  int a, b;
  cout << "A=";
  cin >> a;
  cout << "B=";
  cin >> b;
  bool flag = false;
  for (int i = a; i <= b; i++)
  {
    if (isPrime(i))
    {
      cout << i << " ";
      flag = true;
    }
  }
  if (!flag)
    cout << "None" << endl;
  else
  {
    cout << endl;
  }

  return 0;
}