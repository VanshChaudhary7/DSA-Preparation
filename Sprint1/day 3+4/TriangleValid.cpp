#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  
  int a,b,c;
  cout<<"Enter the Values A B C"<<endl;
  cin>>a>>b>>c;
  if(a+b>c&&b+c>a&&a+c>b){
    cout<<"Valid - ";
    if(a==b&&b==c)cout<<"Equilateral"<<endl;
    else if(a==b||b==c||a==c)cout<<"Isosceles"<<endl;
    else{
        cout<<"Scalene"<<endl;
    }
  }
  else{
    cout<<"Not a Valid Triangle"<<endl;
  }


  
    return 0;
}