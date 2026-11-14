// [cph-header]
// Problem: W. Mathematical Expression
// Group:   Codeforces - Sheet #1 (Data type - Conditions)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int numberOne,numberTwo,result; cin >> numberOne;
    char op1,op2; cin >> op1;
    cin >> numberTwo;
    cin >> op2;
    cin >> result;

    if (op1 == '+'){
        if (numberOne + numberTwo == result){
            cout << "Yes";
        } else {
            cout << numberOne + numberTwo;
        }
    } else if (op1 == '-'){
        if (numberOne - numberTwo == result){
            cout << "Yes";
        } else {
            cout << numberOne - numberTwo;
        }
    } else {
        if (numberOne * numberTwo == result){
            cout << "Yes";
        } else {
            cout << numberOne * numberTwo;
        }
    }
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}