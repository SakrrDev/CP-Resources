// [cph-header]
// Problem: N. Numbers Histogram
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    char x; cin >> x;
    int number; cin >> number;
    int arr[number] = {};

    for (int i = 0; i < number; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < number; i++){
        int temp = arr[i];
        for (int j = 1; j <= temp; j++){
            cout << x;
        }
        cout << endl;
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}