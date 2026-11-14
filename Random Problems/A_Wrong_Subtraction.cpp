// [cph-header]
// Problem: A. Wrong Subtraction
// Group:   Codeforces - Codeforces Round 479 (Div. 3)
// URL:     https://codeforces.com/contest/977/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int number,k; cin >> number >> k;

    int lastnumber = number;

    while (k--){
        lastnumber = number % 10;

        if (lastnumber == 0){
            number /= 10;
        } else {
            number--;
        }
    }

    cout << number << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
