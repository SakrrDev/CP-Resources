// [cph-header]
// Problem: B. Queue at the School
// Group:   Codeforces - Codeforces Round 163 (Div. 2)
// URL:     https://codeforces.com/contest/266/problem/B

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
    t is the number of swap for the boy he can do it
*/
void sakr(){
    int number,t; cin >> number >> t;
    string s; cin >> s;

    while (t--){
        for (int i = 0; i < number - 1; i++){
            
            if (s[i] == 'B' && s[i + 1] == 'G'){
                swap(s[i],s[i + 1]);
                i++;
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
