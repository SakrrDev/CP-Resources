// [cph-header]
// Problem: J. Lucky Array
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int n; cin >> n;
    int arr[n] = {};

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    const int offset = n;
    int freq[2 * n + 1] = {};

    for (int i = 0; i < n; i++){
        freq[arr[i] + n]++;
    }
    
    int mn = *min_element(arr, arr + n);

    int counter = freq[mn + n];

    if (counter % 2 == 0){
        cout << "Unlucky";
    } else {
        cout << "Lucky";
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}