// [cph-header]
// Problem: B. Easy Number Challenge
// Group:   Codeforces - Codeforces Round 146 (Div. 2)
// URL:     https://codeforces.com/contest/236/problem/B

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int a,b,c; cin >> a >> b >> c;

    ll sum = 0;

    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= b; j++){
            for (int k = 1; k <= c; k++){
                sum += i * j * k;
            }
        }
    }

    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
