// [cph-header]
// Problem: Local: B_Chat_Order
// Group:   local
// URL:     d:\SakrDev\CP\Pupils Plan\2 - Linear and Non-Linear DS\B_Chat_Order.cpp

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void sakr()
{
    int number; cin >> number;
    string arr[number] = {};

    for (int i = 0; i < number; i++){
        cin >> arr[i];
    }

    map<string, bool> mp;

    for (int i = number - 1; i >= 0; i--){
        if (!mp[arr[i]]){
            cout << arr[i] << endl;
            mp[arr[i]] = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
