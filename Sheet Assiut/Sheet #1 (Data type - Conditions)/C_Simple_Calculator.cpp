// [cph-header]
// Problem: C. Simple Calculator
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    long long x,y; cin >> x >> y;
    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " * " << y << " = " << x * y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}