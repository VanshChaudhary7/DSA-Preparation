// Question 2
// Arithmetic Operations and Variable Swap
// A shopkeeper computes total, discount, quantity, and price.Given two integers A and B : (1)compute A + B, A - B, A×B, A÷B.(2)Swap their values - first using a temporary variable(temp = A, A = B, B = temp), then without any extra variable using arithmetic(A = A + B, B = A - B, A = A - B).Swapping is one of the most fundamental operations in all of programming.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    int a,b;
    cout<<"Input the variables a and b"<<endl;
     cin>>a>>b;
     cout<<"Sum "<<a+b<<endl;
     cout<<"Diff "<<a-b<<endl;
     cout<<"Product "<<a*b<<endl;
     cout<<"Quotient "<<a/b<<endl;
     //swapping using a temp variable
     int temp;
     temp=a;
     a=b;
     b=temp;
     cout<<"New a is "<<a<<" New b is "<<b<<endl;
     //without using a temp variable making a and b original values
     a=a+b;
     b=a-b;
     a=a-b;
     cout<<"OG A is "<<a<<" OG b is "<<b<<endl;

  
    return 0;
}