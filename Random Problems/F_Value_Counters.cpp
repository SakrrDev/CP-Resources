// [cph-header]
// Problem: F. Value Counters
// Group:   Codeforces - Codeforces Round 1134 (Div. 4)
// URL:     https://codeforces.com/contest/2290/problem/F

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    
    int t; cin >> t;

    while (t--){

        int number; cin >> number;

        vector<ll> ve(number + 1);

        for (int i = 1; i <= number; i++){
            cin >> ve[i];
        }

        vector<int> permutation(number + 1, 0);

        bool flage = true;

        for (int i = 1; i <= number; i++){
            if (flage){
                ll pos = ve[i] + number + 1 - i;

                if (pos < 1 || pos > number || permutation[pos] != 0){
                    flage = false;
                } else {
                    permutation[pos] = i;
                }
            }
        }

        if (!flage){
            cout << -1 << endl;
        } else {
        for (int i = 1; i <= number; i++) cout << permutation[i] << " ";
        cout << "\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
