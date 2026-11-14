#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int Size = s.length();

        if (s.length() <= 10){
            cout << s << endl;
        } else {
            int counter = 0;
            for (int i = 1; i < s.length() - 1; i++){
                counter++;
            }

            cout << s[0] << counter << s[Size - 1] << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}