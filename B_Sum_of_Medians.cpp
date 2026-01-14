#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int k, n; cin >> n >> k;
        long long arr[k*n]; for(int i=0; i<k*n; i++) cin >> arr[i];

        int start = ceil(1.0*n/2) - 1, end = n*k - n + start;
        long long result = 0;
        for(int i=end, j=0; j<k; i-=(n-start), j++) {
            result += arr[i];
        }
        cout << result << endl;
    }
    return 0;
}