#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    cout<<"S=";
    int s;
    cin>>s;
    if(s>=90&&s<=100)cout<<"A"<<endl;
    else if(s>=75&&s<=89)cout<<"B"<<endl;
    else if(s>=60&&s<=74)cout<<"C"<<endl;
    else if(s>=50&&s<=59)cout<<"D"<<endl;
    else cout<<"F"<<endl;
  
    return 0;
}