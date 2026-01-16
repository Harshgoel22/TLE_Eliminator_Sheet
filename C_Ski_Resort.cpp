#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll n, k, q; cin >> n >> k >> q;
        ll arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        ll result = 0, running = 0, len = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] <= q) len++;
            else {
                result += running;
                len = 0;
                running = 0;
            }

            if(len >= k) {
                running += (len-k+1);
            }
        }

        result += running;

        cout << result << endl;
    }
    return 0;
}