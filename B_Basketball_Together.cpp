#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, k; cin >> n >> k;
    ll arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

    sort(arr, arr+n);

    int i=0, j=n-1;
    ll result = 0;
    while(i<=j) {
        ll num = (k / arr[j]) + 1;
        if(num == 1) {
            result++;
            j--;
        } else if(i+num-1<=j){
            result++;
            j--;
            i+=num-1;
        } else break;
    }

    cout << result << endl;
    return 0;
}