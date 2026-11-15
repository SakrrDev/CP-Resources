// [cph-header]
// Problem: A. Tram
// Group:   Codeforces - Codeforces Beta Round 87 (Div. 2 Only)
// URL:     https://codeforces.com/contest/116/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
that at each stop all exiting passengers exit 
before any entering passenger enters the tram.
*/
void sakr(){
    int t; cin >> t;
    int total = 0;

    int mx = total;

    while(t--){
        int x,y; cin >> x >> y;
        total -= x;
        total += y;

        mx = max(mx,total);
    }

    cout << mx << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
