// [cph-header]
// Problem: V. Comparison
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int a,b; cin >> a;
    char s; cin >> s;
    cin >> b;

    if (s == '>'){   // a > b
        if (a > b){
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    } else if (s == '<'){    //  a < b
        if (a < b){
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    } else {
        if (a == b){
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}