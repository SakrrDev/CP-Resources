#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int rows; cin >> rows;

    int arr2D[rows][3] = {{}};

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < 3; j++){
            cin >> arr2D[i][j];
        }
    }

    int counter = 0 , sum = 0;

    for (int i = 0; i < rows; i++){
        sum = 0;
        for (int j = 0; j < 3; j++){
            sum += arr2D[i][j];
        }

        if (sum >= 2){
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