// [cph-header]
// Problem: A. Word Capitalization
// Group:   Codeforces - Codeforces Round 172 (Div. 2)
// URL:     https://codeforces.com/contest/281/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    string s; cin >> s;
    char first = s[0];

    if (islower(int(first))){
        s[0] = toupper(int(first));
    }

    cout << s << endl; 
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
