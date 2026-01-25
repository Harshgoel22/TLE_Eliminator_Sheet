#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
        ll b[n]; for(ll i=0; i<n; i++) cin >> b[i];

        ll result = 0, runsum = 0, maxb = 0;
        for(ll i=0; i<min(n,k); i++) {
            runsum += a[i];
            maxb = max(maxb, b[i]);
            result = max(result, runsum + (k-i-1)*maxb);
        }
        cout << result << endl;
    }
    return 0;
}