// [cph-header]
// Problem: U. Float or int
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    float number; cin >> number;
    
    int temp =floor(number);

    if (temp == number){    // The number is an integer

        cout << "int " << temp; 

    } else {                // The number is a float

        float result = number - temp;

        cout << fixed << setprecision(3);

        cout << "float " << temp << " " << result; 
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}