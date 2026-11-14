// [cph-header]
// Problem: I. Palindrome
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    string number; cin >> number;
    int size = number.length();

    string reverseNumber = "";

    for (int i = size - 1; i >= 0; i--){
        reverseNumber += number[i]; 
    }

    while (reverseNumber.size() > 1 && reverseNumber[0] == '0')
    {
    reverseNumber.erase(0, 1);
    }

    cout << reverseNumber << endl;

    if (reverseNumber == number){
        cout << "YES" << endl;

    } else {
        cout << "NO" << endl;
    } 
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}