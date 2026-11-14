// [cph-header]
// Problem: P. Minimize Number
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)


void SakrDev() {

    int n; cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int op = 0;

    while (true) {

        bool ok = true;

        for (int i = 0; i < n; i++) {

            if (arr[i] % 2 != 0) {
                ok = false;
                break;
            }
        }

        if (!ok)
            break;

        for (int i = 0; i < n; i++) {
            arr[i] /= 2;
        }

        op++;
    }

    cout << op;
}

int main() {

    fast_io;

    SakrDev();

    return 0;
}