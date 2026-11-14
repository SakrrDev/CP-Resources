// [cph-header]
// Problem: A. Bear and Big Brother
// Group:   Codeforces - Codeforces Round 405 (rated, Div. 2, based on VK Cup 2017 Round 1)
// URL:     https://codeforces.com/contest/791/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    
    int a,b; cin >> a >> b;
    int counter = 0;

    while(a <= b){
        a *= 3;
        b *= 2;
        counter++;
    }

    cout << counter << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
