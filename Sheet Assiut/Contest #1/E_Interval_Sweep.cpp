// [cph-header]
// Problem: E. Interval Sweep
// Group:   Codeforces - Contest #1
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int a,b; cin >> a >> b;

   if (a + b == 0){

    cout << "NO";
    return; 

   } else if (abs(a - b) <= 1){

    cout << "YES" << endl;

   }  else {

    cout << "NO";
   }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}