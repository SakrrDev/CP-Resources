// [cph-header]
// Problem: H. Data Type Guessing
// Group:   Codeforces - Contest #1
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
    
    double n, k, a; cin >> n >> k >> a;
    
    double result = (n * k) / a;
    long long ans = result;

    double temp = result - ans;

    if (temp > 0){
        cout << "double" << endl;
    } else if (ans <= 2147483647){
        cout << "int" << endl;
    } else {
        cout << "long long" << endl;
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}