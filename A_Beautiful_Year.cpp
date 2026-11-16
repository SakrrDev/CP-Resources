// [cph-header]
// Problem: A. Beautiful Year
// Group:   Codeforces - Codeforces Round 166 (Div. 2)
// URL:     https://codeforces.com/contest/271/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool Beautiful_Year(int year){
    string Year = to_string(year);
    set<int> s(Year.begin() , Year.end());
 
    return Year.size() == s.size();
 
}
 
void sakr(){

    int y; cin >> y;
    while(true){
 
        y++;
        if (Beautiful_Year(y)){
            cout << y << endl;
            break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
