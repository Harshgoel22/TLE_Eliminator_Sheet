#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll arr[n]; for(ll i=0; i<n; i++) cin >> arr[i];

        bool prev = false, newstart = true;
        ll runningsum = 0, maxsum = INT_MIN;

        for(ll i=0; i<n; i++) {
            if(newstart == true) {
                if(arr[i] <= 0) {
                    maxsum = max(maxsum, arr[i]);
                } else {
                    runningsum = arr[i];
                    prev = (arr[i]%2==0);
                    newstart = false;
                    maxsum = max(maxsum, runningsum);
                }
                continue;
            }

            bool curr = (arr[i]%2==0);
            if((prev^curr)==1) {
                runningsum += arr[i];
            }
            else {
                runningsum = arr[i];
            }
            prev = curr;
            maxsum = max(maxsum, runningsum);
            if(runningsum <= 0) {
                newstart = true;
                runningsum = 0;
            }
        }

        cout << maxsum << endl;
    }
    return 0;
}