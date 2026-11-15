// [cph-header]
// Problem: A. Anton and Danik
// Group:   Codeforces - Codeforces Round 379 (Div. 2)
// URL:     https://codeforces.com/contest/734/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int number; cin >> number;
    string s; cin >> s;

    int a = 0, b = 0;

    for (int i = 0; i < number; i++){
        if (s[i] == 'A'){
            a++;
        } else {
            b++;
        }
    }

    if (a > b){
        cout << "Anton" << endl;
    } else if (a < b){
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
