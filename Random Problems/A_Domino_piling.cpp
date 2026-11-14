// [cph-header]
// Problem: A. Domino piling
// Group:   Codeforces - Codeforces Beta Round 47
// URL:     https://codeforces.com/contest/50/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int m,n; cin >> m >> n;

    int checker = m * n;

    if (checker % 2 == 0){   // Is even
        cout << checker / 2 << endl;
        return;

    } else if (checker % 2 != 0) {   // Is odd
        checker -= 1;
        if (checker != 0){    // != 0 -> to don't give us the run time error
            cout << checker / 2 << endl;
        } else {   // Then, the number is zero
            cout << 0 << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
