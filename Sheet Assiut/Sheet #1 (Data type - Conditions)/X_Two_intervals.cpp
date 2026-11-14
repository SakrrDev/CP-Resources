// [cph-header]
// Problem: X. Two intervals
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int l1,r1,l2,r2; cin >> l1 >> r1 >> l2 >> r2;

    int left = max(l1,l2);
    int right = min(r1,r2);

    if (left <= right){

        cout << left << " " << right;
        
    } else {
        cout << -1;
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}