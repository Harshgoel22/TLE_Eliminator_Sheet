#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, l, r; cin >> n >> l >> r;
        
        bool condition = true;
        vector<ll> result;

        for(ll i=1; i<=n; i++) {
            ll smallest_mulitple_of_i_greater_than_l = ceil(1.0*l / i) * i;
            if(smallest_mulitple_of_i_greater_than_l > r) {
                condition = false;
                break;
            }
            result.push_back(smallest_mulitple_of_i_greater_than_l);
        }

        if(condition) {
            cout << "YES\n";
            for(auto& num : result) cout << num << " ";
            cout << endl;
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}