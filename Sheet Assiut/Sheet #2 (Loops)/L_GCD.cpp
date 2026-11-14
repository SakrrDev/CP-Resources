// [cph-header]
// Problem: L. GCD
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)

int gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

void SakrDev(void)
{
    int num1,num2; cin >> num1 >> num2;

    cout << gcd(num1, num2) << endl;
}

int main()
{
    fast_io;

    SakrDev();

    return 0;
}