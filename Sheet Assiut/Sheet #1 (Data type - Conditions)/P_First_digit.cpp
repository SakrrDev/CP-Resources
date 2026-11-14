// [cph-header]
// Problem: P. First digit !
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    char number; cin >> number;

    if (number % 2 == 0){
        cout << "EVEN";
    } else {
        cout << "ODD";
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}