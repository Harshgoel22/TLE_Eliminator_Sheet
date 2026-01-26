#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, q; cin >> n >> q;
        ll arr[n]; for(int i=0; i<n; i++) cin >> arr[i];
        ll query[q]; for(int i=0; i<q; i++) cin >> query[i];

        bool done[31] = {false};
        for(auto& qr : query) {
            if(done[qr]==true) continue;
            done[qr] = true;
            for(int i=0; i<n; i++) {
                if(arr[i]%(1ll<<qr) == 0) {
                    arr[i] += (1<<(qr-1));
                }
            }
        }

        for(int i=0; i<n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}