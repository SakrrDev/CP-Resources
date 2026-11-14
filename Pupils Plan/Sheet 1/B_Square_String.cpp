#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int Size = s.length();

        if (Size % 2 != 0){
            cout << "NO" << endl;

        } else {
            string first = s.substr(0 , Size / 2);
            string second = s.substr(Size / 2 , Size / 2);

            if (first == second){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}