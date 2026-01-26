#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll check(ll c[], ll& n, ll& width, ll& x) {
    ll areaused = 0;
    for(ll i=0; i<n; i++) {
        ll size = c[i] + 2*width;
        areaused += 1ll*size*size;
        if(areaused > x) break;
    }
    return areaused;
}

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, x; cin >> n >> x;
        ll c[n]; for(ll i=0; i<n; i++) cin >> c[i];

        ll low = 1, high = 1e9/2, result = 1;
        while(low <= high) {
            ll mid = low + (high-low)/2;
            ll areaused = check(c, n, mid, x);
            if(areaused == x) {
                result = mid;
                break;
            }
            else if(areaused < x) {
                low = mid + 1;
            }
            else high = mid - 1;
        }

        cout << result << endl;
    }
    return 0;
}