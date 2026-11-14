// [cph-header]
// Problem: B. Even Numbers
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int number; cin >> number;

    if (number == 1){
        cout << -1;
        return;
    }

    for (int i = 1; i <= number; i++){
        if (i % 2 == 0){
            cout << i << endl;
        } else {
            continue; // Skip the odd numbers
        }
    }
    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}