// [cph-header]
// Problem: C. Even, Odd, Positive and Negative
// Group:   Codeforces - Sheet #2 (Loops)
// URL:     https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int number; cin >> number;
    int arr[number] = {};

    for (int i = 0; i < number; i++){
        cin >> arr[i];
    }

    int even = 0,odd = 0,pos = 0,neg = 0;

    for (int i = 0; i < number; i++){
        if (arr[i] == 0){
            even++;

        } else if (arr[i] % 2 == 0 && arr[i] > 0){
            // This number is even and positive
            even++,pos++;

        } else if (arr[i] % 2 == 0 && arr[i] < 0){
            // This number is even and negative
            even++,neg++;

        } else if (arr[i] % 2 != 0 && arr[i] > 0){
            // This number is odd and positive
            odd++,pos++;

        } else if (arr[i] % 2 != 0 && arr[i] < 0){
            // This number is even and negative
            odd++,neg++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}