#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll arr[n]; for(ll i=0; i<n; i++) cin >> arr[i];
        
        ll result = 0;
        for(int i=0, j=n-1; i<j; i++, j--) {
            ll dif = abs(arr[j]-arr[i]);
            if(result == 0) result = dif;
            else if(dif != 0) result = __gcd(result, dif); 
        }

        cout << result << endl;
    }
    return 0;
}