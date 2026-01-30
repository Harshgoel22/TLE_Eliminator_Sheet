#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, b; cin >> n >> b;
        ll cost[n]; for(ll i=0; i<n; i++) { cin >> cost[i]; cost[i] += i+1; }
        sort(cost, cost+n);
        ll cumsum = 0, teleports = 0;
        for(ll i=0; i<n; i++) {
            cumsum += cost[i];
            if(cumsum <= b) teleports++;
            else break;
        }

        cout << teleports << endl;
    }
    return 0;
}