#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        bool found = false;
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if(__gcd(arr[i],arr[j])<=2) {
                    found = true;
                    break;
                }
            }
        }

        cout << ((found==true) ? "Yes\n" : "No\n");
    }
    return 0;
}