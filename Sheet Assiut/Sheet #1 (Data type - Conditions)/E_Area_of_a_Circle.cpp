// [cph-header]
// Problem: E. Area of a Circle
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

const double PI = 3.141592653;

void SakrDev(void) {
  
    double Area = 0;
    double radius; cin >> radius;

    Area = PI * radius * radius;

    cout << fixed << setprecision(9);

    cout << Area << endl;

}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}