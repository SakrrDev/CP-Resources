// [cph-header]
// Problem: F. Multiplication table
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int number; cin >> number;

    for (int i = 1; i <= 12; i++){
        cout << number << " * " << i << " = " << number * i << endl;
    }
    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}