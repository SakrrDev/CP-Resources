// [cph-header]
// Problem: T. Shape2
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int n; cin >> n;

    for (int i = 1; i <= n; i++){

    for (int j = 1; j <= n - i; j++){
        cout << " ";
    }

    for (int j = 1; j <= 2 * i - 1; j++){
        cout << "*";
    }

        cout << endl;
    }    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}