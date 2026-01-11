#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        for(int epoch=1; epoch<=2; epoch++) {
            for(int i=0; i<n-1; i++) {
                if(arr[i+1]%arr[i]==0) {
                    if(arr[i]==1) {
                        arr[i] = 2;
                    }
                    else if(arr[i+1]==1e9) {
                        while(arr[i+1]%arr[i]==0) arr[i]++;
                    } 
                    else {
                        arr[i+1]++;
                    }
                }
            }
        }
        
        for(int i=0; i<n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}