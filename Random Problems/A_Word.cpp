// [cph-header]
// Problem: A. Word
// Group:   Codeforces - Codeforces Beta Round 55 (Div. 2)
// URL:     https://codeforces.com/contest/59/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    string s; cin >> s;
    int numberoflower = 0;
    int numberofupper = 0;

    for (int i = 0; i < s.length(); i++){
        if (islower(int(s[i]))){
            numberoflower++;
        } else {
            numberofupper++;
        }
    }

    if (numberoflower >= numberofupper){
        for (int i = 0; i < s.length(); i++){
            if (isupper(int(s[i]))){
                s[i] = tolower(int(s[i]));
            }
        }    
    } else {
        for (int i = 0; i < s.length(); i++){
            if (islower(int(s[i]))){
                s[i] = toupper(int(s[i]));
            }
        }            
    }

    cout << s << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
