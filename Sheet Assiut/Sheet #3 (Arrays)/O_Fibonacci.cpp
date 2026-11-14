// [cph-header]
// Problem: O. Fibonacci
// Group:   Codeforces - Sheet #3 (Arrays)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

// long long Fibonacci(int number){
//    if (number == 1){
//         return 0;

//    } else if (number == 2){
//         return 1;

//    } else {
//         return Fibonacci(number - 1) + Fibonacci(number - 2); 
//    }
// }

void SakrDev() {

    int number; cin >> number;
    // cout << Fibonacci(number);   Time limitt in test 44\

    long long fib[number];
    fib[1] = 0;
    fib[2] = 1;

    for (int i = 3; i <= number; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << fib[number];
}


int main() {

    fast_io;

    SakrDev();

    return 0;
}