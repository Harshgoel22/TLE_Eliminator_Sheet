#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<ll> arr(n); 
        for(ll i=0; i<n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());
        bool flag = false;
        ll i=0, j=1;

        while(i<n && j<n) {
            ll absdif = abs(arr[i]-arr[j]);
            if(absdif == k) {
                flag = true;
                break;
            }
            else if(absdif > k) {
                i++;
                j = max(j, i+1);
            }
            else j++;
        }

        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}