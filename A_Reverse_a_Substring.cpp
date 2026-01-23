#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n; cin >> n;
    string s; cin >> s;
    ll last_small_idx = n-1;

    for(ll i=n-2; i>=0; i--) {
        if(s[i] > s[last_small_idx]) {
            cout << "YES\n" << i+1 << " " << last_small_idx+1 << endl;
            return 0;
        }
        else {
            last_small_idx = i;
        }
    }

    cout << "NO\n";
    return 0;
}