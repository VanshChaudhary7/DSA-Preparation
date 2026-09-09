#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    string s,w;
    int count;
    cout<<"S=";
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(w.begin(),w.end(),w.begin(),::tolower);

    cout<<"W=";
    cin>>w;
    stringstream stream(s);
    string words;
    while(stream>>words){

        if(words==w)count++;
    }
    cout<<count<<endl;


    return 0;
}