// [cph-header]
// Problem: F. Break Number
// Group:   Codeforces - Contest #2
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev() {
    int n; cin >> n;

    int mx = 0;

    while (n--) {
        long long number; cin >> number;

        int cnt = 0;

        while (number % 2 == 0) {
            number /= 2;
            cnt++;
        }

        mx = max(mx, cnt);
    }

    cout << mx;
}

int main() {
    fast_io;

    SakrDev();

    return 0;
}