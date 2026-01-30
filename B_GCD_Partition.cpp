#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll arr[n]; for(ll i=0; i<n; i++) cin >> arr[i];
        ll postsum[n] = {0};
        postsum[n-1] = arr[n-1];
        for(ll i=n-2; i>=0; i--) {
            postsum[i] = postsum[i+1] + arr[i];
        }

        ll prefixsum = 0, postfixsum, result = 0;
        for(ll i=0; i<n-1; i++) {
            prefixsum += arr[i];
            postfixsum = postsum[i+1];
            result = max(result, __gcd(prefixsum, postfixsum));
        }

        cout << result << endl;
    }
    return 0;
}