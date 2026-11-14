// [cph-header]
// Problem: X. Convert To Decimal 2
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev()
{
    int t; cin >> t;

    while (t--)
    {
        int number; cin >> number;

        int ones = 0;
        int temp = number;

        while (temp > 0)
        {
            if (temp % 2 == 1){

                ones++;
            }
            temp /= 2;
        }

        int sum = 0;

        for (int i = 0; i < ones; i++)
        {
            sum = sum * 2 + 1;
        }

        cout << sum << endl;
    }
}

int main()
{
    fast_io;

    SakrDev();

    return 0;
}