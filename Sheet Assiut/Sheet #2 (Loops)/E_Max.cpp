// [cph-header]
// Problem: E. Max
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int number; cin >> number;
    int arr[number] = {};

    for (int i = 0; i < number; i++){
        cin >> arr[i];
    }

    cout << *max_element(arr, arr + number);
}

/*
    max_element Function: returns a pointer to the largest element in arrays and vectors
    and we use (*) to access the element or the value
*/

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}