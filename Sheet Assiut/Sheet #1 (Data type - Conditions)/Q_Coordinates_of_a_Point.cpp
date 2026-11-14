// [cph-header]
// Problem: Q. Coordinates of a Point
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    float x,y; cin >> x >> y;

    if (x > 0 && y > 0) { cout << "Q1"; }
    else if (x < 0 && y > 0) { cout << "Q2";}
    else if (x < 0 && y < 0) { cout << "Q3";}
    else if (x > 0 && y < 0) { cout << "Q4";}
    else if (x == 0 && y == 0) { cout << "Origem";}
    else if (x == 0 && y != 0) { cout << "Eixo Y";}
    else if (x != 0 && y == 0) { cout << "Eixo X";}
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}