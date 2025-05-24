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

