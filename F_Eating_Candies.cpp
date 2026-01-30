#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> arr(n); for(ll i=0; i<n; i++) cin >> arr[i];

        ll leftsum = 0, rightsum = 0, left = 0, right = n-1, count = 0, maxcandies = 0;
        while(left < right) {
            leftsum += arr[left];
            rightsum += arr[right];
            count += 2;

            if(leftsum == rightsum) {
                maxcandies = max(maxcandies, count);
                left++;
                right--;
            }
            else if(leftsum < rightsum) {
                rightsum -= arr[right];
                count-=1;
                left++;
            }
            else {
                leftsum -= arr[left];
                count-=1;
                right--;
            }
        }

        cout << maxcandies << endl;
    }
    return 0;
}