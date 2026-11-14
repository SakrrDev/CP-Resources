// [cph-header]
// Problem: N. Check Code
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev() {

    int a,b; cin >> a >> b;
    int size = a + b + 1;

    string s; cin >> s;

    bool flage = true;

    if (s.length() != a + b + 1){
        flage = false;
    }

    if (s[a] != '-' && flage){
        flage = false;
    }

    for (int i = 0; i < s.length(); i++){

        if (i == a){
            continue;
        }

        if (s[i] > '9' || s[i] < '0'){
            flage = false;
            break;
        }
    }

    if (flage){
        cout << "Yes";
    } else {
        cout << "No";
    }
}

/*

  in ASCII Table [0 -> 9] Digit's

  start's from (48) to (57)

*/

int main() {

    fast_io;

    SakrDev();

    return 0;
}