// [cph-header]
// Problem: A. Nearly Lucky Number
// Group:   Codeforces - Codeforces Beta Round 84 (Div. 2 Only)
// URL:     https://codeforces.com/contest/110/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// bool islucky(ll number){
//     while(number > 0){
//         int lastn = number % 10;
//         if (lastn != 4 || lastn != 7){
//             return false;
//         }
//     }
//     return true;
// }


/*
    Nearly Lucky -> If the summetion of all 4,7 in the string is 4 or 7
*/
void sakr(){
    string number; cin >> number;
    int numberofluckies = 0;

    for (int i = 0; i < number.length(); i++){
        if (number[i] == '4' || number[i] == '7'){
            numberofluckies++;
        }
    }

    if (numberofluckies == 4 || numberofluckies == 7){
        cout << "YES" << endl;
    } else {
     cout << "NO" << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
