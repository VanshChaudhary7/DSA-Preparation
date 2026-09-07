#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    string s;
    cout<<"S=";
    cin>>s;
    int i=0,j=s.size()-1;
    bool isPalin=true;
    while(i<j){
      if(s[i++]!=s[j--]){
        isPalin=false;
        break;
      }
    }
    if(isPalin)cout<<"True"<<endl;
    else{
      cout<<"False"<<endl;
    }
  
    return 0;
}