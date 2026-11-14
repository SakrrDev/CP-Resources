// [cph-header]
// Problem: S. Sum of Consecutive Odd Numbers
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int t; cin >> t;
    while (t--){
        int number1,number2; cin >> number1 >> number2;

        int mn = min(number1,number2);
        int mx = max(number1,number2);

        int sum = 0;

        for (int i = mn + 1; i < mx; i++){
            if (i % 2 != 0){
                sum += i;
            }
        }

        cout << sum << endl;
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}