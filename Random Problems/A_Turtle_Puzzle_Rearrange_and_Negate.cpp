// [cph-header]
// Problem: A. Turtle Puzzle: Rearrange and Negate
// Group:   Codeforces - Codeforces Round 929 (Div. 3)
// URL:     https://codeforces.com/contest/1933/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    
    int t; cin >> t;
    while (t--){
        int number; cin >> number;
        int arr[number] = {};

        for (int i = 0; i < number; i++){
            cin >> arr[i];
        }

        int sum = 0;

        for (int i = 0; i < number; i++){
            sum += abs(arr[i]);    
        }

        cout << sum << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
