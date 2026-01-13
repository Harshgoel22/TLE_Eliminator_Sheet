#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long arr[n]; for(int i=0; i<n; i++) cin >> arr[i];
        
        long long result = arr[0];
        for(int i=1; i<n; i++) result = (result & arr[i]);
        cout << result << endl;
    }
    return 0;
}