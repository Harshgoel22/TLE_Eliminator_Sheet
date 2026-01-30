#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll arr[n]; for(ll i=0; i<n; i++) cin >> arr[i];
        sort(arr, arr+n);
        if(n == 1) {
            cout << (arr[0]==1 ? "YES\n" : "NO\n");
            continue;
        }

        ll cumsum = 1;
        bool valid = true;
        for(ll i=1; i<n; i++) {
            if(arr[i] > cumsum) {
                valid = false;
                break;
            }
            cumsum += arr[i];
        }

        cout << (valid ? "YES\n" : "NO\n");
    }
    return 0;
}