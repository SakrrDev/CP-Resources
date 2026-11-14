// [cph-header]
// Problem: D.  Difference
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    long long a,b,c,d; cin >> a >> b >> c >> d;

    long long x = (a * b)-(c * d);
    
    cout << "Difference = " << x << endl;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}