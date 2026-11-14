// [cph-header]
// Problem: C. Cd and pwd commands
// Group:   Codeforces - VK Cup 2012 Qualification Round 1
// URL:     https://codeforces.com/contest/158/problem/C

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int t; cin >> t;

    string currant = "/";

    while (t--){
        string  s; cin >> s;
        if (s == "PWD"){
            if (currant.size() == 0){
                cout << "/" << endl;

            } else {
                cout << currant  << "/" << endl;
            }
        } else {
            string path; cin >> path;
            if (path[0] == '/'){
                currant = path;

            } else {
                currant += path;
            }

            for (int i = 0; i < path.size(); i++){
                // We must use find function with substr to remove the dir, butb i don't know
                // I wiil try again after study string minuplations
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
