// [cph-header]
// Problem: A. Timon and Pumbaa
// Group:   Codeforces - Contest #2
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int a,b; cin >> a >> b;
    int result = a - b;
    if (result >= 0){
        cout << result;

    } else {
        cout << 0;
    }
    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}