#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> arr(n), copyarr(n); for(ll i=0; i<n; i++) { cin >> arr[i]; copyarr[i] = arr[i]; }

        sort(copyarr.begin(), copyarr.end());

        vector<ll> unordered_nums;
        ll minnum = LONG_MAX, minidx = -1;
        for(ll i=0, j=0; i<n; i++) {
            if(arr[i]!=copyarr[i]) {
                unordered_nums.push_back(arr[i]);
                if(minnum > unordered_nums[j]) {
                    minnum = unordered_nums[j];
                    minidx = j;
                    j++;
                }
            }
        }

        ll result = unordered_nums[0];

        for(int i=1; i<unordered_nums.size(); i++) {
            result = (result & unordered_nums[i]);
        }

        cout << result << endl;
    }
    return 0;
}