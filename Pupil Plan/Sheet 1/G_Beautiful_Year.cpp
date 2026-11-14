#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int y; cin >> y;
    
    while(true){
        y++;
        string s = to_string(y);
        string t = s;

        sort(t.begin(),t.end());

        bool flage = true;

        for (int i = 1; i < 4; i++){
            if (t[i] == t[i - 1]){
                flage = false;
                break;
            }
        }

        if (flage){
            cout << y << endl;
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}