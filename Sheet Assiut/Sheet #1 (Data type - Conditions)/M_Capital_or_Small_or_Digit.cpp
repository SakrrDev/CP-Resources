// [cph-header]
// Problem: M. Capital or Small or Digit
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    char a; cin >> a;

    if (isalpha(int(a))){
        if (int(a) >= 65 && int(a) <= 90){
            cout << "ALPHA" << endl;
            cout << "IS CAPITAL";
        } else if (int(a) >= 97 && int(a) <= 122){
            cout << "ALPHA" << endl;
            cout << "IS SMALL";
        }
    } else {
        cout << "IS DIGIT";
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}