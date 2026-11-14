// [cph-header]
// Problem: A. Soldier and Bananas
// Group:   Codeforces - Codeforces Round 304 (Div. 2)
// URL:     https://codeforces.com/contest/546/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int k,n,w; cin >> k >> n >> w;

    int totalPrice = 0;

    for (int i = 1; i <= w; i++){
        totalPrice += i * k;
    }

    totalPrice = totalPrice - n;

    if (totalPrice <= 0){
        cout << 0 << endl;
    } else {
        cout << totalPrice << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
