#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        int result = 0;
        for(int i=0; i<n; i++) {
            if(arr[i]!=0 && (i==0 || arr[i-1]==0)) result++;
        }
        cout << min(2,result) << endl;
    }
    return 0;
}