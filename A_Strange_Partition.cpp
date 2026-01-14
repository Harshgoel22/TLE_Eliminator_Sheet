#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        long long arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        long long total = 0, minb = 0, maxb = 0;
        for(int num : arr) {
            total += num;
            maxb += ceil(1.0 * num / x);
        }

        minb = ceil(1.0 * total / x);
        cout << minb << " " << maxb << endl;
    }
    return 0;
}