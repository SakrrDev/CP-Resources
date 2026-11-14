// [cph-header]
// Problem: I. Lucky Numbers
// Group:   Codeforces - Contest #1
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int N; cin >> N;
 
    int digit1 = N / 10; 
    int digit2 = N % 10; 
 
    if ((digit2 != 0 && digit1 % digit2 == 0) || (digit1 != 0 && digit2 % digit1 == 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}