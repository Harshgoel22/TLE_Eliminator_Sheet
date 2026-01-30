#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<vector<ll>> grid(n, vector<ll>(n));
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<n; j++) {
                cin >> grid[i][j];
            }
        }

        ll ops_needed = 0;
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<n; j++) {
                if(grid[i][j]!=grid[n-i-1][n-j-1]) {
                    grid[i][j] = grid[n-i-1][n-j-1];
                    ops_needed++;
                }
            }
        }

        cout << ((ops_needed <= k && (n%2==1 || (k-ops_needed)%2==0)) ? "YES\n" : "NO\n");
    }
    return 0;
}