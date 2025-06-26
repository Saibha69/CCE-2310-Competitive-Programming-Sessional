1.// Problem name: (C) Next Alphabet.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 24/5/2025
#include<bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c == 'z') {
        cout << 'a' << endl;
    } else {
        cout << char(c + 1) << endl;
    }

    return 0;
}
