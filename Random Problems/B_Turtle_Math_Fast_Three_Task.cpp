// [cph-header]
// Problem: B. Turtle Math: Fast Three Task
// Group:   Codeforces - Codeforces Round 929 (Div. 3)
// URL:     https://codeforces.com/contest/1933/problem/B

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    
    int t; cin >> t;
    while (t--){
        int number; cin >> number;

        int arr[number] = {};
        ll sum = 0;

        for (int i = 0; i < number; i++){
            cin >> arr[i];

            sum += arr[i];
        }


        int counter = 0;

        if (sum % 3 == 0){
            cout << 0 << endl;
            continue;

        } else if ((sum + 1) % 3 == 0){
            cout << 1 << endl;
            continue;
        }

        bool isempty = true;
        for (int i = 0; i < number; i++){
            if ((sum - arr[i]) % 3 == 0){
                cout << 1 << endl;
                isempty = false;
                break;
            }
        }

        if (isempty == true){
            cout << 2 << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
