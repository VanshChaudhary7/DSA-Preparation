#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int romanToInt(string s) {
    unordered_map<char, int> roman = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                                      {'C', 100}, {'D', 500}, {'M', 1000}};
    int number = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (roman[s[i]] < roman[s[i + 1]])
            number -= roman[s[i]];
        else
            number += roman[s[i]];
    }
    return number + roman[s[s.size() - 1]];
}
string intToRoman(int n) {
    vector<pair<int, string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
                                     {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
                                     {5, "V"},    {4, "IV"},   {1, "I"}};
    string ans = "";
    for(auto it:roman){
        if(n==0)break;
        while(n>=it.first){
            ans+=it.second;
            n-=it.first;
        }
    }
    return ans;
}
int main() {
    string n;
    cin>>n;
    if(isdigit(n[0])){
        int value=stoi(n);
    cout<<intToRoman(value)<<endl;}
    else
    cout << romanToInt(n) << endl;
    
    return 0;
}