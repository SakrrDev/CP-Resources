// [cph-header]
// Problem: T. Matrix
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)


void SakrDev() {

    int n; cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int result_for_main = 0;
    int result_for_secondary = 0;

    for (int i = 0; i < n; i++){  
        for (int j = 0; j < n; j++){
            if (i == j){
                result_for_main += arr[i][j];
            }
            
            if (i + j == n - 1){
                result_for_secondary += arr[i][j];
            }
        }
    }



    cout << abs(result_for_main - result_for_secondary) << endl;
}

int main() {

    fast_io;

    SakrDev();

    return 0;
}