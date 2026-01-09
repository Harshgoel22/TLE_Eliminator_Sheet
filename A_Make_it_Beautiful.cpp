#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        sort(arr, arr+n);
        if(arr[0]==arr[n-1]) cout << "NO\n";
        else {
            cout << "YES\n" << arr[n-1] << " ";
            for(int i=0; i<n-1; i++) cout << arr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}