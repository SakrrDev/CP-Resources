// [cph-header]
// Problem: A. Vanya and Fence
// Group:   Codeforces - Codeforces Round 355 (Div. 2)
// URL:     https://codeforces.com/contest/677/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int n,h; cin >> n >> h;
    int arr[n] = {};

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] <= h){
            result++;
        } else {
            result += 2;
        }
    }

    cout << result << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
