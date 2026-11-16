// [cph-header]
// Problem: A. George and Accommodation
// Group:   Codeforces - Codeforces Round 267 (Div. 2)
// URL:     https://codeforces.com/contest/467/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int t; cin >> t;

    int counter = 0;

    while(t--){
        int x,y; cin >> x >> y;
        if (y - x >= 2){
            counter++;
        }
    }

    cout << counter << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
