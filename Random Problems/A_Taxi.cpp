// [cph-header]
// Problem: A. Taxi
// Group:   Codeforces - 1- Introduction (Additional Problems)
// URL:     https://codeforces.com/group/FcraNkfhvg/contest/550147/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){

    int number; cin >> number;
    int arr[number] = {};

    for (int i = 0; i < number; i++){cin >> arr[i];}

    sort(arr, arr + number);

    int ans = 0, l = 0, r = number - 1;

    while (l <= r){
        int t = 4 - arr[r];    // The Free Space in the taxi
        r--;

        while (l <= r && arr[l] <= t){
            t -= arr[l];
            l++;
        }

        ans++;
    }

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
