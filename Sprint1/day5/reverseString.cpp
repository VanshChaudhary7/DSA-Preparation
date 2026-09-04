#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    string s;
    cout<<"S=";
    cin>>s;
    string rev=s;
    reverse(rev.begin(),rev.end());//using inbuilt functionality
    cout<<"This is done using the inbuilt functionality\n";
    cout<<rev<<endl;
    rev="";//using the loop building string
    cout<<"Using the for looping\n";
    for(int i=s.size()-1;i>=0;i--){
      rev+=s[i];
    }
    cout<<rev<<endl;
    return 0;
}