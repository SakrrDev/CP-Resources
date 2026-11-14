// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void sakr(){
    
    char arr[4][4] = {{}};

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    int black;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){ 

            black = 0;
        
            black += (arr[i][j] == '#');
            black += (arr[i][j+1] == '#');
            black += (arr[i+1][j] == '#');
            black += (arr[i+1][j+1] == '#');


            if (black != 2){
                cout << "YES" << endl;
                return;
        }

        }
    }

    cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
