#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        sort(arr, arr+n);
        int maxcontcnt = 1, runcnt = 1;
        for(int i=1; i<n; i++) {
            if(arr[i] == arr[i-1]) {
                runcnt++;
            } else runcnt = 1;
            maxcontcnt = max(maxcontcnt, runcnt);
        }

        if(maxcontcnt == n) {
            cout << "0\n";
            continue;
        }
        
        int num_of_copies = ceil(log2(ceil((n*1.0)/maxcontcnt))), num_of_swaps = n - maxcontcnt;
        cout << num_of_copies + num_of_swaps << endl;
    }
    return 0;
}