// [cph-header]
// Problem: M. Lucky Numbers
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void)
{
    int a, b; cin >> a >> b;

    bool ok = false;

    for (int i = a; i <= b; i++)
    {
        int temp = i;
        bool lucky = true;

        while (temp > 0)
        {
            int digit = temp % 10;

            if (digit != 4 && digit != 7)
            {
                lucky = false;
                break;
            }

            temp /= 10;
        }

        if (lucky)
        {
            cout << i << " ";
            ok = true;
        }
    }

    if (!ok)
        cout << -1;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}