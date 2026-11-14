// [cph-header]
// Problem: B. Stubborn Pen
// Group:   Codeforces - Codeforces Round 1134 (Div. 4)
// URL:     https://codeforces.com/contest/2290/problem/B

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int t; cin >> t;
    
    while(t--){
        int number; cin >> number;
        string s; cin >> s;

        int counter = 0;

        // If Si if even -> red 
        // If si is odd -> blue

        char now = 'R';

        for (int i = 0; i < number; i++){
            if (now != s[i]){
                counter++;
            }

            if (s[i] == 'R'){
                now = 'B';
            } else {
                now = 'R';
            }
        }

        cout << counter << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
