// [cph-header]
// Problem: S. Search In Matrix
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)


void SakrDev() {

    int n,m,x; cin >> n >> m;
    int array[n][m] = {};

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> array[i][j];
        }
    }

    cin >> x;

    bool flage = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (array[i][j] == x){
                flage = 1;
                break;
            }
        }
    }

    if (flage){
        cout << "will not take number";
    } else {
        cout << "will take number";
    }
}

int main() {

    fast_io;

    SakrDev();

    return 0;
}