// [cph-header]
// Problem: Y. The last 2 digits
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
   long long a, b, c, d; cin >> a >> b >> c >> d;
 
   long long result = a * b % 100;
   result = result * c % 100;
   result = result * d % 100;
 
   if (result < 10)
       cout << "0" << result;
   else
       cout << result;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}