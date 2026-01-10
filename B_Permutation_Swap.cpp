#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<pair<int,int>> arr(n); 
        for(int i=0; i<n; i++) {
            cin >> arr[i].first;
            arr[i].second = i;
        }

        if(n == 1) {
            cout << "1\n";
            continue;
        }

        sort(arr.begin(), arr.end());
        int result = -1;
        for(int sorted_idx=0; sorted_idx < n; sorted_idx++) {
            int prev_idx = arr[sorted_idx].second;
            int absdiff = abs(prev_idx-sorted_idx);
            if(result == -1) result = absdiff;
            else result = __gcd(result, absdiff);
        }

        cout << result << endl;
    }
    return 0;
}