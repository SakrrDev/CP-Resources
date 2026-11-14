// [cph-header]
// Problem: E. Avalanche
// Group:   Codeforces - Codeforces Round 1134 (Div. 4)
// URL:     https://codeforces.com/contest/2290/problem/E

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    
    int t; cin >> t;
    while (t--) {
        int number, k; cin >> number >> k;

        vector<int> a(number + 2);
        for (int i = 1; i <= number; i++){
            cin >> a[i];
        } 

        vector<int> s(number + 3, 0);

        for (int i = number; i >= 1; i--) {
            int r = min(number, i + k);

            int sum = (s[i + 1] - s[r + 1] + 2) % 2;

            int c = (a[i] % 2 + sum) % 2;

            s[i] = (s[i + 1] + c) % 2;
        }

        if (s[1] == 1){

            cout << "Alice" << endl;
        } else {

            cout << "Bob" << endl;
        }
    }
}

// arr2[1] == summetion of all elements in array (even + odd)

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
