#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  string s;
  cout << "S=";
  cin >> s;
  int i = 0;
  while (i < s.size())
  {
    int count = 1;
    int j = i + 1;
    while (j < s.size() && s[i] == s[j])
    {
      count++;
      j++;
    }
    cout<<s[i];
    if (count > 1)
      cout<<count;
    i=j;
  }
  cout<<endl;

  return 0;
}