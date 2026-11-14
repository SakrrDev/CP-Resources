// [cph-header]
// Problem: D. Fixed Password
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    const int password = 1999;

    for (int i = 1000; i <= 9999; i++){
        int number; cin >> number;
        if (number == password){
            cout << "Correct" << endl;
            return;
            
        } else {
            cout << "Wrong" << endl;
        }
    }
    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}