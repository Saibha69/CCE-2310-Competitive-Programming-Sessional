1.// Problem name: (I) Palindrome.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 24/5/2025
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    // Use logarithm to avoid overflow in large exponentiation
    double result_log = log10(n) + a * log10(k);

    if (result_log <= log10(INT_MAX)) {
        cout << "int" << endl;
    } else if (result_log <= log10(LLONG_MAX)) {
        cout << "long long" << endl;
    } else {
        cout << "double" << endl;
    }

    return 0;
}

