// [cph-header]
// Problem: A. Petya and Strings
// Group:   Codeforces - Codeforces Beta Round 85 (Div. 2 Only)
// URL:     https://codeforces.com/contest/112/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    
    string s1,s2; cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++){
        if (isupper(int(s1[i]))){
            s1[i] = tolower(int(s1[i]));
        }

        if(isupper(int(s2[i]))){
            s2[i] = tolower(int(s2[i]));
        }
    }

    if (s1 == s2){
        cout << 0 << endl;
    } else if (s1 < s2) {
        cout << -1 << endl;
    } else {
        cout << 1 << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
