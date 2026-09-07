#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

  int n;
  cout << "Enter the Number of Elements in the array ";
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }
  int i = 0, j = n - 1;
  while (i < j)
  {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}