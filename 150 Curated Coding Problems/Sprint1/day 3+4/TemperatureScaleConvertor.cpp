#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    int T;
    char scale;
    cout << "T=";
    cin >> T;
    cout << "Scale=";
    cin >> scale;
    if (scale == 'C'||scale == 'c')
    {
        double Temp = (double(9/5))*T + 32;
        double K = (double)(T + 273.15);
        cout << Temp << endl;
        cout << K << endl;
    }
    else if (scale == 'K'||scale == 'k')
    {

        double cel = (T - 273.15);
        double f = ((double)9 / 5) * (cel) + 32;
        cout << cel << endl;
        cout << f << endl;
    }
    else
    {
        double cel = ((double)5 / 9) * (T - 32);
        double k = (double)(cel + 273.15);
        cout << cel << endl;
        cout << k << endl;
    }

    return 0;
}