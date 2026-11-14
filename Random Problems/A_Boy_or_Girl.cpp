// [cph-header]
// Problem: A. Boy or Girl
// Group:   Codeforces - Codeforces Round 146 (Div. 2)
// URL:     https://codeforces.com/contest/236/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

string distinct(string& str){
    bool seen[256] = {false};
    string result = "";

    for (unsigned char c : str){
        if (!seen[c]){
            seen[c] = true;
            result += c;
        }
    }

    return result;
}

void sakr(){

    string s; cin >> s;

    string result = distinct(s);

    int size = result.length();

    if (size % 2 == 0){
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
