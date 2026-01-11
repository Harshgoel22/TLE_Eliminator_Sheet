#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        int result = arr[n-1] - arr[0];
        for(int i=1; i<n; i++) result = max(result, arr[i]-arr[0]);
        for(int i=0; i<n-1; i++) result = max(result, arr[n-1]-arr[i]);
        for(int i=0; i<n-1; i++) result = max(result, arr[i]-arr[i+1]);

        cout << result << endl;
    }
    return 0;
}