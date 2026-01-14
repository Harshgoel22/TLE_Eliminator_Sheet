#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n], mapping[n+1]; 
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            mapping[arr[i]] = i;
        }

        int result = -1;
        for(int num=n; num>=1; num--) {
            int j = mapping[num];
            if(j==0 || j==n-1) continue;
            else if(arr[j-1] < arr[j] && arr[j] > arr[j+1]) {
                result = j;
                break;
            }
        }
        
        if(result==-1) cout << "NO\n";
        else {
            cout << "YES\n";
            cout << result << " " << result + 1 << " " << result + 2 << endl;
        }
    }
    return 0;
}