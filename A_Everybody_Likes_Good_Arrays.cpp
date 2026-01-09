#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        int i=0, j, result=0;
        while(i<n) {
            j = i;
            while(j<n && arr[j]%2==arr[i]%2) j++;
            int connum = j-i;
            result += (connum-1);
            i = j;
        }

        cout << result << endl;
    }
    return 0;
}