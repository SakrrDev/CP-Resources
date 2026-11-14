// [cph-header]
// Problem: D. Letters Down
// Group:   Codeforces - Codeforces Round 1134 (Div. 4)
// URL:     https://codeforces.com/contest/2290/problem/D

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// bool isPalindrome(const string& str) {
//     int left = 0;
//     int right = str.length() - 1;

//     while (left < right) {
//         if (str[left] != str[right]) {
//             return false; 
//         }
//         left++;
//         right--;
//     }
//     return true; 
// }

void sakr(){
    int t; cin >> t;

    while (t--) {
        int number; 
        string s;
        cin >> number >> s;

        bool need[26] = {}; 

        for (int i = 0; i < number / 2; i++) {
            int a = s[i] - 'a';
            int b = s[number - 1 - i] - 'a';

            if (a > b){
                swap(a, b);
            } 

            for (int x = a + 1; x <= b; x++)
                need[x] = true;
        }

        int ans = 0;
        
        for (int x = 0; x < 26; x++)
            if (need[x]){
                ans++;
            }

        cout << ans << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
