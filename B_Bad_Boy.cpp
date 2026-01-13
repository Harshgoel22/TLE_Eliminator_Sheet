#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while(t--) {
        long long n, m, i, j; cin >> n >> m >> i >> j;
        long long cost[6] = {0};
        vector<vector<long long>> poss_pairs = {{1,m,n,1},{1,1,n,m},{1,1,1,m},{n,1,n,m},{1,1,n,1},{1,m,n,m}};
 
        cost[0] = (n+m);
        cost[1] = (n+m);
        cost[2] = (i+m);
        cost[3] = (n+m-i);
        cost[4] = (n+j);
        cost[5] = (n+m-j);
 
        long long maxidx = -1, maxval = 0;
        for(int i=0; i<6; i++) {
            if(cost[i] > maxval) {
                maxval = cost[i];
                maxidx = i;
            }
        }
 
        vector<long long> coord = poss_pairs[maxidx];
        cout << coord[0] << " " << coord[1] << " " << coord[2] << " " << coord[3] << endl;
    }
    return 0;
}