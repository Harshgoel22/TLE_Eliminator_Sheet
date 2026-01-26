#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll performOp(ll cknow, ll& know, ll i, ll& n, ll& target) {
    ll m = 64;
    for(ll shift=0; shift<m; shift++) {
        bool bitc = ((cknow & (1ll<<shift)) > 0);
        bool bitt = ((target & (1ll<<shift)) > 0);
        if(bitt==false && bitc==true) {
            return n;
        }
    }
    know = (know | cknow);
    return i+1;
}

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, kw; cin >> n >> kw;
        vector<vector<ll>> difficult(3, vector<ll>(n));
        for(int i=0; i<3; i++) {
            for(int j=0; j<n; j++) {
                cin >> difficult[i][j];
            }
        }

        ll currknow = 0, i=0, j=0, k=0;
        while(i<n || j<n || k<n) {
            if(currknow == kw) break;
            if(i<n) i = performOp(difficult[0][i], currknow, i, n, kw);
            if(j<n) j = performOp(difficult[1][j], currknow, j, n, kw);
            if(k<n) k = performOp(difficult[2][k], currknow, k, n, kw);
        }

        cout << (currknow == kw ? "Yes\n" : "No\n");
    }
    return 0;
}