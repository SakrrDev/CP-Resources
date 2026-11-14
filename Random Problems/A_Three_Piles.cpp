// [cph-header]
// Problem: A. Three Piles
// Group:   Codeforces - Codeforces Round 1134 (Div. 4)
// URL:     https://codeforces.com/contest/2290/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){

    int t; cin >> t;
    while (t--){

        int a,b,c; cin >> a >> b >> c;
    
        if (c - b == 1 && c - a == 2){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
