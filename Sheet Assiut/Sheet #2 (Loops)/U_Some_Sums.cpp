// [cph-header]
// Problem: U. Some Sums
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int number,a,b; cin >> number >> a >> b;
    long long sum = 0;
    
    for (int i = 1; i <= number; i++){

        int temp = i;
        long long sumDigits = 0;

        while (temp > 0){
            sumDigits += temp % 10;
            temp /= 10;
        }

        if (sumDigits >= a && sumDigits <= b){
            sum += i;
        }
    }

    cout << sum;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}