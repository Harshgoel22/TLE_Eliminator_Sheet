#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        sort(arr, arr+n);
        int diff[n] = {0};
        for(int i=1; i<n; i++) diff[i] = (arr[i]-arr[i-1]);

        int maxsuitablelen = 0, runlen = 0;
        for(int i=0; i<n; i++) {
            if(diff[i] <= k) runlen++;
            else {
                maxsuitablelen = max(maxsuitablelen, runlen);
                runlen = 1;
            }
        }
        maxsuitablelen = max(maxsuitablelen, runlen);

        cout << n-maxsuitablelen << endl;
    }
    return 0;
}