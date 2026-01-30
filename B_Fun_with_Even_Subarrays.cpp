#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll arr[n]; for(ll i=0; i<n; i++) cin >> arr[i];

        ll ops = 0, i = n-1;
        while(i>=0 && arr[i]==arr[n-1]) i--;
        
        while(i>=0) {
            i -= (n-1-i);
            ops++;
            while(i>=0 && arr[i]==arr[n-1]) i--;
        }

        cout << ops << endl;
    }
    return 0;
}