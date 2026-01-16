#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        ll a[n], b[n];

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        unordered_map<ll,ll> mapa;
        ll cnt = 1;

        for(int i = 1; i < n; i++) {
            if(a[i] == a[i-1]) {
                cnt++;
            } else {
                mapa[a[i-1]] = max(mapa[a[i-1]], cnt);
                cnt = 1;
            }
        }
        mapa[a[n-1]] = max(mapa[a[n-1]], cnt);


        unordered_map<ll,ll> mapb;
        cnt = 1;

        for(int i = 1; i < n; i++) {
            if(b[i] == b[i-1]) {
                cnt++;
            } else {
                mapb[b[i-1]] = max(mapb[b[i-1]], cnt);
                cnt = 1;
            }
        }
        mapb[b[n-1]] = max(mapb[b[n-1]], cnt);


        ll result = 0;
        for(auto [key, val] : mapa) {
            result = max(result, val + mapb[key]);
        }

        for(auto [key, val] : mapb) {
            result = max(result, val + mapa[key]);
        }

        cout << result << endl;
    }
    return 0;
}