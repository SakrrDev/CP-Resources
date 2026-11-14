// [cph-header]
// Problem: C. Next Alphabet
// Group:   Codeforces - Contest #1
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    char a; cin >> a;
    if (a == 'z') {cout << "a";}
    else {
        int temp = int(a + 1);
        cout << char(temp);
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}