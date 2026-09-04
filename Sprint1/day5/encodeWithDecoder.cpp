#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    int encode,k;
    string s;
    cout<<"text=";
    cin>>s;
    cout<<"K=";
    cin>>k;
    cout<<"encode=";
    cin>>encode;
      for(int i=0;i<s.size();i++){
        char ch=toupper(s[i]);
        if(encode)
        s[i]=char((ch-'A'+k)%26+'A');
        else
        s[i]=char((ch-'A'+26-k)%26+'A');
      }
    
      if(encode)
      cout<<"Encoded="<<"'"<<s<<"'\n";
      else{
      cout<<"Decoded="<<"'"<<s<<"'\n";
      }

  
    return 0;
}