// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

void sakr() {
    char arr[8][8];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 8; i++) {
        int r = 0;

        for (int j = 0; j < 8; j++) {
            if (arr[i][j] == 'R')
                r++;
        }

        if (r == 8) {
            cout << 'R' << endl;
            return;
        }
    }

    for (int i = 0; i < 8; i++) {
        int b = 0;

        for (int j = 0; j < 8; j++) {
            if (arr[j][i] == 'B')
                b++;
        }

        if (b == 8) {
            cout << 'B' << endl;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        sakr();
    }

    return 0;
}