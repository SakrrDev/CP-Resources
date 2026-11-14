// [cph-header]
// Problem: D. Positions in array
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int n; cin >> n;
    int arr[n] = {};

    for (int i = 0; i < n; i++) { cin >> arr[i]; }

    for (int i = 0; i < n; i++){
        if (arr[i] <= 10){
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}