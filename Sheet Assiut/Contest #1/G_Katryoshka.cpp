// [cph-header]
// Problem: G. Katryoshka
// Group:   Codeforces - Contest #1
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev()
{
    long long n, m, k; cin >> n >> m >> k;

    long long result = 0;

    long long x = min({n, m, k});

    result += x;

    n -= x;
    m -= x;
    k -= x;

    x = min(n / 2, k);   // When we use two eyes

    result += x;

    cout << result << endl;
}

int main()
{
    fast_io;

    SakrDev();

    return 0;
}