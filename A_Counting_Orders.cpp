#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll mod = 1e9+7;

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
        ll b[n]; for(ll i=0; i<n; i++) cin >> b[i];

        sort(a, a+n);
        sort(b, b+n);
        
        ll i=0, j=0, result = 1, runsum = 0;
        while(i<n) {
            while(j<n && a[i] > b[j]) {
                j++;
                runsum++;
            }
            result = (result * runsum) % mod;
            runsum-=1;
            i++;
        }

        cout << result << endl;
    }
    return 0;
}