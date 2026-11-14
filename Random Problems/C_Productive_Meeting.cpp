// [cph-header]
// Problem: C. Productive Meeting
// Group:   Codeforces - 2 - Linear and Non-Linear DS
// URL:     https://codeforces.com/group/FcraNkfhvg/contest/551952/problem/C


#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr() {
    int n;
    cin >> n;

    priority_queue<pair<int, int>> pq;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x > 0) {
            pq.push({x, i});
        }
    }

    vector<pair<int, int>> ans;

    while (pq.size() >= 2) {
        auto [a, i] = pq.top();
        pq.pop();

        auto [b, j] = pq.top();
        pq.pop();

        ans.push_back({i, j});

        a--;
        b--;

        if (a > 0)
            pq.push({a, i});

        if (b > 0)
            pq.push({b, j});
    }

    cout << ans.size() << '\n';

    for (auto [i, j] : ans) {
    for (const auto& meeting : ans) {
        cout << meeting.first << " " << meeting.second << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        sakr();
    }

    return 0;
}
