#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    long long  a,b,c,d; cin >> a >> b >> c >> d;

    long long result = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;

    cout << result % 100;   // %100 will return last two digits, but %10 will return last digit only.
    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}