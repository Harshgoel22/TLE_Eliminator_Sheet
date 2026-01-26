#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll findcost(ll city1, ll city2, vector<pair<ll,ll>>& coord) {
    return abs(coord[city1-1].first-coord[city2-1].first) + abs(coord[city1-1].second-coord[city2-1].second);
}

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, k, a, b; cin >> n >> k >> a >> b;
        vector<pair<ll,ll>> coord;
        for(int i=0; i<n; i++) {
            ll x, y; cin >> x >> y;
            coord.push_back({x,y});
        } 

        if((a<=k && b<=k) || (a==b)) {
            cout << "0\n";
            continue;
        }

        ll costfromstarttofinal = findcost(a,b,coord);
        ll costfromstarttomajor = LLONG_MAX/2;
        ll costfrommajortofinal = LLONG_MAX/2;
        for(int i=0; i<k; i++) {
            costfromstarttomajor = min(costfromstarttomajor, findcost(a, i+1, coord));
            costfrommajortofinal = min(costfrommajortofinal, findcost(i+1, b, coord));
        }

        ll result = min({costfromstarttofinal, costfromstarttomajor+costfrommajortofinal});
        cout << result << endl;
    }
    return 0;
}