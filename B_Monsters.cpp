#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<ll,ll>

int main() {
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        ll arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        vector<pll> maxheap;
        for(int i=0; i<n; i++) {
            ll rem = arr[i] % k;
            rem = (rem == 0 ? k : rem);
            maxheap.push_back({rem, i});
        }

        sort(maxheap.begin(), maxheap.end(), [](const pll& p1, const pll& p2){
            if(p1.first == p2.first) return p1.second < p2.second;
            return p1.first > p2.first;
        });

        for(auto [elem, idx] : maxheap) {
            cout << idx+1 << " ";
        }
        cout << endl;
    }
    return 0;
}

