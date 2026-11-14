// [cph-header]
// Problem: I. Smallest Pair
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        
        vector<long long> arr(n + 1);

        for (int i = 1; i <= n; i++){
            cin >>arr[i];
        }

        long long mn = arr[1] - 1;
        long long ans = LLONG_MAX;

        for (int j = 2; j <= n; j++) {
        ans = min(ans, mn + arr[j] + j);

        mn = min(mn, arr[j] - j);
        }

        cout << ans << endl;
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}