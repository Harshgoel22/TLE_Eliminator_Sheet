#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<pair<ll,ll>> arr(n); for(int i=0; i<n; i++) { cin >> arr[i].first; arr[i].second = i+1; }
        sort(arr.begin(), arr.end(), [](const pair<ll,ll>& p1, const pair<ll,ll>& p2){
            return p1.first > p2.first;
        });

        ll mapping[n+1], neg = -1, pos = 1, cost = 0;
        mapping[0] = 0;
        bool isneg = false;
        // +1 -1 +2 -2 +3 -3 +4 -4
        for(int i=0; i<n; i++) {
            if(isneg==true) {
                cost -= neg*arr[i].first;
                mapping[arr[i].second] = neg--;
                isneg = false;
            }
            else {
                cost += pos*arr[i].first;
                mapping[arr[i].second] = pos++;
                isneg = true;
            }
        }

        cout << 2*cost << endl;
        for(int i=0; i<n+1; i++) cout << mapping[i] << " ";
        cout << endl;
    }
    return 0;
}