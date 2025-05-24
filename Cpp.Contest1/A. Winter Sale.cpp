1.// Problem name: (I) Palindrome.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main() {
    double X, P;
    cin >> X >> P;

    // Calculate original price using the formula: Original = P / (1 - X/100)
    double originalPrice = P / (1 - X / 100.0);

    // Print the result rounded to two decimal places
    cout << fixed << setprecision(2) << originalPrice << endl;

    return 0;
}
