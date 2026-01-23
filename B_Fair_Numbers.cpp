#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isValid(ll n) {
    ll num = n;
    while(num>0) {
        int div = num % 10;
        num /= 10;
        if(div!=0 && n%div!=0) return false; 
    }
    return true;
}

ll buffer = 1e5;

int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll result = n;
        for(ll nn=n; nn<=n+buffer; nn++) {
            if(isValid(nn)==true) {
                result = nn;
                break;
            }
        }

        cout << result << endl;
    }
    return 0;
}