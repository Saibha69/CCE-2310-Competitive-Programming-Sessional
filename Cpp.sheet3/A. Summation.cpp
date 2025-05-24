1.// Problem name: (I) Palindrome.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 24/5/2025
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
        long long sum=0 ;
    for(int i=1;i<=n;i++)
    {
    long long a;
    cin>>a;
    sum = sum + a;
    }
    cout << abs( sum)<<endl;
}
