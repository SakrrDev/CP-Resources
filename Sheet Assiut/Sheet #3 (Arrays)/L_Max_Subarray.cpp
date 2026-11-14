// [cph-header]
// Problem: L. Max Subarray
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev() {

    int T;
    cin >> T;

    while (T--) {

        int N;
        cin >> N;

        int arr[N];

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < N; i++) {

            int current_max = arr[i];

            for (int j = i; j < N; j++) {

                if (arr[j] > current_max)
                    current_max = arr[j];

                cout << current_max << " ";
            }
        }

        cout << endl;
    }
}

int main() {

    fast_io;

    SakrDev();

    return 0;
}