#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll arr[n]; for(ll i=0; i<n; i++) cin >> arr[i];

        ll prefixsum[n+1]; prefixsum[0] = 0;
        for(ll i=1; i<=n; i++) prefixsum[i] = prefixsum[i-1] + arr[i-1];

        ll maxweight = 0;
        for(ll k=1; k<=n; k++) {
            if(n%k==0) {
                ll maxwgt = 0, minwgt = LONG_LONG_MAX;
                for(ll j=k; j<=n; j+=k) {
                    ll currwgt = prefixsum[j] - prefixsum[j-k];
                    maxwgt = max(maxwgt, currwgt);
                    minwgt = min(minwgt, currwgt);
                }
                maxweight = max(maxweight, maxwgt-minwgt);
            }
        }

        cout << maxweight << endl;
    }
    return 0;
}