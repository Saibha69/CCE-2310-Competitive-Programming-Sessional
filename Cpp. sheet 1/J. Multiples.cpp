1.// Problem name: (I) Palindrome.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long A,B;
    cin>>A>>B;
    if(A % B == 0 || B % A == 0)
    {
       cout<< "Multiples" << endl;
    }
    else
    {
       cout<< "No Multiples" << endl;

    }
}
