// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int number; cin >> number;
    string s; cin >> s;

    unordered_map<string, int> freq;
    int k = 2; // The lenght of substring

    for (int i = 0; i <= number - k; i++){
        string sub = s.substr(i, k);

        freq[sub]++;
    }

    string max_key = "";
    int max_occurrence = 0;

    for (const auto& x : freq){
        if (x.second > max_occurrence){
            max_occurrence = x.second;
            max_key = x.first;
        }
    }

    cout << max_key << endl;
}

/* Notes:

    x.second -> value 
    x.first  -> key
*/

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
