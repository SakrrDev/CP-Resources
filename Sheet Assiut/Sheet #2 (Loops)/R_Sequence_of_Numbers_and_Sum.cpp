// [cph-header]
// Problem: R. Sequence of Numbers and Sum
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    bool flage = true;
    
    while (flage){
        int number1,number2; cin >> number1 >> number2;
        int sum = 0;

        if (number1 > 0 && number2 > 0){

            int Min = min(number1 , number2);
            int Max = max(number1, number2);

            for (int i = Min; i <= Max; i++){
                cout << i << " "; 
                sum += i;
            }

            cout << "sum =" << sum << endl;

        } else {
            flage = false;
        }
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}