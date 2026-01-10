#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        long long arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        long long prefixsum[n+1] = {0};
        for(int i=1; i<=n; i++) prefixsum[i] = prefixsum[i-1] + arr[i-1];

        while(q--) {
            int l, r, k; cin >> l >> r >> k;
            long long resultantsum = prefixsum[n] + 1ll*(r-l+1)*k - (prefixsum[r]-prefixsum[l-1]);
            if(resultantsum % 2 == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}