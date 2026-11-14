// [cph-header]
// Problem: B. Memo and Momo
// Group:   Codeforces - Contest #1
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    long long a,b,k; cin >> a >> b >> k;

    if (a % k == 0 && b % k == 0) {cout << "Both";}
    else if (a % k == 0 && b % k != 0) {cout << "Memo";}
    else if (a % k != 0 && b % k == 0) {cout << "Momo";}
    else {cout << "No One";}
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}