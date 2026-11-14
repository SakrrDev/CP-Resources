#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int n; cin >> n;
    string s; cin >> s;

    int counter = 0;

    for (int i = 0; i < s.length(); i++){
        if (s[i] == s[i - 1]){
            counter++;
        } 
    }

    cout << counter << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}