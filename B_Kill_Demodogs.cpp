#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;

int main(){
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll result = (337 * ((n * (n + 1) % MOD) % MOD * (4 * n - 1) % MOD) % MOD) % MOD;
        cout << result << endl;
    }
    return 0;
}