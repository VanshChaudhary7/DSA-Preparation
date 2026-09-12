#include <bits/stdc++.h>

#include <iostream>
using namespace std;
pair<double, double> circle(double r) {
    double area = M_PI * r * r;
    double parimeter = 2 * M_PI * r;
    return {area, parimeter};
}
pair<double, double> rectangle(double l, double w) {
    return {l * w, 2 * (l + w)};
}
pair<double, double> triangle(double a, double b, double c) {
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return {area, a + b + c};
}
int main() {
    string s;
    cout << "Shape=";
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<"Enter the dimensions of the shape\n";
    if (s == "triangle") {
        double a, b, c;
        cin >> a >> b >> c;
        if(a<0||b<0||c<0){
            cout<<"Invalid Inputs\n";
            return 0;
        }
        auto [area, perimeter] = triangle(a, b, c);
        cout << "Area of Triangle is=" <<fixed<<setprecision(2)<< area << ", its perimeter is =" << perimeter;
    } else if (s == "circle") {
        double r;
        cin >> r;
        if(r<0){
            cout<<"Invalid Inputs\n";
            return 0;
        }
        auto [area, perimeter] = circle(r);
        cout << "Area of Circle is=" <<fixed<<setprecision(2)<< area << ", its perimeter is =" << perimeter;
    } else {
        double l, w;
        cin >> l >> w;
        if(l<0||w<0){
            cout<<"Invalid Inputs\n";
            return 0;
        }
        auto [area, perimeter] = rectangle(l, w);
        cout << "Area of Rectangle is=" <<fixed<<setprecision(2)<< area << ", its perimeter is =" << perimeter;
    }
    return 0;
}