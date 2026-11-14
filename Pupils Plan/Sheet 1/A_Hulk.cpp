#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr()
{

    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "I hate it";
        return;
    }

    cout << "I hate that";

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << " I love";
        }
        else
        {
            cout << " I hate";
        }

        if (i != n)
        {
            cout << " that";
        }
    }

    cout << " it";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}