#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void rev(vector<int>&arr,int start,int end){
  if(start>end)return;
  while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

int main() {
 
    cout<<"Enter the number of elements to present in the array\n";
    int n,k;
    cin>>n;
    cout<<"Enter the value of K\n";
    cin>>k;
    cout<<"Enter the elements in the array\n";
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    rev(arr,0,n-1);
    rev(arr,0,k-1);
    rev(arr,k,n-1);
    for(int i:arr)cout<<i<<" ";
    cout<<endl;
    
  
    return 0;
}