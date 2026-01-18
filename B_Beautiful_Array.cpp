#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll n, k, b, s; cin >> n >> k >> b >> s;

        ll ab = (s/k);
        if(b > ab) {
            cout << "-1\n";
            continue;
        }

        ll maxnumpos = min(k*(b+1)-1, s);
        ll remmaxsumpos = (n-1)*(k-1);
        ll remsumreq = s - maxnumpos;
        if(remsumreq > remmaxsumpos) {
            cout << "-1\n";
            continue;
        }

        cout << maxnumpos << " ";
        for(int i=1; i<n; i++) {
            if(remsumreq>=k-1) cout << k-1 << " ";
            else cout << remsumreq << " ";
            remsumreq -= min(remsumreq, k-1);
        }
        cout << endl;
    }
    return 0;
}