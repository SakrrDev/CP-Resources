// [cph-header]
// Problem: G. Factorial
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

// We use long long to avoid overflow 
long long Factorial(int number){
    if (number == 1 || number == 0){
        return 1;
    } else {
        return Factorial(number - 1) * number;
    }
}

void SakrDev(void) {
  
    int t; cin >> t;
    while (t--){
        int number; cin >> number;
        cout << Factorial(number) << endl;
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}