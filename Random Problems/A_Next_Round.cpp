// [cph-header]
// Problem: A. Next Round
// Group:   Codeforces - VK Cup 2012 Qualification Round 1
// URL:     https://codeforces.com/contest/158/problem/A

// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr()
{
    int number, k;
    cin >> number >> k;
    int arr[number] = {};

    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }

    int counter = 0;
    int checker = arr[k - 1];

    for (int i = 0; i < number ; i++)
    {
        if (arr[i] >= checker && arr[i] > 0)
        {
            counter++;
        }
    }

    cout << counter << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}
