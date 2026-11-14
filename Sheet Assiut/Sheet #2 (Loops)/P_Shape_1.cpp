// [cph-header]
// Problem: P. Shape1
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int number; cin >> number;

    for (int i = number; i >= 1; i--){
        for (int j = i; j >= 1; j--){
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