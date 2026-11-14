// [cph-header]
// Problem: T. Sort Numbers
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    long long a,b,c; cin >> a >> b >> c;

    int arr[3] = {a,b,c};
    sort(arr, arr + 3);

    cout << arr[0] << "\n" << arr[1] << "\n" << arr[2];

    cout << "\n\n";

    cout << a << "\n" << b << "\n" << c;
    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}