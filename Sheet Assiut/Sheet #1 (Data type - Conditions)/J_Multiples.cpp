// [cph-header]
// Problem: J. Multiples
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int a , b; cin >> a >> b;

    cout << (a % b == 0 || b % a == 0 ? "Multiples" : "No Multiples");
    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}