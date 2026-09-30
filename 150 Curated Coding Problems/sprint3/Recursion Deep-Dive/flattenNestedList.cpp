#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string s;
int k=0;
void solve(vector<long long>&ans){
  k++;
  while(s[k]!=']'){
    if(s[k]=='['){
     solve(ans);
   }
    else if(s[k]==','){
      k++;
    }
    else{
      int startPtr=k;
      while(s[k]!=','&&s[k]!=']'){
        k++;
      }
      ans.push_back(stoll(s.substr(startPtr,k-startPtr)));
    }
  }
  k++;
}
int main() {
 
    cin>>s;
    vector<long long>ans;
    solve(ans);
    cout<<"[";
    for(int i=0;i<ans.size();i++){
      cout<<(i==0?"":",")<<ans[i];
    }
    cout<<"]"<<endl;
  
    return 0;
}