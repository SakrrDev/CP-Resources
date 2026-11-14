#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sakr(){
    
    int n; cin >> n;
    int arr[n] = {};

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr,arr + n);

    long long sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    // cout << sum << endl;

    int i = 0;
    while (sum % 2 != 0){
        sum -= arr[i];
        i++;
    }

    cout << sum;
    
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    sakr();

    return 0;
}