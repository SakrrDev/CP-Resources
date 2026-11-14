#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
   
    long long n; cin >> n;
    long long arr[n] = {};

    for (int i = 0; i < n; i++) {cin >> arr[i];}

    long long sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    cout << abs(sum);
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}