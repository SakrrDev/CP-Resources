#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL)

void SakrDev(void) {
  
    int n, x; cin >> n;
    int arr[n]= {};
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    } 

    cin >> x;

    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            cout << i;
            return;

        }
    }
    cout << -1;
}

int main() {
    fast_io;
    
    SakrDev();

    return 0;
}