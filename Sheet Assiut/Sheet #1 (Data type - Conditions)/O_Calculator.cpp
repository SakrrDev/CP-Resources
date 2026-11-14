// [cph-header]
// Problem: O. Calculator
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int a,b; cin >> a;
    char op; cin >> op;

    cin >> b;

    if (op == '+'){
        cout << a + b;
    } else if (op == '-'){
        cout << a - b;
    } else if (op == '*'){
        cout << a * b;
    } else if (op == '/'){

        // if (b != 0){
        //     cout << a / b;
        // } else {
        //     cout << "Error: Division by zero!";
        // }

        cout << a / b;
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}