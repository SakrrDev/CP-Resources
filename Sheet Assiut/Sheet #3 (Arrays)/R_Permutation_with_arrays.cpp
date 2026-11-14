// [cph-header]
// Problem: R. Permutation with arrays
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)


void SakrDev() {

    int n; cin >> n;
    int arr1[n];
    int arr2[n];

    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    for (int i = 0; i < n ;i++){
        cin >> arr2[i];
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    bool flage = 1;

    for (int i = 0; i < n; i++){
        if (arr2[i] != arr1[i]){
            flage = 0;
            break;
        }
    }

    if(!flage){
        cout << "no";
    } else {
        cout << "yes";
    }

}

int main() {

    fast_io;

    SakrDev();

    return 0;
}