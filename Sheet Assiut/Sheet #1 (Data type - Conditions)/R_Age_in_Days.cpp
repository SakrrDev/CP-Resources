// [cph-header]
// Problem: R. Age in Days
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    const int days_in_year = 365;
    int numberOfdays; cin >> numberOfdays;

    int year = 0, month = 0;
    
    while (numberOfdays >= 365){
        numberOfdays -= 365; year++;
    }
    
    while(numberOfdays >= 30){
        numberOfdays -= 30; month++;
    }

    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << numberOfdays << " days" << endl;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}