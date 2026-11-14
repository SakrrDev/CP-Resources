// [cph-header]
// Problem: W. Shape3
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int number; cin >> number;

    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= number - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }


    for (int i = number; i >= 1; i--) {
        
        for (int j = 1; j <= number - i; j++) {
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