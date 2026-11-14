// [cph-header]
// Problem: H. One Prime
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

bool isPrimeNumebr(int number){
    if (number == 1){
        return 0;

    } else if (number == 2 || number == 3){
        return 1;

    } else if (number % 2 == 0){
        //Prime numbers are not even, only 2
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
    
    if (isPrimeNumebr(number)){
        cout << "YES";
    }  else {
        cout << "NO";
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}