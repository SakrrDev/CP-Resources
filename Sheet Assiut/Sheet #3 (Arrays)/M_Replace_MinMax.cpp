// [cph-header]
// Problem: M. Replace MinMax
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev() {

    int n; cin >> n;
    int arr[n] = {};

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int mn = arr[0];
    int mx = arr[0];

    int mnIndex = 0, mxIndex = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] < mn){
            mn = arr[i];
            mnIndex = i;

        }
        if (arr[i] > mx){
            mx = arr[i];
            mxIndex = i;
        }
    }

    swap(arr[mnIndex],arr[mxIndex]);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main() {

    fast_io;

    SakrDev();

    return 0;
}