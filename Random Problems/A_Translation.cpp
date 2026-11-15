// [cph-header]
// Problem: A. Translation
// Group:   Codeforces - Codeforces Beta Round 40 (Div. 2)
// URL:     https://codeforces.com/contest/41/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Using two pointers
void sakr()
{
    string s1, s2;
    cin >> s1 >> s2;

    // bool flage = true;

    // if (s1 == s2){
    //     cout << "NO" << endl;
    //     return;
    // } else {
    //     int first = 0, last = s2.length() - 1;

    //     while (first < s1.length() && last >= 0){
    //         if (s1[first] != s2[last]){
    //             flage = false;
    //             break;
    //         }
    //         first++;
    //         last--;
    //     }
    // }

    // if(!flage){
    //     cout << "NO" << endl;
    // } else {
    //     cout << "YES" << endl;
    // }

    string reversed = s2;
    reverse(reversed.begin(), reversed.end());

    if (reversed == s1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
