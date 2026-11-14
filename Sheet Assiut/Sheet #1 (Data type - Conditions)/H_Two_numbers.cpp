// [cph-header]
// Problem: H. Two numbers
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    float a,b; cin >> a >> b;

    float result = a / b;

    cout << "floor " << a << " / " << b << " = " << floor(result) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(result) << endl;
    cout << "round " << a << " / " << b << " = " << round(result) << endl;
    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}