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
