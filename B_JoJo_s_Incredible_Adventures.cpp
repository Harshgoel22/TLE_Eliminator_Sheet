#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        string binstr; cin >> binstr;
        ll n = binstr.size();

        ll i=0, maxlen = 0;
        while(i<n) {
            if(binstr[i]=='0') {
                i++;
                continue;
            }
            ll j = (i+1)%n, cnt = 1;
            while(j!=i && binstr[j]=='1') {
                cnt++;
                j = (j+1)%n;
            }

            maxlen = max(maxlen, cnt);
            if(j <= i) break;
            i = max(i+1, j);
        }

        if(maxlen == n) {
            cout << 1ll*n*n << endl;
            continue;
        }

        maxlen++;
        ll l = maxlen/2, b = maxlen - l;
        cout << l*b << endl;
    }
    return 0;
}