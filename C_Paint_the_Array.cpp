#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll arr[n]; for(ll i=0; i<n; i++) cin >> arr[i];

        ll gcd1 = arr[0], gcd2 = arr[1];
        for(ll i=0; i<n; i++) {
            if(i%2==0) gcd1 = __gcd(gcd1, arr[i]);
            else gcd2 = __gcd(gcd2, arr[i]);
        }

        ll result = 0, flag = 1;
        for(ll i=0; i<n-1; i++) {
            if(arr[i]%gcd1 == arr[i+1]%gcd1) {
                flag = 0;
            }
        }
        result = (flag==1 ? gcd1 : result);

        flag = 1;
        for(ll i=0; i<n-1; i++) {
            if(arr[i]%gcd2 == arr[i+1]%gcd2) {
                flag = 0;
            }
        }
        result = (flag==1 ? max(result, gcd2) : result);

        cout << result << endl;
    }
    return 0;
}