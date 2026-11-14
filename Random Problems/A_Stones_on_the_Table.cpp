// [cph-header]
// Problem: A. Stones on the Table
// Group:   Codeforces - Codeforces Round 163 (Div. 2)
// URL:     https://codeforces.com/contest/266/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    
    int number; cin >> number;
    string s; cin >> s;

    int result = 0;

    for (int i = 1; i <= number; i++){
        if (s[i] == s[i - 1]){
            result++;
        }
    }

    cout << result << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
