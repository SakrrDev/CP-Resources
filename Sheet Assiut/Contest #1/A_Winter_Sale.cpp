// [cph-header]
// Problem: A. Winter Sale
// Group:   Codeforces - Contest #1
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    float discount,newPrice; cin >> discount >> newPrice;

    float oldPrice = (newPrice / (1 - (discount/100)));

    cout << fixed << setprecision(2);

    cout << oldPrice;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}