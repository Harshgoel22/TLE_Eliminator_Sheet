#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll arr[n], narr[n]; 
        for(ll i=0; i<n; i++) {
            cin >> arr[i];
            narr[i] = arr[i];
        }

        sort(narr, narr+n);
        vector<ll> prefixsum(n,0); prefixsum[0] = narr[0];

        for(ll i=1; i<n; i++) {
            prefixsum[i] = prefixsum[i-1] + narr[i];
        }

        for(ll i=0; i<n; i++) {
            ll currsum = arr[i];
            ll result = 0;
            while(true) {
                auto idxptr = upper_bound(narr, narr+n, currsum);
                if(idxptr == narr) {
                    break;
                }
                idxptr--;
                ll idx = idxptr - narr;
                if(result == idx) break;
                result = idx;
                currsum = prefixsum[min(n-1,idx)];
            }
            cout << result << " ";
        }
        cout << endl;
    }
    return 0;
}