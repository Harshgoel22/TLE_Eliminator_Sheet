#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll curr[n]; for(ll i=0; i<n; i++) cin >> curr[i];
        ll fin[n]; for(ll i=0; i<n; i++) cin >> fin[i];

        ll start = -1, end = -1;
        for(int i=0; i<n; i++) {
            if(curr[i]!=fin[i]) {
                if(start==-1) {
                    start = i;
                } else{
                    end = i;
                }
            }
        }

        if(start==-1) start = 0;
        if(end==-1) end = n-1;

        while(start>=1 && fin[start-1]<=fin[start]) start--;
        while(end<n-1 && fin[end]<=fin[end+1]) end++;

        cout << start+1 << " " << end+1 << endl;
    }
    return 0;
}