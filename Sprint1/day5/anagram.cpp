#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  string a, b;
  cout << "A=";
  cin >> a;
  cout << "B=";
  cin >> b;
  // o(n*log(n)) time complexity - not recommended
  //  sort(a.begin(),a.end());
  //  sort(b.begin(),b.end());
  //  if(a==b)cout<<"Anagram\n";
  //  else cout<<"Not Anagram\n";
  if(a.size()!=b.size()){
    cout<<"Not Anagram\n";
    return 0;
  }
  vector<int> arr(26, 0);
  for (char ch : a)
  {
    arr[ch - 'a']++;
  }
  for (char ch : b)
  {
    arr[ch - 'a']--;
    if (arr[ch - 'a'] < 0)
    {
      cout << "Not Anagram\n";
      return 0;
    }
  }
  cout << "Anagram\n";

  return 0;
}