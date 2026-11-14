// [cph-header]
// Problem: F. Digits Summation
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    long long n,m; cin >> n >> m;

    int first = n % 10;
    int second = m % 10;

    cout << first + second << endl;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}