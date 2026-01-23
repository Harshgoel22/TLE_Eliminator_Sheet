#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--) {
        ll x, y, k; cin >> x >> y >> k;
        cout << (k*y + k - 1) / (x - 1) + k  + ((k*y + k - 1) % (x - 1) > 0)<< endl;
    }
    return 0;
}