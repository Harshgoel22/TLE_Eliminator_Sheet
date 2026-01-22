#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n,m; cin >> n >> m;
        long long arr[n][m], neg = 0, totalsum = 0, minnum = INT_MAX;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> arr[i][j];
                neg += (arr[i][j]<0);
                minnum = min(minnum, abs(arr[i][j]));
                totalsum += abs(arr[i][j]);
            }
        }

        cout << (neg%2==0 ? totalsum : totalsum-2*minnum) << endl;
    }
    return 0;
}