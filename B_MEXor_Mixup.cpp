#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll N = 300000;

int main() {
    vector<ll> prefix_xor(N+1, 0);
    for(ll i=1; i<=N; i++) {
        prefix_xor[i] = (prefix_xor[i-1]^i);
    }
    int t; cin >> t;
    while(t--) {
        ll mex, xxor; cin >> mex >> xxor;
        if(mex==0) {
            cout << (xxor>0 ? "1\n" : "3\n");
            continue;
        }

        ll runxor = prefix_xor[mex-1];
        if(runxor == xxor) {
            cout << mex << endl;
            continue;
        }

        if((runxor^xxor) == mex) cout << mex+2 << endl;
        else cout << mex+1 << endl; 
    }
    return 0;
}