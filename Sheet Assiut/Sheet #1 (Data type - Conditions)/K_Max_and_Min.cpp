// [cph-header]
// Problem: K. Max and Min
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)

void SakrDev(void)
{

    int a, b, c;
    cin >> a >> b >> c;

    cout << min(a, min(b, c));

    cout << " ";

    cout << max(a, max(b, c));
}

int main()
{
    fast_io;

    SakrDev();

    return 0;
}