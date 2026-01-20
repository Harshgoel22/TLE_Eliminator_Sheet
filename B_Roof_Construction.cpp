#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll num = n-1;
        while(num & (num-1)) {
            num = (num&(num-1));
        }
        
        for(ll nb=num-1; nb>=0; nb--) cout << nb << " ";
        for(ll nb=num; nb<n; nb++) cout << nb << " ";
        cout << endl;
    }
    return 0;
}