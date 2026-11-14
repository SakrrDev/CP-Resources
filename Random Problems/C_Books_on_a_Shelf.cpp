// [cph-header]
// Problem: C. Books on a Shelf
// Group:   Codeforces - Codeforces Round 1134 (Div. 4)
// URL:     https://codeforces.com/contest/2290/problem/C


// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    int t; cin >> t;

    while (t--){
        int number; cin >> number;
        int arr[number] = {};

        for (int i = 0; i < number; i++){
            cin >> arr[i];
        }

        sort(arr, arr + number);

        int result = 0;
        int s = 0;

        for (int i = 0; i < number; ){
            int j = i;

            while (j < number && arr[i] == arr[j]){
                j++;
            }

            arr[s] = arr[i];
            s++;
            result++;

            if (j - i >= 2){
                result++;
            }

            i = j;
        }

        int left = s;
        int right = number - 1;

        for (int i = s; i < number; i++){
            if (arr[i] != arr[i - 1]){
                swap(arr[i], arr[right]);
                right--;
            }
        }

        cout << result << endl;

        for (int i = 0; i < number; i++){
            cout << arr[i] << " ";
        }

        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
