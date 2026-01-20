#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll w, h; cin >> w >> h;
        vector<ll> x0, xh; 
        ll k, temp;
        for(int i=0; i<2; i++) {
            cin >> k;
            while(k--) { cin >> temp; if(i==0){ x0.push_back(temp); } else { xh.push_back(temp); } }
        }

        vector<ll> y0, yw;
        for(int i=0; i<2; i++) {
            cin >> k;
            while(k--) { cin >> temp; if(i==0){ y0.push_back(temp); } else { yw.push_back(temp); } }
        }

        ll result = max({
            h*(x0[x0.size()-1]-x0[0]),
            h*(xh[xh.size()-1]-xh[0]),
            w*(y0[y0.size()-1]-y0[0]),
            w*(yw[yw.size()-1]-yw[0])
        });

        cout << result << endl;
    }
    return 0;
}