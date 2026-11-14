// [cph-header]
// Problem: J. Primes from 1 to n
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

bool isPrimeNumber(int number){
    if (number == 1){
        return 0;

    } else if (number == 2 || number == 3){
        return 1;

    } else if (number % 2 == 0){
        return 0;
    }

    for (int i = 3; i <= sqrt(number); i+=2){
        if (number % i == 0){
            return 0;

        }
    }
    return 1;
}
void SakrDev(void) {
  
    int number; cin >> number;
    for (int i = 2; i <= number; i++){
        if (isPrimeNumber(i)){
            cout << i << " ";

        } else {
            continue;
        }
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}