#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
     while(t--) {
        int n; cin >> n;
        long long arr[n], zero = 0, one = 0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            zero += (arr[i]==0);
            one += (arr[i]==1);
        }

        cout << (1ll * (1ll<<zero) * one) << endl;
     }
    return 0;
}