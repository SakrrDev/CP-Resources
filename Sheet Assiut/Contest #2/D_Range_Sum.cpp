// [cph-header]
// Problem: D. Range Sum
// Group:   Codeforces - Contest #2
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    // int t; cin >> t;
    // while (t--){
    //     int l,r; cin >> l >> r;
    //     long long sum = 0;

    //     for (int i = l; i <= r; i++){
    //         sum += i;
    //     }

    //     cout << sum << endl;
    // }

    // This solution will give time limit

    int t; cin >> t;
    while (t--){
        long long l,r; cin >> l >> r;

        long long L = min(l,r);
        long long R = max(l,r);

        long long count = (R * (R + 1)) / 2 - ((L - 1) * L) / 2;

        cout << count << endl;
    }
    
}

/*
   The formula to calculate the sum in the range between l and r

   sum = (R * (R + 1)) / 2 - ((L - 1) * L) / 2
*/
int main() {
    fast_io;
    
    SakrDev();

    return 0;
}