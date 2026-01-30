#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, q; cin >> n >> q;
    vector<ll> coloridx(51, n+1);
    ll arr[n]; for(ll i=0; i<n; i++) {cin >> arr[i]; coloridx[arr[i]] = min(coloridx[arr[i]], i+1);}

    ll query;
    while(q--) {
        cin >> query;
        ll firstidx = coloridx[query];
        for(ll i=1; i<=50; i++) {
            if(coloridx[i]<=n && coloridx[i]<firstidx) {
                coloridx[i]+=1;
            }
        }
        coloridx[query] = 1;
        cout << firstidx << " ";
    }
    return 0;
}