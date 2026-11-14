// [cph-header]
// Problem: A. Beautiful Matrix
// Group:   Codeforces - Codeforces Round 161 (Div. 2)
// URL:     https://codeforces.com/contest/263/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
    Middle Index is arr[3][3]
    we want to find the min number of action to make it equal 1
*/
void sakr(){
    int arr[5][5];

    int r,c;

    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            if (arr[i][j] == 1){
                r = i;
                c = j;
            }
        }
    }

    int row = abs(3 - r);
    int column = abs(3 - c);

    cout << row + column << endl;
    
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
