#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll arr[], ll& n, ll& x, ll& height) {
    ll unitscollected = 0;
    for(ll i=0; i<n; i++) {
        unitscollected += (height - min(height,arr[i]));
    }
    return (unitscollected <= x);
}

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, x; cin >> n >> x;
        ll arr[n]; for(int i=0; i<n; i++) cin >> arr[i];
        ll low = 1, high = 1e12, result = 1;
        while(low <= high) {
            ll mid = low + (high - low) / 2;
            if(check(arr, n, x, mid)==true) {
                result = mid;
                low = mid + 1;
            } else{
                high = mid - 1;
            }
        }

        cout << result << endl;
    }
    return 0;
}