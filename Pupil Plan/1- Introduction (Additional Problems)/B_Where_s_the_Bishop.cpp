// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int t; cin >> t;
    while (t--){
        char arr[8][8] = {{}};

        for (int r = 0; r < 8; r++){
            for (int c = 0; c < 8; c++){
                cin >> arr[r][c]; 
            }
        }

        for (int r = 1; r < 7; r++){
            for (int c = 1; c < 7; c++){
                if (arr[r - 1][c - 1] == '#' && 
                    arr[r-1][c+1] == '#' &&
                    arr[r+1][c-1] == '#' &&
                    arr[r+1][c+1] == '#')
                {
                    cout <<  r + 1 << " " << c + 1 << endl;
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
