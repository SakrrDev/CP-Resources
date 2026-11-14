// [cph-header]
// Problem: K. Sum Digits
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
    int size; cin >> size;
    string number; cin >> number;

    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += number[i] - '0';
    }

    cout << sum;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}