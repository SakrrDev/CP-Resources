// [cph-header]
// Problem: Q. Digits
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int t; cin >> t; 

    while (t--){
        string number; cin >> number;

        for (int i = number.length() - 1; i >= 0; i--){
            cout << number[i] << " ";
        }

        cout << endl;
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}