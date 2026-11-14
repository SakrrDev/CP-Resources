// [cph-header]
// Problem: G. Summation from 1 to N
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    long long n; cin >> n;

    cout <<  (n * (n + 1)) / 2;

}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}