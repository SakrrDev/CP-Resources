// [cph-header]
// Problem: A. In Search of an Easy Problem
// Group:   Codeforces - Technocup 2019 - Elimination Round 1
// URL:     https://codeforces.com/contest/1030/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int number; cin >> number;
    int arr[number] = {};

    for (int i = 0; i < number; i++){
        int x; cin >> x;

        if (x == 1){
            cout << "HARD" << endl;
            return;
        } else {
            arr[i] = x;
        }
    }

    cout << "EASY" << endl;

}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
