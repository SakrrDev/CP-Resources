// [cph-header]
// Problem: Y. Easy Fibonacci
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev()
{
    int K, S; cin >> K >> S;

    long long result  = 0;

    for (int x = 0; x <= K; x++)
    {
        for (int y = 0; y <= K; y++)
        {
            int z = S - x - y;

            if (z >= 0 && z <= K)
            {
                result ++;
            }
        }
    }

    cout << result  << endl;
}

int main()
{
    fast_io;

    SakrDev();

    return 0;
}