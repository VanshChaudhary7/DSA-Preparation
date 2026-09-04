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
    int maxi=arr[0],mini=arr[0],sum=0,avg;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
        sum+=arr[i];
    }
    cout<<"Max="<<maxi<<", Min="<<mini<<", Sum="<<sum<<",Avg= "<<(double)sum/n<<endl;
    return 0;
}