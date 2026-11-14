// [cph-header]
// Problem: B. Drawing 'X'
// Group:   Codeforces - Contest #2
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int number; cin >> number;

    for (int i = 0; i < number; i++){
        for (int j = 0; j < number; j++){
            if (i == j && i == number / 2){
                cout << "X";

            } else if (i == j){
                cout << "\\";

            } else if (i + j == number - 1){
                cout << "/";

            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

/*
  secondary diagonal => arr[i][size - 1 - i]

  so when use it in coondition to check sec diagonal we need to do this:

   j = [size - 1 - i]
   j + i = size - 1

   so the coondition will be => i + j == number - 1
*/

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}