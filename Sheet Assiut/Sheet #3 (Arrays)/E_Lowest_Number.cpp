// [cph-header]
// Problem: E. Lowest Number
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
    int n; cin >> n;
    int arr[n] = {};
    
    for (int i = 1; i <= n; i++) {cin >> arr[i];}

    int mn = arr[1];
    int index = 1;

    for (int i = 1; i <= n; i++){
        if (arr[i] < mn){
            mn = arr[i];
            index = i;

        } else {
            continue;
        }
    }

    cout << mn << " " << index << endl;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}