// [cph-header]
// Problem: A. Divisibility Problem
// Group:   Codeforces - Codeforces Round 629 (Div. 3)
// URL:     https://codeforces.com/contest/1328/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int t; cin >> t;
    int counter;

    while(t--){
        int a,b; cin >> a >> b;

        counter = 0;

        // while (a % b != 0){
        //     counter++;
        //     a++;
        // }

        // cout << counter << endl;

        cout << (b - (a % b)) % b << endl;

    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
