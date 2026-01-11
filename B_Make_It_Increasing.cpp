#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        if(n==1) {
            cout << "0\n";
            continue;
        }

        bool notpos = false;
        int result = 0;
        for(int i=n-2; i>=0; i--) {
            while(arr[i+1] <= arr[i] && arr[i] != 0) {
                arr[i] = arr[i] / 2;
                result++;
            }
        }

        notpos = (arr[0]==arr[1]);
        cout << (notpos==true ? -1 : result) << endl;
    }
    return 0;
}