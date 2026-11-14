// [cph-header]
// Problem: L. The Brothers
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    string firstName1, lastName1, firstName2, lastName2;
    cin >> firstName1 >> lastName1 >> firstName2 >> lastName2;

    if (lastName1 == lastName2){
        cout << "ARE Brothers";
    } else {
        cout << "NOT"; 
    }

}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}