#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<pair<ll,ll>> vec;

        for(int i=0; i<n; i++) {
            ll m; cin >> m;
            ll firstsmallest = INT_MAX, secondsmallest = INT_MAX, currnum;
            
            for(int j=0; j<m; j++) {
                cin >> currnum;
                if(firstsmallest > currnum) {
                    secondsmallest = firstsmallest;
                    firstsmallest = currnum;
                } else if(secondsmallest > currnum){
                    secondsmallest = currnum;
                }
            }

            vec.push_back({firstsmallest,secondsmallest});
        }

        sort(vec.begin(), vec.end(), [](const pair<ll,ll>& p1, const pair<ll,ll>& p2){
            return p1.second > p2.second;
        });
        
        ll minelem = INT_MAX, lastnum = 0, result = 0;
        for(auto [fnum, snum] : vec) {
            minelem = min(minelem, fnum);
            result += snum;
            lastnum = snum;
        }

        cout << (result - lastnum + minelem) << endl;
    }
    return 0;
}