#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    
    int n; cin >> n;

    ll sum = 0;
    ll mn = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        ll x; cin >> x;

        sum += x;

        if (x % 2 != 0) {
            mn = min(mn, x);
        }
    }

    if (sum % 2 != 0) {
        sum -= mn;
    }

    cout << sum << '\n';
    
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}