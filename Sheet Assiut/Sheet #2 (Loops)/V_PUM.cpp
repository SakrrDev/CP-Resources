// [cph-header]
// Problem: V. PUM
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int number; cin >> number;

    int first = 1;

    for (int i = 1; i <= number; i++){
        cout << first << " " << first + 1 << " " << first + 2 << " PUM" << endl;

        first += 4;
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}