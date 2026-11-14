// [cph-header]
// Problem: E. Hady Rides the Train
// Group:   Codeforces - Contest #2
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)

void SakrDev(void)
{

    long long id;
    cin >> id;

    long long row = (id / 4);
    long long clm = 0;

    if (row % 2 == 0)
    {
        clm = id % 4;
        
    } else {
        clm = 3 - (id % 4);
    }

    cout << row << " " << clm;
}

int main()
{
    fast_io;

    SakrDev();

    return 0;
}