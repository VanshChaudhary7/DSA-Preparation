#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
 
    double x1,x2,x3,y1,y2,y3;
    cout<<"P1=";
    cin>>x1>>y1;
    cout<<"P2=";
    cin>>x2>>y2;
    cout<<"P3=";
    cin>>x3>>y3;
    double Area = abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2;
    if(Area==0)cout<<"Collinear";
    else cout<<"Non collinear";
    cout<<", Area="<<Area;
    cout<<endl;
    return 0;
}