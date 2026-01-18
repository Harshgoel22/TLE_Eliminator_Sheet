#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll arr[n]; for(int i=0; i<n; i++) cin >> arr[i];
        
        unordered_map<ll, vector<int>> numtoidx;
        for(int i=0; i<n; i++) {
            numtoidx[arr[i]].push_back(i);
        }

        bool invalid = false;
        vector<int> mapping(n, -1);
        for(auto& [num, vecidx] : numtoidx) {
            int i=0, sz = vecidx.size(), j = sz - 1;
            if(i == j) {
                invalid = true;
                break;
            }

            while(i<sz) {
                mapping[vecidx[i]] = vecidx[j];
                j = (j+1) % sz;
                i++;
            }
        }

        if(invalid) {
            cout << "-1\n";
        } else{
            for(int i=0; i<n; i++) {
                cout << mapping[i]+1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}