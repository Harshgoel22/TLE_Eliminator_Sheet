#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll sum = 0, numneg = 0, minabsnum = LLONG_MAX;
        ll arr[n]; 
        for(ll i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i] < 0) numneg++;
            sum += abs(arr[i]);
            minabsnum = min(minabsnum, abs(1ll*arr[i]));
        }

        cout << (numneg%2==0 ? sum : sum-2*minabsnum) << endl;
    }
    return 0;
}