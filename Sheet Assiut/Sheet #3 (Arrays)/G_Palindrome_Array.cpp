// [cph-header]
// Problem: G. Palindrome Array
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)

void SakrDev(void)
{
    int n;
    cin >> n;
    int arr[n] = {};
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool ok = 1;

    for (int i = 0; i < size / 2; i++){
            if (arr[i] != arr[size - i - 1]){
                ok = 0;
                break;
        }
    }

    if (ok){
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main()
{
    fast_io;

    SakrDev();

    return 0;
}