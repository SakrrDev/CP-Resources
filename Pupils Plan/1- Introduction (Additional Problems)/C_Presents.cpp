// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int number; cin >> number;
    int arr[number] = {};
    int result[number + 1] = {};

    for (int i = 1; i <= number; i++){
        cin >> arr[i];

        result[arr[i]] = i;
    }


    for (int i = 1; i <= number; i++){
        cout << result[i] << " ";
    }
}

/*
Notes: 
    
    index  : 1 2 3 4 
    values : 2 3 4 1
    
    index  : 1 2 3 4
    vaules : 4 1 2 3 
    output : 4 1 2 3
*/

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
