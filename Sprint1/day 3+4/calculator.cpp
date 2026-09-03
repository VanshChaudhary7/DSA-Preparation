#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    cout<<"Enter the two Numbers\n";
    int a,b;
    cin>>a>>b;
    cout<<"Enter the Operend ";
    cout<<endl;
    char op;
    cin>>op;
    if(op=='+'){
      cout<<a+b;
    }
    else if(op=='-'){
      cout<<a-b;
    }
    else if(op=='*'){
      cout<<a*b;
    }
    else if(op=='/'){
      if(b==0)cout<<"Error: Division by Zero";
      else{
        cout<<a/b;
      }
    }
    else{
      cout<<a%b;
    }
    cout<<endl;

  
    return 0;
}