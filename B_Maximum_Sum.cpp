#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        ll arr[n]; for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr, arr+n, greater<ll>());
        ll prefixsum[n+1]; prefixsum[0] = 0;
        for(ll i=1; i<=n; i++) prefixsum[i] = prefixsum[i-1] + arr[i-1];

        if(k==0) {
            cout << prefixsum[n] << endl;
            continue;
        }

        ll result = 0;
        for(int i=0; i<=k; i++) {
            int oprleft = k - i;
            result = max(result, prefixsum[n-2*oprleft] - prefixsum[i]);
        }
        cout << result << endl;
    }
    return 0;
}