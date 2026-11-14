// [cph-header]
// Problem: H. Sorting
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        if (minIdx != i)
            swap(arr[i], arr[minIdx]);
    }
}

void SakrDev(void) {
  
    int n; cin >> n;
    int arr[n] = {};

    for (int i = 0; i < n; i++) { cin >> arr[i]; }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}