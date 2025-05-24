1.// Problem name: (I) Palindrome.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 24/5/2025
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a + b * c == d) || (a * b + c == d) ||
        (a - b * c == d) || (a * b - c == d) ||
        (a + b - c == d) || (a - b + c == d)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
