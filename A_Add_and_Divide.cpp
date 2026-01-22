#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll minsteps(ll a, ll b) {
    ll steps;
    for(steps=0; a>0; a/=b, steps++);
    return steps;
}

int main(){
    ll t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b;
        if(a==0) {
            cout << "0\n";
            continue;
        }

        if(a <= b) {
            cout << (a==b ? "2\n" : "1\n");
            continue;
        }

        ll minopr = INT_MAX, buffer = (b==1);
        for(ll nb=max(2ll,b); nb<b+36; nb++) {
            ll currsteps = buffer + (nb - max(2ll,b)) + minsteps(a, nb);
            minopr = min(minopr, currsteps);
        }
        cout << minopr << endl;
    }
    return 0;
}