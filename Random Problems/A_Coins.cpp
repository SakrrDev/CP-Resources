// [cph-header]
// Problem: A. Coins
// Group:   Codeforces - Educational Codeforces Round 146 (Rated for Div. 2)
// URL:     https://codeforces.com/problemset/problem/1814/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    ll n, k; cin >> n >> k;

    if (n % 2 == 0 || k == 1) {
        cout << "YES" << endl;
    }
    else if (n >= k && (n - k) % 2 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
