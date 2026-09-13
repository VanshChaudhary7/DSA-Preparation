// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "N=";
//     cin >> n;

//     // top half (including middle row)
//     for (int i = 1; i <= n; i++) {
//         for (int spaces = 1; spaces <= i - 1; spaces++)
//             cout << " ";
//         cout << i;
//         int gap = 2 * (n - i) - 1;
//         for (int spaces = 1; spaces <= gap; spaces++)
//             cout << " ";
//         if (i != 1)
//             cout << i;
//         cout << endl;
//     }

//     // bottom half (mirror, excluding middle row)
//     for (int i = n - 1; i >= 1; i--) {
//         for (int spaces = 1; spaces <= i - 1; spaces++)
//             cout << " ";
//         cout << i;
//         int gap = 2 * (n - i) - 1;
//         for (int spaces = 1; spaces <= gap; spaces++)
//             cout << " ";
//         if (i != 1)
//             cout << i;
//         cout << endl;
//     }

//     return 0;
// }


