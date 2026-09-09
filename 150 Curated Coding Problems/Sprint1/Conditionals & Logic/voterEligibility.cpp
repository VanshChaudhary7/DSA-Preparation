#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    int age,c,d;
    cout<<"Age=";
    cin>>age;
    cout<<"C=";
    cin>>c;
    cout<<"D=";
    cin>>d;
    if(age>=18&&c==1&&d==0){
      cout<<"Eligible\n";
    }
    else {
      cout<<"Not Eligible - ";
      if(age<18)cout<<"Too Young\n";
      else if(d==1)cout<<"Disqualified\n";
      else cout<<"Not a citizen\n";
    }

  
    return 0;
}