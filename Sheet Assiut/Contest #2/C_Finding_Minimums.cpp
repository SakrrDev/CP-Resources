// [cph-header]
// Problem: C. Finding Minimums
// Group:   Codeforces - Contest #2
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
    
    int number,k; cin >> number >> k;
    int arr[number] = {};

    for (int i = 0; i < number; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < number; i += k){
        int mn = arr[i];

        for (int j = i; j < min(i + k,number); j++){
            mn = min(mn,arr[j]);
        }
        cout << mn << " ";
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}