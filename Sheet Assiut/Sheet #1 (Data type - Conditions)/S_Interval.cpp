// [cph-header]
// Problem: S. Interval
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    double number; cin >> number;
 
    if (number >= 0 && number <= 25)
        cout << "Interval [0,25]" << endl;
    else if (number > 25 && number <= 50)
        cout << "Interval (25,50]" << endl;
    else if (number > 50 && number <= 75)
        cout << "Interval (50,75]" << endl;
    else if (number > 75 && number <= 100)
        cout << "Interval (75,100]" << endl;
    else
        cout << "Out of Intervals" << endl;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}