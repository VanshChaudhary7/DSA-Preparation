#include <bits/stdc++.h>

#include <iostream>
using namespace std;
void spiralOrder(vector<vector<char>>& matrix) {
    int top = 0, bottom = matrix.size() - 1, left = 0, right = matrix[0].size() - 1;
    int K = 0;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = char('A' + (K++) % 26);
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = char('A' + (K++) % 26);
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = char('A' + (K++) % 26);
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = char('A' + (K++) % 26);
            }
            left++;
        }
    }
}

int main() {
  int n;
  cout<<"N=";
  cin>>n;
  vector<vector<char>>matrix(n,vector<char>(n));
  spiralOrder(matrix);
  for (int i = 0; i < n; i++)
  {
    for(int j=0;j<n;j++){
      if(j!=0)cout<<" ";
      cout<<matrix[i][j];
    }
    cout<<endl;
  }
   
  
  return 0;
}