#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  
  int n;
  cout << "Enter the number to check for prime \n";
  cin >> n;
  bool flag = true;
  if(n<=1)flag=false;
  for (int i = 2; i * i <= n; i++)
  {
    // if (n % i == 0)
    // {
    //   //first method using the break;
    //   flag = false;
    //   break;
    // }
    if(i!=2&&i%2==0)continue;
    if(n%i==0){
      flag=false;
      break;
    }
  }
  if (flag)
    cout << "The number is Prime\n";
  else
    cout << "The number is not a Prime number\n";

  return 0;
}
