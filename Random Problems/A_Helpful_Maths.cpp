// [cph-header]
// Problem: A. Helpful Maths
// Group:   Codeforces - Codeforces Round 197 (Div. 2)
// URL:     https://codeforces.com/contest/339/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    string s; cin >> s;

    int si = s.size();

    if (si == 1){
        cout << s << endl;
        return;
    }

    for (int i = 0; i < si - 1; i += 2){
        for (int j = si - 1; j >= i; j -= 2){
            int x = s[i] - '0';
            int y = s[j] - '0';

            if (x > y){
                swap(s[i],s[j]);
            }
        }
    }

    cout << s << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
