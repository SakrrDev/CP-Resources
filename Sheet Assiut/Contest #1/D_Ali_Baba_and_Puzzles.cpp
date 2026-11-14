// [cph-header]
// Problem: D. Ali Baba and Puzzles
// Group:   Codeforces - Contest #1
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    long long a,b,c,d; cin >> a >> b >> c >> d;

    vector<long long> sakr{
        a + b - c,
        a + b * c,
        a - b + c,
        a - b * c,
        a * b + c,
        a * b - c
    };

    for (auto x : sakr){
        if (x == d){
            cout << "YES";
            return;
        }
        // else {
        //     cout << "NO";     // Will print NO when x doesn't equal d in every step
        // }
    }
    cout << "NO";

}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}