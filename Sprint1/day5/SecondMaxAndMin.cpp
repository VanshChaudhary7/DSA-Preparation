#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
       int n;
    cout<<"Enter the Number of Elements in the array ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ;i<arr.size();i++){
        cin>>arr[i];
    }
    int second_largest=INT_MIN,smallest_second=INT_MAX,smallest=INT_MAX,largest=INT_MIN;
    for(int x:arr){
      if(x<smallest_second){
        if(x<smallest){
        smallest_second=smallest;
        smallest=x;
        }
        else smallest_second=x;
      }
      if(x>second_largest){
        if(x>largest){
        second_largest=largest;
        largest=x;
        }
        else second_largest=x;
      }
    }
    cout<<"2nd Largest="<<second_largest<<", 2nd smallest="<<smallest_second<<endl;
  
    return 0;
}