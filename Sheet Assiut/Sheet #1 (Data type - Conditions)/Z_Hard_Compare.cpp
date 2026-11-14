// [cph-header]
// Problem: Z. Hard Compare
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

const double E = 1e-9;  

void SakrDev(void) {
  
    long long a, b, c, d; cin >> a >> b >> c >> d;
 
    double left = b * log10(a);
    double right = d * log10(c);
 
 
    if(left > right + E){

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