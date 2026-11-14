// [cph-header]
// Problem: K. Divisors
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int number; cin >> number;

    for (int i = 1; i <= number; i++){
        if (number % i == 0){
            cout << i << endl;

        } else {
            continue;
        }
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}