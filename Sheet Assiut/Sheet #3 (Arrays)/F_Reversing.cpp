// [cph-header]
// Problem: F. Reversing
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

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

    int reverse_arr[n];

    for (int i = size - 1; i >= 0; i--)
    {
        reverse_arr[size - 1 - i] = arr[i];
    }

    for (int i = 0; i < n; i++){
        cout <<  reverse_arr[i] << " ";
    }
}

int main()
{
    fast_io;

    SakrDev();

    return 0;
}