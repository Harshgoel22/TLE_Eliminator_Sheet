#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll arr[n]; 
        set<ll> present; bool valid = false;
        for(ll i=0; i<n; i++) {
            cin >> arr[i];
            if(present.find(arr[i])!=present.end()) {
                valid = true;
            }
            else present.insert(arr[i]);
        } 

        cout << (valid==true ? "YES\n" : "NO\n");
    }
    return 0;
}