#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    double x1,x2,y1,y2;
    cout<<"P1=";
    cin>>x1>>y1;
    cout<<"P2=";
    cin>>x2>>y2;
    double E_dis,manhattanDis;
    E_dis=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    manhattanDis=abs(x2-x1)+abs(y2-y1); 
    cout<<"Euclidean="<<E_dis<<", Manhattan="<<manhattanDis<<endl;
    return 0;
}