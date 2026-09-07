#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    string s;
    cout<<"S=";
    cin>>s;
    vector<int>arr(26,0);
    for(char ch:s){
      arr[ch-'a']++;
      if(arr[ch-'a']==1)cout<<ch;
    }
    cout<<endl;
  
    return 0;
}